/*
 * XREFs of MiRebuildLargeZeroPage @ 0x1402A1FB0
 * Callers:
 *     MiRebuildLargePagesThread @ 0x1403C0430 (MiRebuildLargePagesThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCoalesceFreeLargePages @ 0x1403031A0 (MiCoalesceFreeLargePages.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiRebuildLargeZeroPage(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r8
  __int64 v6; // rsi
  unsigned __int64 v7; // r10
  _QWORD *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r10
  unsigned __int8 CurrentIrql; // bp
  __int64 v16; // rbp
  _BYTE *v17; // rbx
  unsigned __int64 v18; // r10
  _WORD *v19; // rbx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
LABEL_2:
  v4 = *(_QWORD *)(a1 + 5112);
  v5 = v3;
  v6 = *(_QWORD *)(a1 + 5120);
  if ( v3 >= v4 )
    v5 = 0LL;
  v7 = v4 - 1;
  while ( 1 )
  {
    if ( v7 - v5 != -1LL )
    {
      v8 = (_QWORD *)(v6 + 8 * (v5 >> 6));
      v9 = ((1LL << (v5 & 0x3F)) - 1) | ~*v8;
      if ( v9 == -1 )
      {
        while ( (unsigned __int64)++v8 <= v6 + 8 * (v7 >> 6) )
        {
          v9 = ~*v8;
          if ( *v8 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        _BitScanForward64((unsigned __int64 *)&v9, ~v9);
        v10 = v9 + (((__int64)v8 - v6) >> 3 << 6);
        if ( v10 <= v7 && v10 != -1LL )
        {
          v12 = v10 << 18;
          v14 = *(_QWORD *)(a1 + 16) + 4544LL * *(unsigned int *)(MiSearchNumaNodeTable(v10 << 18) + 8);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            v13 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
            SchedulerAssist[5] = v13;
          }
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v14 + 4328);
          KxAcquireQueuedSpinLock(&LockHandle, v14 + 4328, v13);
          _bittestandreset64(*(signed __int64 **)(a1 + 5120), v10);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v21 = KeGetCurrentIrql();
              if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v23 = CurrentPrcb->SchedulerAssist;
                v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v25 = (v24 & v23[5]) == 0;
                v23[5] &= v24;
                if ( v25 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          v3 = v10 + 1;
          v16 = 512LL;
          v17 = (_BYTE *)(*(_QWORD *)(a1 + 5104) + (v10 << 9));
          do
          {
            if ( *v17 == 32 )
              MiCoalesceFreeLargePages(a1, v12, 2LL);
            v12 += 512LL;
            ++v17;
            --v16;
          }
          while ( v16 );
          goto LABEL_2;
        }
      }
    }
    if ( !v5 )
      break;
    v18 = v3 + 1;
    if ( v3 + 1 > v4 )
      v18 = *(_QWORD *)(a1 + 5112);
    v7 = v18 - 1;
    v5 = 0LL;
  }
  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 5136), 0);
  if ( (_DWORD)result )
  {
    v19 = *(_WORD **)(a1 + 5128);
    do
    {
      if ( *v19 == 512 )
        result = MiCoalesceFreeLargePages(a1, v1, 1LL);
      ++v19;
      v1 += 0x40000LL;
    }
    while ( v1 < 0x1000000000LL );
  }
  return result;
}
