/*
 * XREFs of ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00A82A4
 * Callers:
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6FD0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00A819C (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1C01215D0 (NdisWdfAsyncPowerReferenceCompleteNotification.c)
 * Callees:
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1C00A511C (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00A5B7C (-ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x1C00A6280 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00A630C (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00A6374 (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AA750 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     PktMonClientNblDropNdis @ 0x1C00C6AD4 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisWdfSelectiveSuspendResumeOperations(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, char a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  struct _NET_BUFFER_LIST *v8; // rsi
  struct _NET_BUFFER_LIST *v9; // r14
  KIRQL v10; // r9
  int v11; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _LIST_ENTRY v13; // [rsp+30h] [rbp-18h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  v13 = 0LL;
  KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 272), 0, 0);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v6 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 82)) / 10000LL;
  *((_QWORD *)SelectiveSuspend + 84) += v6;
  *((_QWORD *)SelectiveSuspend + 83) = v6;
  v7 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 81)) / 10000LL;
  *((_QWORD *)SelectiveSuspend + 86) += v7;
  *((_QWORD *)SelectiveSuspend + 85) = v7;
  v8 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 68);
  *((_QWORD *)SelectiveSuspend + 68) = 0LL;
  *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
  v9 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 70);
  *((_QWORD *)SelectiveSuspend + 70) = 0LL;
  *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
  ndisMoveLinkedList(&v13, (struct _LIST_ENTRY *)((char *)SelectiveSuspend + 584));
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
  if ( v8 )
  {
    if ( a3 )
    {
      if ( byte_1C00E3FD8 && (*((_DWORD *)&a1->PktMonComp + 13) & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)a1 + 5808, (_DWORD)v8, v11, 2, -1071448017, -536866806);
      Alignment = v8;
      do
      {
        Alignment->Status = -1073676271;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      ndisMSendNetBufferListsCompleteInternal(a1, v8, 0, 0);
    }
    else
    {
      ndisReplaySendNbls(a1, v8, 1u);
    }
  }
  if ( v9 )
    ndisReplayRecvNbls(a1, v9);
  if ( a3 )
    ndisCancelDequeuedDirectOidRequests(a1, &v13);
  else
    ndisReplayDirectOids(a1, &v13, 1u);
}
