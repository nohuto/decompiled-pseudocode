/*
 * XREFs of ?InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800E1CC4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBackgroundTreatment::InvalidateExistingBounds(CWindowBackgroundTreatment *this)
{
  __int128 v1; // xmm0
  __int64 v2; // xmm1_8

  v1 = *(_OWORD *)((char *)this + 88);
  *((_BYTE *)this + 300) = 1;
  v2 = *((_QWORD *)this + 13);
  *((_OWORD *)this + 7) = v1;
  *((_QWORD *)this + 16) = v2;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  if ( *((_BYTE *)this + 301) )
    CWindowBackgroundTreatment::InvalidateBitmapRealization(this);
}
