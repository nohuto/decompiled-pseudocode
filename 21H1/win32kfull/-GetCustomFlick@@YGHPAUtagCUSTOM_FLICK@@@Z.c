/*
 * XREFs of ?GetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z @ 0x16F6E7
 * Callers:
 *     _ReadPointerDeviceSettingsFull@8 @ 0xF3780 (_ReadPointerDeviceSettingsFull@8.c)
 * Callees:
 *     ?ReadPointerDeviceCfgStringSetting@@YGJPAXPBGPAGK@Z @ 0x9CF2E (-ReadPointerDeviceCfgStringSetting@@YGJPAXPBGPAGK@Z.c)
 *     ?OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z @ 0x9CFD8 (-OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z.c)
 *     ?GetCustomFlickPath@@YGHABU_GUID@@PAU_UNICODE_STRING@@@Z @ 0x16F7C3 (-GetCustomFlickPath@@YGHABU_GUID@@PAU_UNICODE_STRING@@@Z.c)
 */

BOOL __thiscall GetCustomFlick(int this)
{
  NTSTATUS PointerDeviceCfgDWORDSetting; // esi
  NTSTATUS v3; // eax
  HANDLE v4; // edi
  const struct _GUID *v6; // [esp+0h] [ebp-30h]
  void **v7; // [esp+0h] [ebp-30h]
  unsigned __int16 *v8; // [esp+0h] [ebp-30h]
  struct _UNICODE_STRING *v9; // [esp+4h] [ebp-2Ch]
  int v10; // [esp+4h] [ebp-2Ch]
  unsigned int v11; // [esp+4h] [ebp-2Ch]
  _DWORD v12[2]; // [esp+Ch] [ebp-24h] BYREF
  int v13; // [esp+14h] [ebp-1Ch]
  _DWORD v14[2]; // [esp+18h] [ebp-18h] BYREF
  int v15; // [esp+20h] [ebp-10h]
  int v16; // [esp+24h] [ebp-Ch]
  int v17; // [esp+28h] [ebp-8h]
  HANDLE Handle; // [esp+2Ch] [ebp-4h] BYREF

  v16 = 0;
  v17 = 0;
  PointerDeviceCfgDWORDSetting = -1073741595;
  Handle = 0;
  if ( GetCustomFlickPath(v6, v9) )
  {
    *(_WORD *)(v17 + 2 * ((unsigned __int16)v16 >> 1)) = 0;
    v3 = OpenDeviceCfgKey(HIWORD(v16), 0x20019u, (unsigned __int16 *)&Handle, 0, v7, v10);
    v4 = Handle;
    PointerDeviceCfgDWORDSetting = v3;
    if ( v3 >= 0 )
    {
      v14[0] = L"ModifierKeys";
      v14[1] = 0;
      v15 = 0;
      v12[1] = 0;
      v13 = 0;
      v12[0] = L"KeyCode";
      PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(Handle, v14);
      if ( PointerDeviceCfgDWORDSetting >= 0 )
      {
        *(_DWORD *)(this + 16) = v15;
        PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(v4, v12);
        if ( PointerDeviceCfgDWORDSetting >= 0 )
        {
          *(_DWORD *)(this + 20) = v13;
          PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgStringSetting(
                                           L"FriendlyName",
                                           v4,
                                           (char *)(this + 28),
                                           0x104u,
                                           v8,
                                           v11);
        }
      }
    }
    if ( v4 )
      ZwClose(v4);
    Win32FreePool(v17);
  }
  return PointerDeviceCfgDWORDSetting >= 0;
}
