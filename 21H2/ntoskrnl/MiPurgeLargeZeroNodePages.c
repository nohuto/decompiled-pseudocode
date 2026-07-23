/*
 * XREFs of MiPurgeLargeZeroNodePages @ 0x140384C18
 * Callers:
 *     MiPurgeZeroList @ 0x140384A9C (MiPurgeZeroList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiMoveLargeZeroToFree @ 0x140384F9C (MiMoveLargeZeroToFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPurgeLargeZeroNodePages(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  unsigned __int64 *v3; // r13
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned int v6; // edx
  int *v7; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // r8d
  unsigned int v10; // r15d
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // r12d
  _QWORD *v14; // rbp
  unsigned int v15; // r14d
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  _DWORD *v21; // r9
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  __int64 v26; // [rsp+40h] [rbp-88h]
  __int64 v27; // [rsp+48h] [rbp-80h]
  int *v28; // [rsp+50h] [rbp-78h]
  _QWORD *v29; // [rsp+58h] [rbp-70h]
  _QWORD *v30; // [rsp+60h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-60h] BYREF
  int v32; // [rsp+D0h] [rbp+8h]
  int v33; // [rsp+D8h] [rbp+10h]
  unsigned int v34; // [rsp+E0h] [rbp+18h]
  int v35; // [rsp+E8h] [rbp+20h]

  v32 = a1;
  v1 = *(_QWORD **)(a1 + 16);
  result = (unsigned __int16)KeNumberNodes;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v30 = &v1[568 * (unsigned __int16)KeNumberNodes];
  if ( v1 < v30 )
  {
    v3 = v1 + 541;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = v3;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v3);
      v6 = 0;
      v29 = v1;
      v7 = dword_140C4DFC0;
      v34 = 0;
      v28 = dword_140C4DFC0;
      v8 = v1;
      do
      {
        if ( *v8 )
        {
          v9 = *v7;
          v10 = 0;
          v35 = *v7;
          if ( MmNumberOfChannels )
          {
            do
            {
              v11 = 32LL * v10 + 560;
              v33 = 0;
              v27 = v11;
              do
              {
                v12 = v11;
                v13 = 0;
                v26 = v11;
                do
                {
                  v14 = *(_QWORD **)((char *)v8 + v12);
                  v15 = 0;
                  if ( v9 )
                  {
                    do
                    {
                      if ( (_QWORD *)*v14 != v14 )
                      {
                        if ( !(unsigned int)MiMoveLargeZeroToFree(v32, (_DWORD)v1, v6, v33, v15, v10, v13) )
                        {
                          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                          if ( KiIrqlFlags )
                          {
                            if ( (KiIrqlFlags & 1) != 0 )
                            {
                              v16 = KeGetCurrentIrql();
                              if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
                              {
                                CurrentPrcb = KeGetCurrentPrcb();
                                v18 = CurrentPrcb->SchedulerAssist;
                                v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                                v20 = (v19 & v18[5]) == 0;
                                v18[5] &= v19;
                                if ( v20 )
                                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                              }
                            }
                          }
                          __writecr8(CurrentIrql);
                          --v15;
                          v14 -= 3;
                          CurrentIrql = KeGetCurrentIrql();
                          __writecr8(2uLL);
                          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
                          {
                            v21 = KeGetCurrentPrcb()->SchedulerAssist;
                            v21[5] |= (-1 << (CurrentIrql + 1)) & 4;
                          }
                          LockHandle.LockQueue.Next = 0LL;
                          LockHandle.LockQueue.Lock = v3;
                          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v3);
                        }
                        v9 = v35;
                        v6 = v34;
                      }
                      ++v15;
                      v14 += 3;
                    }
                    while ( v15 < v9 );
                    v8 = v29;
                    v12 = v26;
                  }
                  v12 += 8LL;
                  ++v13;
                  v26 = v12;
                }
                while ( v13 <= 3 );
                ++v33;
                v11 = v27 + 256;
                v27 += 256LL;
              }
              while ( v33 <= 1 );
              ++v10;
            }
            while ( v10 < MmNumberOfChannels );
            v7 = v28;
          }
        }
        ++v6;
        ++v7;
        v8 += 134;
        v34 = v6;
        v28 = v7;
        v29 = v8;
      }
      while ( v6 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      v1 += 568;
      v3 += 568;
    }
    while ( v1 < v30 );
  }
  return result;
}
