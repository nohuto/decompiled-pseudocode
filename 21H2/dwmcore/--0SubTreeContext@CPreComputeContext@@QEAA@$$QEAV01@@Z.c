/*
 * XREFs of ??0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z @ 0x1800168AC
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1800167F8 (--$uninitialized_move@V-$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V-$checked_a.c)
 *     ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x18008D84C (-reserve_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeConte.c)
 * Callees:
 *     ??4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001691C (--4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x18008DB18 (--0CBspPreComputeHelper@@QEAA@XZ.c)
 */

__int64 __fastcall CPreComputeContext::SubTreeContext::SubTreeContext(CBspPreComputeHelper *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  CBspPreComputeHelper::CBspPreComputeHelper(a1);
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_DWORD *)(v1 + 368) = 0;
  *(_DWORD *)(v1 + 384) = 0;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_DWORD *)(v1 + 400) = 0;
  *(_DWORD *)(v1 + 416) = 0;
  *(_QWORD *)(v1 + 424) = 0LL;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_DWORD *)(v1 + 440) = 0;
  *(_WORD *)(v1 + 444) = 0;
  CPreComputeContext::SubTreeContext::operator=();
  return v2;
}
