/*
 * XREFs of ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D3CA8
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7EC4 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::NotifyRenderedRect(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8[4]; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 232), a2, (float *)&v6);
  v3 = PixelAlign(v8, &v6);
  v4 = *(_QWORD *)(a1 + 160);
  v7 = *(_OWORD *)v3;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 16LL))(v4, &v7);
  *(_BYTE *)(a1 + 308) = 1;
  return result;
}
