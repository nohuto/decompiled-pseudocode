/*
 * XREFs of ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x18019A4C0
 * Callers:
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18019A140 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x1800CDA4C (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 */

void __fastcall CPreComputeHelper::UpdateRelativeLayout(CPreComputeHelper *this, struct CVisual *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a2 + 10);
  if ( !v2 || (*(_BYTE *)(v2 + 88) & 1) != 0 )
  {
    if ( CVisual::ComputeLayoutSize(a2) )
      *((_BYTE *)a2 + 88) |= 1u;
  }
}
