/*
 * XREFs of GetWin8StyleDpiSettingFromRegistry @ 0x1C00055F4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 GetWin8StyleDpiSettingFromRegistry()
{
  if ( qword_1C024F2D8 )
    return qword_1C024F2D8(&gDrvDpiWin8Style);
  else
    return 3221225659LL;
}
