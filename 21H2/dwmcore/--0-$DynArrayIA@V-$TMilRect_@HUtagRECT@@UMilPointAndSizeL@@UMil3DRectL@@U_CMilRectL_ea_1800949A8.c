/*
 * XREFs of ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$07$0A@@@QEAA@XZ @ 0x1800949A8
 * Callers:
 *     ?Present@CDDASwapChain@@UEAAJII@Z @ 0x1802508E0 (-Present@CDDASwapChain@@UEAAJII@Z.c)
 *     ?Present@CCompSwapChain@@UEAAJII@Z @ 0x180251750 (-Present@CCompSwapChain@@UEAAJII@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800949F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,8,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,8,0>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = (void *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 16) = 8;
  *(_DWORD *)(a1 + 20) = 8;
  `vector constructor iterator'(
    v2,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  return a1;
}
