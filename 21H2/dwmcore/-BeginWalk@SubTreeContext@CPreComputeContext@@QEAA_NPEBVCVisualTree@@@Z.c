/*
 * XREFs of ?BeginWalk@SubTreeContext@CPreComputeContext@@QEAA_NPEBVCVisualTree@@@Z @ 0x18008DC18
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x180045D18 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18008DA94 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 */

char __fastcall CPreComputeContext::SubTreeContext::BeginWalk(
        CPreComputeContext::SubTreeContext *this,
        const void **a2)
{
  const void **v3; // rcx

  v3 = (const void **)*((_QWORD *)this + 54);
  if ( a2 == v3 )
    goto LABEL_2;
  if ( (int)CThreadContext::RegisterGraphWalkRoot(v3[8]) >= 0 )
  {
    v3 = (const void **)*((_QWORD *)this + 54);
    *((_BYTE *)this + 444) = 1;
LABEL_2:
    *((_DWORD *)this + 90) = 0;
    *((_DWORD *)this + 98) = 0;
    *((_DWORD *)this + 110) = 0;
    CVisualTree::BeginPreCompute((CVisualTree *)v3);
    return 1;
  }
  *((_BYTE *)this + 445) = 1;
  return 0;
}
