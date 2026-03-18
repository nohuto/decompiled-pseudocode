/*
 * XREFs of ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180192BD4
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180058320 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18017BDA8 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x180192B50 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::PopCpuClipFromScope(CScopedClipStack *this, bool *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 109) + 136LL * (unsigned int)(*((_DWORD *)this + 224) - 1);
  *a2 = *(_BYTE *)(v4 + 128);
  CScopedClipStack::FreeCpuClipStackState(this, (struct CScopedClipStack::CpuClipStackState *)v4);
  --*((_DWORD *)this + 224);
  v5 = 84LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  --*(_DWORD *)(v5 + *(_QWORD *)this + 4);
}
