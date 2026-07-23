/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x14062CC50
 * Callers:
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140643F5C (AlpcpAllocateCompletionPacketLookaside.c)
 *     IopFreeCompletionListPackets @ 0x140644218 (IopFreeCompletionListPackets.c)
 *     IoFreeMiniCompletionPacket @ 0x140675F20 (IoFreeMiniCompletionPacket.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x1402FF25C (ExReturnPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
