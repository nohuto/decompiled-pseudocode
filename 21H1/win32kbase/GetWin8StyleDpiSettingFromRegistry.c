/*
 * XREFs of GetWin8StyleDpiSettingFromRegistry @ 0x1C0005634
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 GetWin8StyleDpiSettingFromRegistry()
{
  if ( qword_1C0257298 )
    return qword_1C0257298(&gDrvDpiWin8Style);
  else
    return 3221225659LL;
}
