/*
 * XREFs of _RtlpHpApplySegmentHeapConfigurations@0 @ 0x4B358394
 * Callers:
 *     _RtlSetLowFragHeapGlobalFlags@8 @ 0x4B35708B (_RtlSetLowFragHeapGlobalFlags@8.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlpHpApplySegmentHeapConfigurations()
{
  int result; // eax
  ULONG ResultLength; // [esp+0h] [ebp-38h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-34h] BYREF
  HANDLE KeyHandle; // [esp+1Ch] [ebp-1Ch] BYREF
  _BYTE KeyValueInformation[8]; // [esp+20h] [ebp-18h] BYREF
  int v5; // [esp+28h] [ebp-10h]
  int v6; // [esp+2Ch] [ebp-Ch]

  ObjectAttributes.Length = 24;
  KeyHandle = 0;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&dword_4B281C30;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_4B281C20,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && v5 == 4 )
    {
      if ( v6 )
        RtlpLowFragHeapGlobalFlags |= 0x10u;
      else
        RtlpLowFragHeapGlobalFlags |= 8u;
    }
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}
