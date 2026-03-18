/*
 * XREFs of ?_OpenDeviceKey@InteractiveControlSettings@@IAEJKHPAPAX@Z @ 0xD7654
 * Callers:
 *     ?ReadSettings@InteractiveControlSettings@@QAEJXZ @ 0xD7548 (-ReadSettings@InteractiveControlSettings@@QAEJXZ.c)
 *     ?WriteSettings@InteractiveControlSettings@@QAEJXZ @ 0x1B15A7 (-WriteSettings@InteractiveControlSettings@@QAEJXZ.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734 (-RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     ?RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z @ 0xD9756 (-RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall InteractiveControlSettings::_OpenDeviceKey(
        InteractiveControlSettings *this,
        ACCESS_MASK DesiredAccess,
        int a3,
        void **a4)
{
  NTSTATUS v4; // ecx
  struct _UNICODE_STRING *v6; // [esp+0h] [ebp-2FCh]
  struct _UNICODE_STRING *v7; // [esp+0h] [ebp-2FCh]
  const struct _UNICODE_STRING *v8; // [esp+4h] [ebp-2F8h]
  const unsigned __int16 *v9; // [esp+4h] [ebp-2F8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-2F0h] BYREF
  _DWORD v11[2]; // [esp+24h] [ebp-2D8h] BYREF
  void *KeyHandle; // [esp+2Ch] [ebp-2D0h] BYREF
  char v13; // [esp+30h] [ebp-2CCh] BYREF

  KeyHandle = 0;
  if ( !_grpWinStaList )
    return -1073741595;
  v11[0] = 45875200;
  v11[1] = &v13;
  v4 = RtlUnicodeStringCopy(v6, v8);
  if ( v4 >= 0 )
  {
    v4 = RtlUnicodeStringCatString(v7, v9);
    if ( v4 >= 0 )
    {
      ObjectAttributes.Length = 24;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      v4 = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
      if ( v4 < 0 )
        v4 = ZwCreateKey(&KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0, 0, 0);
      *a4 = KeyHandle;
    }
  }
  return v4;
}
