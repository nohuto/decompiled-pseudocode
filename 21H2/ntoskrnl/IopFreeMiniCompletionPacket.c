/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x14074F700
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     IopFreeCompletionListPackets @ 0x1406ACB64 (IopFreeCompletionListPackets.c)
 *     IoFreeMiniCompletionPacket @ 0x14074F6E0 (IoFreeMiniCompletionPacket.c)
 *     NtCreateWorkerFactory @ 0x1407D5050 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x1407D55E4 (AlpcpAllocateCompletionPacketLookaside.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x140367A64 (ExReturnPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeMiniCompletionPacket(struct _SLIST_ENTRY *P)
{
  void (__fastcall *v2)(struct _SLIST_ENTRY *, _SLIST_ENTRY *); // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *L; // rdi

  if ( LOBYTE(P[1].Next) != 4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[7].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
    {
      ++L->FreeMisses;
      L = CurrentPrcb->PPLookasideList[7].L;
      ++L->TotalFrees;
      if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
      {
        ++L->FreeMisses;
        ExFreePoolWithTag(P, 0);
        return;
      }
      if ( LOBYTE(P[1].Next) != 3 )
      {
LABEL_7:
        RtlpInterlockedPushEntrySList(&L->ListHead, P);
        return;
      }
    }
    else if ( LOBYTE(P[1].Next) != 3 )
    {
      goto LABEL_7;
    }
    ExReturnPoolQuota((ULONG_PTR)P);
    goto LABEL_7;
  }
  v2 = (void (__fastcall *)(struct _SLIST_ENTRY *, _SLIST_ENTRY *))*((_QWORD *)&P[3].Next + 1);
  if ( v2 )
  {
    v2(P, P[4].Next);
  }
  else if ( *((_BYTE *)&P[4].Next + 8) )
  {
    ExFreePoolWithTag(P, 0);
  }
}
