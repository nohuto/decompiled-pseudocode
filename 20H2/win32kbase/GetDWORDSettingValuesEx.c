/*
 * XREFs of GetDWORDSettingValuesEx @ 0x1C008B610
 * Callers:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C008B56C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     GetDWORDSettingValues @ 0x1C008B5F0 (GetDWORDSettingValues.c)
 *     ReadPointerDeviceSettings @ 0x1C008BF30 (ReadPointerDeviceSettings.c)
 *     TryUpdatePTPConfigFromRegistry @ 0x1C008DEF8 (TryUpdatePTPConfigFromRegistry.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C008B6B0 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1C008B770 (ReadPointerDeviceCfgDWORDSetting.c)
 */

__int64 __fastcall GetDWORDSettingValuesEx(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  void *PointerDeviceConfigurationKey; // r14
  unsigned int v8; // edi
  _DWORD *v10; // rbx

  v5 = a3;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(a1, 131097LL);
  if ( PointerDeviceConfigurationKey )
  {
    v8 = 1;
    if ( (_DWORD)v5 )
    {
      v10 = (_DWORD *)(a2 + 12);
      do
      {
        if ( (int)ReadPointerDeviceCfgDWORDSetting(PointerDeviceConfigurationKey) < 0 )
        {
          if ( a4 )
            *v10 = *(v10 - 1);
          else
            *v10 = -1;
        }
        a2 += 16LL;
        v10 += 4;
        --v5;
      }
      while ( v5 );
    }
    ZwClose(PointerDeviceConfigurationKey);
  }
  else
  {
    return 0;
  }
  return v8;
}
