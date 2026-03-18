/*
 * XREFs of GetWin8StyleDpiSettingFromRegistry @ 0x1C00055F4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 GetWin8StyleDpiSettingFromRegistry()
{
  if ( qword_1C02512D8 )
    return qword_1C02512D8(&gDrvDpiWin8Style);
  else
    return 3221225659LL;
}
