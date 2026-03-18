/*
 * XREFs of ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEA3C
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800FE630 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801C9D98 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::NotifyRenderedRect(__int64 a1, __int128 *a2, char a3, __int64 a4)
{
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v10[4]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0LL;
  if ( !a3 )
  {
    v9 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(a1 + 216, (__int64)a2, (float *)&v9, a4);
    a2 = &v9;
  }
  v5 = PixelAlign(v10, (__int64)a2);
  v6 = *(_QWORD *)(a1 + 168);
  v8 = *(_OWORD *)v5;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 16LL))(v6, &v8);
  *(_BYTE *)(a1 + 384) = 1;
  return result;
}
