/*
 * XREFs of DpiGdoCreateServiceEntry @ 0x1C018430C
 * Callers:
 *     DpiGdoSetupGdiParameters @ 0x1C0183C6C (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     wcsrchr_0 @ 0x1C002440F (wcsrchr_0.c)
 */

__int64 __fastcall DpiGdoCreateServiceEntry(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  wchar_t *v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+6Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Video");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v7 = (wchar_t *)v4;
  if ( v4 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v10 + 24) = v7;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    v7 = wcsrchr_0(*(const wchar_t **)(a1 + 8), 0x5Cu) + 1;
    RtlInitUnicodeString(&ValueName, L"Service");
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    LODWORD(v7) = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v7, 2 * v8 + 2);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v7;
}
