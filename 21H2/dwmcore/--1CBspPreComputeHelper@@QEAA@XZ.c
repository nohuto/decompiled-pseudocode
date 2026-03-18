/*
 * XREFs of ??1CBspPreComputeHelper@@QEAA@XZ @ 0x18008E2A4
 * Callers:
 *     ??1SubTreeContext@CPreComputeContext@@QEAA@XZ @ 0x18001959C (--1SubTreeContext@CPreComputeContext@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008E1F0 (-clear_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CBspPreComputeHelper::~CBspPreComputeHelper(void **this)
{
  DefaultHeap::Free(this[42]);
  DefaultHeap::Free(this[38]);
  DefaultHeap::Free(this[34]);
  DefaultHeap::Free(this[30]);
  DefaultHeap::Free(this[26]);
  DefaultHeap::Free(this[22]);
  DefaultHeap::Free(this[18]);
  DefaultHeap::Free(this[14]);
  DefaultHeap::Free(this[10]);
  DefaultHeap::Free(this[6]);
  DefaultHeap::Free(this[2]);
}
