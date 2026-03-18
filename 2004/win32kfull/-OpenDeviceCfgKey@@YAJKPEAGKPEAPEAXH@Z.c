/*
 * XREFs of ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C0041CB0
 * Callers:
 *     EditionGetPointerDeviceConfigurationKey @ 0x1C0041BE0 (EditionGetPointerDeviceConfigurationKey.c)
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C0042308 (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C0209F30 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C020A12C (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C020A2D0 (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0041E2C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0042034 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?IsTouchpadQuery@@YAHKPEAG@Z @ 0x1C004228C (-IsTouchpadQuery@@YAHKPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDeviceCfgKey(unsigned int a1, unsigned __int16 *a2, ACCESS_MASK a3, void **a4, int a5)
{
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v13; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char v16; // [rsp+A0h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  if ( a1 <= 0x15E )
  {
    *(_QWORD *)&v13.Length = 45875200LL;
    v13.Buffer = (PWSTR)&v16;
    if ( (unsigned int)IsTouchpadQuery(a1, a2) )
    {
      if ( grpWinStaList )
        v8 = RtlUnicodeStringCopy(&v13, (const struct _UNICODE_STRING *)(grpWinStaList + 200LL));
      else
        v8 = -1073741595;
    }
    else
    {
      KeyPath = 0LL;
      v8 = RtlFormatCurrentUserKeyPath(&KeyPath);
      if ( v8 < 0 )
        return (unsigned int)v8;
      v8 = RtlUnicodeStringCopy(&v13, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
    }
    if ( v8 >= 0 )
    {
      v8 = RtlUnicodeStringCatString(&v13, a2);
      if ( v8 >= 0 )
      {
        ObjectAttributes.ObjectName = &v13;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.RootDirectory = 0LL;
        if ( a5 )
        {
          Disposition = 0;
          v9 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        }
        else
        {
          v9 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
        }
        v8 = v9;
        if ( v9 >= 0 )
          *a4 = KeyHandle;
      }
    }
    return (unsigned int)v8;
  }
  return 2147483653LL;
}
