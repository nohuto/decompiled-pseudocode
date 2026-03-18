/*
 * XREFs of ?DrawMesh2D@CRenderDataBounds@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18020C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3E08 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataBounds::DrawMesh2D(
        CRenderDataBounds *this,
        struct CGeometry2D *a2,
        struct CImageSource *a3)
{
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 && a3 )
  {
    v4 = *(_QWORD *)a2;
    v6 = 0LL;
    (*(void (__fastcall **)(struct CGeometry2D *, __int128 *))(v4 + 216))(a2, &v6);
    CRenderDataBounds::AddBounds((__int64)this, (float *)&v6);
  }
  return 0LL;
}
