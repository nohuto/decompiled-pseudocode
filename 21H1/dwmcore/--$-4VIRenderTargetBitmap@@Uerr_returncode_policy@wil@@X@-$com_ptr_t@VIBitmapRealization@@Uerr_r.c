/*
 * XREFs of ??$?4VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x18001E2D0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18006DE6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=<IRenderTargetBitmap,wil::err_returncode_policy,void>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rcx

  v2 = *a2;
  *a2 = 0LL;
  if ( v2 )
    v4 = *(int *)(*(_QWORD *)(v2 + 8) + 16LL) + v2 + 8;
  else
    v4 = 0LL;
  v5 = *a1;
  *a1 = v4;
  if ( v5 )
  {
    v7 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a1;
}
