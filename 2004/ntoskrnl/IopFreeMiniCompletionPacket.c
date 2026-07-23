/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x1405F7C10
 * Callers:
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14060ED2C (AlpcpAllocateCompletionPacketLookaside.c)
 *     IopFreeCompletionListPackets @ 0x14060EFE8 (IopFreeCompletionListPackets.c)
 *     IoFreeMiniCompletionPacket @ 0x140656940 (IoFreeMiniCompletionPacket.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x14033BB5C (ExReturnPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeMiniCompletionPacket(_SLIST_ENTRY *P)
{
  void (__fastcall *v2)(_SLIST_ENTRY *, _SLIST_ENTRY *); // rax
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
  v2 = (void (__fastcall *)(_SLIST_ENTRY *, _SLIST_ENTRY *))*((_QWORD *)&P[3].Next + 1);
  if ( v2 )
  {
    v2(P, P[4].Next);
  }
  else if ( *((_BYTE *)&P[4].Next + 8) )
  {
    ExFreePoolWithTag(P, 0);
  }
}
