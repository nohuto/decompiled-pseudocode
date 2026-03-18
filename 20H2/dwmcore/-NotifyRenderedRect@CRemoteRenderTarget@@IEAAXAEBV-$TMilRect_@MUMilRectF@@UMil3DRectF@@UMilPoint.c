/*
 * XREFs of ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DB2B8
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E939C (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180082004 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180091760 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::NotifyRenderedRect(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 232), a2, (float *)&v8);
  v9[0] = PixelAlign(*(float *)&v8, 0);
  v9[1] = PixelAlign(*((float *)&v8 + 1), v3);
  v9[2] = PixelAlign(*((float *)&v8 + 2), 1);
  v5 = PixelAlign(*((float *)&v8 + 3), v4);
  v6 = *(_QWORD *)(a1 + 160);
  v9[3] = v5;
  result = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 16LL))(v6, v9);
  *(_BYTE *)(a1 + 308) = 1;
  return result;
}
