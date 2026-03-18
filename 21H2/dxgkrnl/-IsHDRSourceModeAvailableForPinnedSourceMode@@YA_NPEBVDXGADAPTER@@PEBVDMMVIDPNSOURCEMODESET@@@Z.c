/*
 * XREFs of ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C03AB970
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C01BD518 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00690EC (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1C01E7CF0 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 */

char __fastcall IsHDRSourceModeAvailableForPinnedSourceMode(
        const struct DXGADAPTER *a1,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  int PreferredHdrPixelFormat; // eax
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // r8
  const struct DMMVIDPNSOURCEMODE *NextMode; // rcx

  PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(*((_QWORD *)a1 + 349));
  v5 = *(_QWORD *)(v4 + 144);
  v6 = PreferredHdrPixelFormat;
  if ( !v5 )
    return 0;
  v7 = *(_QWORD *)(v5 + 76);
  v8 = *(_QWORD *)(v4 + 48);
  if ( v8 == v4 + 48 )
    return 0;
  NextMode = (const struct DMMVIDPNSOURCEMODE *)(v8 - 8);
  if ( v8 == 8 )
    return 0;
  while ( (*((_DWORD *)NextMode + 18) != 1
        || v7 != *(_QWORD *)((char *)NextMode + 76)
        || v6 != 2
        || *((_DWORD *)NextMode + 24) != 113)
       && (v6 != 1 || *((_DWORD *)NextMode + 24) != 35) )
  {
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a2, NextMode);
    if ( !NextMode )
      return 0;
  }
  return 1;
}
