/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x1405EB920
 * Callers:
 *     IoRemoveIoCompletion @ 0x140207710 (IoRemoveIoCompletion.c)
 *     IopFreeCompletionListPackets @ 0x1406B7124 (IopFreeCompletionListPackets.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14070AD3C (AlpcpAllocateCompletionPacketLookaside.c)
 *     IoFreeMiniCompletionPacket @ 0x140711120 (IoFreeMiniCompletionPacket.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x14030E6FC (ExReturnPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeMiniCompletionPacket(_SLIST_ENTRY *P, __int64 a2, __int64 a3)
{
  void (__fastcall *v4)(_SLIST_ENTRY *, _SLIST_ENTRY *); // rax
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
    ExReturnPoolQuota((ULONG_PTR)P, a2, a3);
    goto LABEL_7;
  }
  v4 = (void (__fastcall *)(_SLIST_ENTRY *, _SLIST_ENTRY *))*((_QWORD *)&P[3].Next + 1);
  if ( v4 )
  {
    v4(P, P[4].Next);
  }
  else if ( *((_BYTE *)&P[4].Next + 8) )
  {
    ExFreePoolWithTag(P, 0);
  }
}
