/*
 * XREFs of ?GetNonVisualSurfaceBitmapResource@CSurfaceBrush@@AEBAJPEAPEAVIBitmapResource@@@Z @ 0x180057D74
 * Callers:
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18001CC60 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18004D020 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetNonVisualSurfaceBitmapResource(CSurfaceBrush *this, struct IBitmapResource **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 12);
  if ( v4 && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, 200LL) )
    return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IBitmapResource **))this + 12))(
             *((_QWORD *)this + 12),
             &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
             a2);
  *a2 = 0LL;
  return 2291674892LL;
}
