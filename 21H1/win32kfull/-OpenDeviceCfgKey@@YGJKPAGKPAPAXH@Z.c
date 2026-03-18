/*
 * XREFs of ?OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z @ 0x9CFD8
 * Callers:
 *     ?GetFlickMap@@YGHPAUtagFLICK_MAP@@@Z @ 0x9CC9E (-GetFlickMap@@YGHPAUtagFLICK_MAP@@@Z.c)
 *     _EditionGetPointerDeviceConfigurationKey@8 @ 0xF36AC (_EditionGetPointerDeviceConfigurationKey@8.c)
 *     ?GetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z @ 0x16F6E7 (-GetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z @ 0x16F840 (-SetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YGHPAUtagFLICK_MAP@@H@Z @ 0x16F93D (-SetFlickMap@@YGHPAUtagFLICK_MAP@@H@Z.c)
 * Callees:
 *     ?IsTouchpadQuery@@YGHKPAG@Z @ 0x9D122 (-IsTouchpadQuery@@YGHKPAG@Z.c)
 *     ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734 (-RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     ?RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z @ 0xD9756 (-RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __userpurge OpenDeviceCfgKey@<eax>(
        unsigned int a1@<ecx>,
        ACCESS_MASK DesiredAccess,
        unsigned __int16 *a3,
        unsigned int a4,
        void **a5,
        int a6)
{
  NTSTATUS v6; // esi
  NTSTATUS v7; // eax
  unsigned int v9; // [esp+0h] [ebp-304h]
  struct _UNICODE_STRING *v10; // [esp+0h] [ebp-304h]
  unsigned __int16 *v11; // [esp+4h] [ebp-300h]
  const struct _UNICODE_STRING *v12; // [esp+4h] [ebp-300h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-2F8h] BYREF
  _DWORD v14[2]; // [esp+24h] [ebp-2E0h] BYREF
  struct _UNICODE_STRING KeyPath; // [esp+2Ch] [ebp-2D8h] BYREF
  void *KeyHandle; // [esp+34h] [ebp-2D0h] BYREF
  char v17; // [esp+38h] [ebp-2CCh] BYREF

  KeyHandle = 0;
  if ( a1 <= 0x15E )
  {
    v14[0] = 45875200;
    v14[1] = &v17;
    if ( IsTouchpadQuery(v9, v11) )
    {
      if ( _grpWinStaList )
        v6 = RtlUnicodeStringCopy(v10, v12);
      else
        v6 = -1073741595;
    }
    else
    {
      *(_DWORD *)&KeyPath.Length = 0;
      KeyPath.Buffer = 0;
      v6 = RtlFormatCurrentUserKeyPath(&KeyPath);
      if ( v6 < 0 )
        return v6;
      v6 = RtlUnicodeStringCopy(v10, v12);
      RtlFreeUnicodeString(&KeyPath);
    }
    if ( v6 >= 0 )
    {
      v6 = RtlUnicodeStringCatString(v10, &v12->Length);
      if ( v6 >= 0 )
      {
        ObjectAttributes.Length = 24;
        ObjectAttributes.RootDirectory = 0;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
        ObjectAttributes.SecurityDescriptor = 0;
        ObjectAttributes.SecurityQualityOfService = 0;
        if ( a4 )
        {
          KeyPath.Buffer = 0;
          v7 = ZwCreateKey(&KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0, 0, (PULONG)&KeyPath.Buffer);
        }
        else
        {
          v7 = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
        }
        v6 = v7;
        if ( v7 >= 0 )
          *(_DWORD *)a3 = KeyHandle;
      }
    }
    return v6;
  }
  return -2147483643;
}
