/*
 * XREFs of _RtlOpenModernAppOptionsKey@12 @ 0x4B33FDAB
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 */

NTSTATUS __fastcall RtlOpenModernAppOptionsKey(_UNICODE_STRING *a1, void *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-20h] BYREF
  HANDLE KeyHandle; // [esp+1Ch] [ebp-8h] BYREF

  if ( RtlpModernAppKey )
  {
    *a3 = RtlpModernAppKey;
  }
  else
  {
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( result < 0 )
      return result;
    if ( _InterlockedCompareExchange(&RtlpModernAppKey, (signed __int32)KeyHandle, 0) )
      NtClose(KeyHandle);
    *a3 = RtlpModernAppKey;
  }
  return 0;
}
