/*
 * XREFs of _GetLocalMachineRegistryDWORDValues@12 @ 0x997D6
 * Callers:
 *     ?IsFlicksDisabledByGroupPolicy@@YGHXZ @ 0x99786 (-IsFlicksDisabledByGroupPolicy@@YGHXZ.c)
 *     _EditionOverrideUserTouchGestureSettings@8 @ 0xF3746 (_EditionOverrideUserTouchGestureSettings@8.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YGXXZ @ 0x16DA9C (-_ReadSettingsFromRegKey@PalmRejection@@YGXXZ.c)
 * Callees:
 *     ?RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0x998EA (-RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734 (-RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall GetLocalMachineRegistryDWORDValues(int a1, int a2, int *a3)
{
  NTSTATUS v3; // esi
  struct _UNICODE_STRING *v5; // [esp+0h] [ebp-30Ch]
  struct _UNICODE_STRING *v6; // [esp+0h] [ebp-30Ch]
  const unsigned __int16 *v7; // [esp+4h] [ebp-308h]
  const unsigned __int16 *v8; // [esp+4h] [ebp-308h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-300h] BYREF
  int v10; // [esp+24h] [ebp-2E8h] BYREF
  int v11; // [esp+28h] [ebp-2E4h]
  int v12; // [esp+2Ch] [ebp-2E0h]
  int v13; // [esp+30h] [ebp-2DCh]
  _DWORD v14[2]; // [esp+34h] [ebp-2D8h] BYREF
  void *KeyHandle; // [esp+3Ch] [ebp-2D0h] BYREF
  char v16; // [esp+40h] [ebp-2CCh] BYREF

  KeyHandle = 0;
  v13 = a2;
  v14[0] = 45875200;
  v14[1] = &v16;
  v10 = *a3;
  v11 = a3[1];
  v12 = a3[2];
  v3 = RtlUnicodeStringCopyString(v5, v7);
  if ( v3 >= 0 )
  {
    v3 = RtlUnicodeStringCatString(v6, v8);
    if ( v3 >= 0 )
    {
      ObjectAttributes.Length = 24;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v3 >= 0 )
      {
        v3 = ReadPointerDeviceCfgDWORDSetting(KeyHandle, &v10);
        if ( v3 >= 0 && v12 != v11 )
        {
          a3[2] = v12;
          v3 = 0;
        }
        ZwClose(KeyHandle);
      }
    }
  }
  return v3;
}
