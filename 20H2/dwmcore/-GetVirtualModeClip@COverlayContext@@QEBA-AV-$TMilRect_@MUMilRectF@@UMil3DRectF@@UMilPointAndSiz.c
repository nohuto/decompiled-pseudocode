/*
 * XREFs of ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18017BEE0
 * Callers:
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x18017BE04 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801828F4 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

float *__fastcall COverlayContext::GetVirtualModeClip(_QWORD *a1, float *a2)
{
  int *v3; // rax
  float v4; // xmm0_4
  float v5; // xmm1_4
  int v6; // ecx
  float v7; // xmm1_4
  float *result; // rax

  v3 = (int *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 152LL))(*a1);
  v4 = (float)*v3;
  v5 = (float)v3[1];
  v6 = v3[2];
  LODWORD(v3) = v3[3];
  *a2 = v4;
  a2[1] = v5;
  v7 = (float)(int)v3;
  result = a2;
  a2[2] = (float)v6;
  a2[3] = v7;
  return result;
}
