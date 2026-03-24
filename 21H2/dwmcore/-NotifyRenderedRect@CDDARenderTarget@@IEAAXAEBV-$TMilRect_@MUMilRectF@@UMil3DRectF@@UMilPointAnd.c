/*
 * XREFs of ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801992DC
 * Callers:
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EF1E4 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180077274 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDARenderTarget::NotifyRenderedRect(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 200), a2, (float *)&v8);
  v9[0] = PixelAlign(*(float *)&v8, 0);
  v9[1] = PixelAlign(*((float *)&v8 + 1), v3);
  v9[2] = PixelAlign(*((float *)&v8 + 2), 1);
  v5 = PixelAlign(*((float *)&v8 + 3), v4);
  v6 = *(_QWORD *)(a1 + 152);
  v9[3] = v5;
  result = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 16LL))(v6, v9);
  *(_BYTE *)(a1 + 1888) = 1;
  return result;
}
