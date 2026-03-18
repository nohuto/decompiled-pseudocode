/*
 * XREFs of ContributeRegionToDirty @ 0x18028B094
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180081554 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE9C8 (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall ContributeRegionToDirty(FastRegion::Internal::CRgnData **a1, CDirtyRegion *a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 i; // rax
  int v8; // eax
  FastRegion::Internal::CRgnData *v9; // rcx
  unsigned int v10; // ebx
  _BYTE v12[8]; // [rsp+20h] [rbp-29h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-21h]
  _DWORD *v14; // [rsp+30h] [rbp-19h]
  __int64 v15; // [rsp+38h] [rbp-11h]
  int v16; // [rsp+40h] [rbp-9h]
  _DWORD v17[4]; // [rsp+50h] [rbp+7h]
  __int128 v18; // [rsp+60h] [rbp+17h] BYREF
  _DWORD v19[4]; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  FastRegion::Internal::CRgnData::BeginIterator(*a1, (struct FastRegion::CRegion::Iterator *)v12);
  while ( (unsigned __int64)v14 < v13 )
  {
    v17[1] = *v14;
    v17[3] = v14[2];
    v6 = 2 * v16;
    v17[0] = *(_DWORD *)(v15 + 4 * v6);
    v17[2] = *(_DWORD *)(v15 + 4 * v6 + 4);
    for ( i = 0LL; i < 4; ++i )
      *(float *)&v19[i] = (float)(int)v17[i];
    v18 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(a3, (__int64)v19, (float *)&v18, v5);
    v8 = CDirtyRegion::Add(a2);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BE,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v8);
      return v10;
    }
    FastRegion::Internal::CRgnData::StepIterator(v9, (struct FastRegion::CRegion::Iterator *)v12);
  }
  return 0LL;
}
