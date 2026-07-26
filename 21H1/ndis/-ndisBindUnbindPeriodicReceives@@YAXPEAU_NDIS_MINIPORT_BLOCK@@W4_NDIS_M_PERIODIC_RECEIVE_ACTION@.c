/*
 * XREFs of ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C0020230
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103DC0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013AF90 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C00042F0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C00059D0 (NdisReleaseRWLock.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00A2638 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisReceiveQueueingOff @ 0x1C00A3828 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C00A3894 (ndisReceiveQueueingOn.c)
 */

void __fastcall ndisBindUnbindPeriodicReceives(__int64 a1, int a2)
{
  KSPIN_LOCK *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // zf
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( ndisPeriodicReceives )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    if ( a2 >= 0 )
    {
      if ( a2 > 2 )
      {
        if ( a2 > 5 )
          goto LABEL_6;
        v4 = (KSPIN_LOCK *)(a1 + 3176);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 3176));
        CurrentThread = KeGetCurrentThread();
        v6 = (*(_DWORD *)(a1 + 3216))-- == 1;
        *(_QWORD *)(a1 + 3184) = CurrentThread;
        if ( v6 && *(_DWORD *)(a1 + 3168) )
        {
          ndisReceiveQueueingOff(a1);
          ndisEmptyPeriodicReceivesQueue((void *)a1);
          v7 = qword_1C00E3FD8;
          if ( qword_1C00E3FD8 == (void *)a1 )
          {
            qword_1C00E3FD8 = (void *)*((_QWORD *)qword_1C00E3FD8 + 395);
          }
          else
          {
            while ( v7 )
            {
              v8 = v7 + 395;
              v7 = (_QWORD *)v7[395];
              if ( v7 == (_QWORD *)a1 )
              {
                *v8 = v7[395];
                break;
              }
            }
          }
          *(_QWORD *)(a1 + 3160) = 0LL;
        }
      }
      else
      {
        v4 = (KSPIN_LOCK *)(a1 + 3176);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 3176));
        *(_QWORD *)(a1 + 3184) = KeGetCurrentThread();
        ++*(_DWORD *)(a1 + 3216);
        if ( dword_1C00E3FC4 != -1 && !*(_DWORD *)(a1 + 464) && byte_1C00E3FC1 == 1 && !*(_DWORD *)(a1 + 3168) )
          ndisReceiveQueueingOn(a1);
      }
      *(_QWORD *)(a1 + 3184) = 0LL;
      KeReleaseSpinLockFromDpcLevel(v4);
    }
LABEL_6:
    NdisReleaseRWLock(Lock, &LockState);
  }
}
