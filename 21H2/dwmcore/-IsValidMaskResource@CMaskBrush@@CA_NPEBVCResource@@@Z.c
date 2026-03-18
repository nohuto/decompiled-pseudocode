/*
 * XREFs of ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800DFE68
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800DFC30 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x1800DFDC8 (-ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CMaskBrush::IsValidMaskResource(const struct CResource *a1)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 180LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 71LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 111LL) )
  {
    return 1;
  }
  return v2;
}
