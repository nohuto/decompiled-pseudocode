/*
 * XREFs of ??1SubTreeContext@CPreComputeContext@@QEAA@XZ @ 0x18001959C
 * Callers:
 *     ??$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreComputeContext@@0@Z @ 0x180019560 (--$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreCompute.c)
 *     ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x18008D84C (-reserve_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeConte.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CPreComputeContext::SubTreeContext::~SubTreeContext(void **this)
{
  DefaultHeap::Free(this[51]);
  DefaultHeap::Free(this[47]);
  CBspPreComputeHelper::~CBspPreComputeHelper((CBspPreComputeHelper *)this);
}
