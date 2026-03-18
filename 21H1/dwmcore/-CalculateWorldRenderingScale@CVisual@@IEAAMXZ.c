/*
 * XREFs of ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x1801B1454
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801B20E8 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180022CF4 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 */

float __fastcall CVisual::CalculateWorldRenderingScale(CVisual *this)
{
  struct D2D_VECTOR_3F v2; // [rsp+20h] [rbp-28h] BYREF
  struct D2D_VECTOR_3F v3; // [rsp+30h] [rbp-18h] BYREF

  v2.x = 0.70710677;
  v2.z = 0.0;
  v2.y = 0.70710677;
  CMILMatrix::Transform3DVector((CVisual *)((char *)this + 360), &v3, &v2);
  return sqrtf_0((float)((float)(v3.y * v3.y) + (float)(v3.x * v3.x)) + (float)(v3.z * v3.z));
}
