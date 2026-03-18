/*
 * XREFs of IsDrvRealizeHalftonePaletteSupported @ 0x1C01FD254
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvEnableMDEV @ 0x1C00B09B8 (DrvEnableMDEV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDrvRealizeHalftonePaletteSupported()
{
  if ( qword_1C0257240 )
    return qword_1C0257240();
  else
    return 3221225659LL;
}
