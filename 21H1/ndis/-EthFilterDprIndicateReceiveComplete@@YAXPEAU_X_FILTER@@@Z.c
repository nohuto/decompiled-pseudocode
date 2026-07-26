/*
 * XREFs of ?EthFilterDprIndicateReceiveComplete@@YAXPEAU_X_FILTER@@@Z @ 0x1C00640A0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005910 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C00059D0 (NdisReleaseRWLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EthFilterDprIndicateReceiveComplete(struct _X_FILTER *a1)
{
  unsigned int Number; // r14d
  _NDIS_OPEN_BLOCK *OpenList; // rcx
  struct _X_FILTER *p_FTypeOpenList; // rdi
  __int64 v5; // rbp
  PNDIS_PER_PROCESSOR_SLOT__ *ReceivedAPacketSlot; // rax
  _NDIS_OPEN_BLOCK *FilterNextOpen; // rsi
  struct _X_FILTER *v8; // rax
  struct _X_FILTER *p_NoFTypeOpenList; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+50h] [rbp+8h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( a1 )
  {
    NdisAcquireRWLockRead(a1->BindListLock, &LockState, 0);
    OpenList = a1->OpenList;
    p_FTypeOpenList = a1;
    if ( !a1->OpenList )
      goto LABEL_7;
    do
    {
      v5 = Number << 12;
      do
      {
        ReceivedAPacketSlot = OpenList->ReceivedAPacketSlot;
        FilterNextOpen = OpenList->FilterNextOpen;
        if ( *((_BYTE *)ReceivedAPacketSlot + v5) )
        {
          *((_BYTE *)ReceivedAPacketSlot + v5) = 0;
          OpenList->ReceiveCompleteHandler(OpenList->ProtocolBindingContext);
        }
        OpenList = FilterNextOpen;
      }
      while ( FilterNextOpen );
LABEL_7:
      v8 = 0LL;
      p_NoFTypeOpenList = (struct _X_FILTER *)&a1->NoFTypeOpenList;
      if ( p_FTypeOpenList != (struct _X_FILTER *)&a1->NoFTypeOpenList )
        v8 = p_FTypeOpenList;
      p_FTypeOpenList = (struct _X_FILTER *)&a1->FTypeOpenList;
      if ( v8 != (struct _X_FILTER *)&a1->FTypeOpenList )
        p_NoFTypeOpenList = v8;
      if ( p_NoFTypeOpenList != a1 )
        p_FTypeOpenList = p_NoFTypeOpenList;
      if ( !p_FTypeOpenList )
        break;
      OpenList = p_FTypeOpenList->OpenList;
    }
    while ( p_FTypeOpenList->OpenList );
    NdisReleaseRWLock(a1->BindListLock, &LockState);
  }
}
