/*
 * XREFs of PfTCleanup @ 0x1408E051C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406B3034 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x1407BFF5C (PfTStart.c)
 *     PfpParametersPropagate @ 0x1408E0C34 (PfpParametersPropagate.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     PfFbBufferListInsertInFree @ 0x140273370 (PfFbBufferListInsertInFree.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     RtlpInterlockedFlushSList @ 0x140407B90 (RtlpInterlockedFlushSList.c)
 *     PfFbBufferListShutdown @ 0x14056516C (PfFbBufferListShutdown.c)
 *     PfTTraceListFree @ 0x14067C7D4 (PfTTraceListFree.c)
 *     PfTCleanupBuffers @ 0x1408E06CC (PfTCleanupBuffers.c)
 *     PfTTraceListTrim @ 0x1408E075C (PfTTraceListTrim.c)
 *     PfFbBufferListCleanup @ 0x1408E0F5C (PfFbBufferListCleanup.c)
 *     PfTAccessTracingCleanup @ 0x14099B9FC (PfTAccessTracingCleanup.c)
 */

void __fastcall PfTCleanup(__int64 a1, __int64 a2)
{
  bool v3; // bp
  __int64 v4; // rdx
  PSLIST_ENTRY v5; // rbx
  PSLIST_ENTRY v6; // rdx
  struct _DMA_ADAPTER *v7; // rcx
  _QWORD *v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  v3 = KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 104);
  PfTAccessTracingCleanup(a1, a2, 1LL);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 540) = 0;
  *(_DWORD *)(a1 + 548) = 0;
  PfTTraceListTrim(0LL, 0LL, v8);
  PfTTraceListTrim(1LL, 0LL, v8);
  *(_DWORD *)(a1 + 552) = 0;
  PfTAccessTracingCleanup(a1, v4, 2LL);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  PfTTraceListFree(v8);
  *(_DWORD *)(a1 + 496) = 0;
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 480));
  while ( v5 )
  {
    v6 = v5;
    v5 = v5->Next;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)(a1 + 352),
      v6,
      LODWORD(v6[2].Next) - (_DWORD)v6,
      *((_DWORD *)&v6[2].Next + 3),
      1);
  }
  PfFbBufferListShutdown((struct _EX_RUNDOWN_REF *)(a1 + 224));
  PfFbBufferListShutdown((struct _EX_RUNDOWN_REF *)(a1 + 352));
  if ( !v3 && *(_QWORD *)(a1 + 104) )
  {
    KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
    KeWaitForSingleObject(*(PVOID *)(a1 + 104), Executive, 0, 0, 0LL);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 104));
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  PfTCleanupBuffers(&unk_140C4FC18);
  PfTCleanupBuffers(&unk_140C4FC40);
  PfFbBufferListCleanup(a1 + 224);
  PfFbBufferListCleanup(a1 + 352);
  v7 = *(struct _DMA_ADAPTER **)(a1 + 616);
  if ( v7 )
  {
    HalPutDmaAdapter(v7);
    *(_QWORD *)(a1 + 616) = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
}
