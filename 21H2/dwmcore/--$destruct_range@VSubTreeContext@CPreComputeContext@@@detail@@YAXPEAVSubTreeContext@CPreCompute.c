/*
 * XREFs of ??$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreComputeContext@@0@Z @ 0x180019560
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18008D964 (-ensure_extra_capacity@-$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansio.c)
 * Callees:
 *     ??1SubTreeContext@CPreComputeContext@@QEAA@XZ @ 0x18001959C (--1SubTreeContext@CPreComputeContext@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<CPreComputeContext::SubTreeContext>(
        CPreComputeContext::SubTreeContext *this,
        CPreComputeContext::SubTreeContext *a2)
{
  CPreComputeContext::SubTreeContext *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CPreComputeContext::SubTreeContext::~SubTreeContext(v3);
      v3 = (CPreComputeContext::SubTreeContext *)((char *)v3 + 448);
    }
    while ( v3 != a2 );
  }
}
