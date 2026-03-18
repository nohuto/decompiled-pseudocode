/*
 * XREFs of ?PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z @ 0x18004E0F4
 * Callers:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18004BC48 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18004DE64 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18004DFC0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x18004E0B8 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18008A2F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 * Callees:
 *     <none>
 */

void __fastcall CScopedClipStack::PopGpuClipFromScope(CScopedClipStack *this, char a2)
{
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 566);
  if ( v2 )
    *((_DWORD *)this + 566) = v2 - 1;
  v4 = 84LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  --*(_DWORD *)(v4 + *(_QWORD *)this);
  if ( a2 )
  {
    v5 = 84LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
    --*(_DWORD *)(v5 + *(_QWORD *)this + 8);
  }
}
