/*
 * XREFs of ?PopClipBoundsFromScope@CScopedClipStack@@QEAAXXZ @ 0x180012060
 * Callers:
 *     ?PopClipBounds@CDrawingContext@@AEAAXXZ @ 0x180011FDC (-PopClipBounds@CDrawingContext@@AEAAXXZ.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N@Z @ 0x180099090 (-PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatr.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x1801B78E0 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScopedClipStack::PopClipBoundsFromScope(CScopedClipStack *this)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = *((_DWORD *)this + 524);
  if ( v1 )
    *((_DWORD *)this + 524) = v1 - 1;
  v2 = 88LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  --*(_DWORD *)(v2 + *(_QWORD *)this + 8);
}
