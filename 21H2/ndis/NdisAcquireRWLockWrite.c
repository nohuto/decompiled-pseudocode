/*
 * XREFs of NdisAcquireRWLockWrite @ 0x1C00043E0
 * Callers:
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C0020550 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0021224 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C002AEB4 (-XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C002D528 (-ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C008E0E4 (-XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A4BA0 (-ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0147320 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAcquireRWLockWrite(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState, UCHAR Flags)
{
  struct _KTHREAD *CurrentThread; // rdi
  KSPIN_LOCK *v6; // rcx
  KIRQL v7; // al
  _QWORD *v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // r8

  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)Lock + 3) == CurrentThread )
  {
    LockState->LockState = 2;
  }
  else
  {
    v6 = (KSPIN_LOCK *)((char *)Lock + 16);
    if ( (Flags & 1) != 0 )
    {
      KeAcquireSpinLockAtDpcLevel(v6);
      v7 = 2;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(v6);
    }
    LockState->OldIrql = v7;
    v8 = (_QWORD *)*((_QWORD *)Lock + 4);
    v9 = v8;
    v10 = &v8[512 * ndisMaxNumberOfProcessors];
    if ( v8 != v10 )
    {
      do
      {
        if ( *v9 && v9 != (_QWORD *)((char *)v8 + (KeGetPcr()->Prcb.Number << 12)) && *v9 )
        {
          do
            _mm_pause();
          while ( *v9 );
        }
        v9 += 512;
      }
      while ( v9 != v10 );
    }
    *((_QWORD *)Lock + 3) = CurrentThread;
    LockState->LockState = 4;
  }
}
