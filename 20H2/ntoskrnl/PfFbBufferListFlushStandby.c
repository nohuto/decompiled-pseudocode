/*
 * XREFs of PfFbBufferListFlushStandby @ 0x1402441B8
 * Callers:
 *     PfpFlushEventBuffers @ 0x14064B4D0 (PfpFlushEventBuffers.c)
 *     PfGetCompletedTrace @ 0x14064E334 (PfGetCompletedTrace.c)
 *     PfSnEndTrace @ 0x14065AA98 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     PfFbBufferListInsertInFree @ 0x140244110 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x140405340 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall PfFbBufferListFlushStandby(_SLIST_ENTRY *RunRef)
{
  PSLIST_ENTRY v2; // rdi
  PSLIST_ENTRY v3; // rsi

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)RunRef) )
  {
    v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)&RunRef[2]);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)RunRef) )
        ((void (__fastcall *)(PSLIST_ENTRY))RunRef[6].Next)(v3);
      else
        PfFbBufferListInsertInFree(RunRef, v3, LODWORD(v3[2].Next) - (_DWORD)v3, *((_DWORD *)&v3[2].Next + 3), 0);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)RunRef);
  }
}
