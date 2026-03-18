/*
 * XREFs of ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C000AEE4
 * Callers:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C000AD98 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0256224 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C007AC9C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C007AF58 (RtlUnicodeStringValidateDestWorker.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlSettings::_OpenDeviceKey(
        InteractiveControlSettings *this,
        ACCESS_MASK a2,
        __int64 a3,
        void **a4)
{
  NTSTATUS v6; // edx
  const wchar_t *v7; // r10
  __int16 v8; // bx
  __int64 v9; // r11
  __int16 v10; // r8
  size_t v11; // r9
  char *v12; // rcx
  PUNICODE_STRING Class; // [rsp+20h] [rbp-E0h]
  ULONG CreateOptions; // [rsp+28h] [rbp-D8h]
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  size_t pcchDest; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcchDestLength; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *ppszDest; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char v22; // [rsp+A0h] [rbp-60h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  if ( grpWinStaList )
  {
    *(_DWORD *)&DestinationString.Length = 45875200;
    DestinationString.Buffer = (PWSTR)&v22;
    v6 = RtlUnicodeStringCopy(&DestinationString, (const struct _UNICODE_STRING *)(grpWinStaList + 200LL));
    if ( v6 >= 0 )
    {
      ppszDest = 0LL;
      pcchDest = 0LL;
      pcchDestLength = 0LL;
      v6 = RtlUnicodeStringValidateDestWorker(
             &DestinationString,
             &ppszDest,
             &pcchDest,
             &pcchDestLength,
             (const size_t)Class,
             CreateOptions);
      if ( v6 >= 0 )
      {
        v7 = L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl";
        v8 = pcchDestLength;
        v9 = 0x7FFFLL;
        v6 = 0;
        v10 = 0;
        v11 = pcchDest - pcchDestLength;
        if ( pcchDest == pcchDestLength )
          goto LABEL_19;
        v12 = (char *)ppszDest
            + 2 * pcchDestLength
            - (_QWORD)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl";
        do
        {
          if ( !v9 )
            break;
          if ( !*v7 )
            break;
          *(const wchar_t *)((char *)v7 + (_QWORD)v12) = *v7;
          --v9;
          ++v7;
          ++v10;
          --v11;
        }
        while ( v11 );
        if ( !v11 && v9 && *v7 )
LABEL_19:
          v6 = -2147483643;
        DestinationString.Length = 2 * (v8 + v10);
      }
      if ( v6 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( v6 < 0 )
          v6 = ZwCreateKey(&KeyHandle, a2, &ObjectAttributes, 0, 0LL, 0, 0LL);
        *a4 = KeyHandle;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v6;
}
