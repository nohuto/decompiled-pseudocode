/*
 * XREFs of ?clear@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800CFA78
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180019C48 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800CF85C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // r8

  v1 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 6);
  if ( v1 )
    detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
      a1,
      0LL,
      v1);
}
