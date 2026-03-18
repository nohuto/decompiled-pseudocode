/*
 * XREFs of ?GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1801875FC
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180187C6C (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800803F8 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

_DWORD *__fastcall CRemoteAppRenderTarget::GetRailWindowDeviceBounds(__int64 a1, _DWORD *a2, CMILMatrix *a3)
{
  __int64 i; // rax
  int v5; // eax
  float v6; // xmm0_4
  int v7; // edx
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm0_4
  int v12; // edx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  float v15[4]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v15[i] = (float)*(int *)(a1 + 4 * i + 264);
  v14 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(a3, (__int64)v15, (float *)&v14);
  v5 = PixelAlign(*(float *)&v14, 0);
  v6 = *((float *)&v14 + 1);
  *a2 = v5;
  v8 = PixelAlign(v6, v7);
  v9 = *((float *)&v14 + 2);
  a2[1] = v8;
  v10 = PixelAlign(v9, 1);
  v11 = *((float *)&v14 + 3);
  a2[2] = v10;
  a2[3] = PixelAlign(v11, v12);
  return a2;
}
