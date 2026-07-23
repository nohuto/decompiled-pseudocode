/*
 * XREFs of CmpMigrateOOBELanguageToInstallationLanguage @ 0x140A5AEEC
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 */

__int64 CmpMigrateOOBELanguageToInstallationLanguage()
{
  NTSTATUS v1; // ebx
  unsigned __int16 v2; // dx
  __int64 i; // r8
  __int16 v4; // ax
  unsigned __int16 v5; // cx
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-48h] BYREF
  __int64 Data; // [rsp+68h] [rbp-18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Data = 0LL;
  if ( !CmInstallUILanguageFallbackToOOBm )
    return 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpCurrentControlSetControlNlsLanguagePathString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v1 >= 0 )
  {
    v2 = PsInstallUILanguageId;
    for ( i = 3LL; i >= 0; --i )
    {
      v4 = 55;
      v5 = v2 & 0xF;
      if ( v5 <= 9u )
        v4 = 48;
      v2 >>= 4;
      *((_WORD *)&Data + i) = v5 + v4;
    }
    v1 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpInstallLanguageString, 0, 1u, &Data, 8u);
    if ( v1 >= 0 )
      v1 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v1;
}
