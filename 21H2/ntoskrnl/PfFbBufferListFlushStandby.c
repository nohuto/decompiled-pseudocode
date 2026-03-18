/*
 * XREFs of PfFbBufferListFlushStandby @ 0x14035FB90
 * Callers:
 *     PfSnEndTrace @ 0x1407D9428 (PfSnEndTrace.c)
 *     PfpFlushEventBuffers @ 0x1407D9BE8 (PfpFlushEventBuffers.c)
 *     PfGetCompletedTrace @ 0x1407DB830 (PfGetCompletedTrace.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     PfFbBufferListInsertInFree @ 0x14035FAE8 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall PfFbBufferListFlushStandby(_SLIST_ENTRY *RunRef)
{
  PSLIST_ENTRY v2; // rdi
  PSLIST_ENTRY v3; // rsi

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)RunRef) )
  {
    v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)&RunRef[2]);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)RunRef) )
        (*((void (__fastcall **)(PSLIST_ENTRY))&RunRef[6].Next + 1))(v3);
      else
        PfFbBufferListInsertInFree(RunRef, v3, LODWORD(v3[2].Next) - (_DWORD)v3, *((_DWORD *)&v3[2].Next + 3), 0);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)RunRef);
  }
}
