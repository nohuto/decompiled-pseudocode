/*
 * XREFs of IvtIommuSendCommand @ 0x14052F378
 * Callers:
 *     IvtInvalidateRemappingTableEntries @ 0x1404598B2 (IvtInvalidateRemappingTableEntries.c)
 *     IvtFlushTbInternal @ 0x14052E568 (IvtFlushTbInternal.c)
 *     IvtInvalidateAllContextEntries @ 0x14052F1C8 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x14052F224 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14052F29C (IvtInvalidateScalableModePasidCache.c)
 *     IvtIommuWaitCommand @ 0x14052F618 (IvtIommuWaitCommand.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IvtIommuSendCommand(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v9; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 result; // rax
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  signed __int32 v28[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+70h] [rbp+8h]
  int v31; // [rsp+80h] [rbp+18h]

  v31 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v30 = v3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(a1 + 128) >> ((*(_BYTE *)(a1 + 320) != 0) + 4);
  if ( (_DWORD)a3 == 1 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 208);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 208));
    v3 = v30;
  }
  v9 = *(_QWORD *)(v3 + 136);
  if ( *(_BYTE *)(a1 + 320) )
    v10 = (v9 >> 5) & 0x3FFF;
  else
    v10 = (v9 >> 4) & 0x7FFF;
  v11 = 0;
  if ( v10 + 1 != (_DWORD)v6 )
    v11 = v10 + 1;
  v12 = 0;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v3 + 128);
    LOBYTE(a3) = *(_BYTE *)(a1 + 320);
    v14 = (_BYTE)a3 ? (v13 >> 5) & 0x3FFF : (v13 >> 4) & 0x7FFF;
    if ( v11 != v14 )
      break;
    if ( (++v12 & dword_140C4C47C) != 0 || !qword_140C4C480 )
    {
      _mm_pause();
    }
    else
    {
      qword_140C4C480(v12, a2, a3);
      v3 = v30;
    }
  }
  v15 = *(_QWORD *)(a1 + 112);
  if ( (_BYTE)a3 )
  {
    v16 = (_QWORD *)(v15 + 32LL * v10);
    v17 = v16;
  }
  else
  {
    v17 = (_QWORD *)(v15 + 16LL * v10);
    v16 = 0LL;
  }
  *v17 = *(_QWORD *)a2;
  v18 = a2 & -(__int64)((_BYTE)a3 != 0);
  v17[1] = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (*(_BYTE *)a2 & 0xF) == 9 )
    {
      v19 = v16 + 2;
      v20 = v18 - (_QWORD)v16;
      v21 = 2LL;
      do
      {
        *v19 = *(_QWORD *)((char *)v19 + v20);
        ++v19;
        --v21;
      }
      while ( v21 );
    }
    else
    {
      *((_OWORD *)v16 + 1) = 0LL;
    }
  }
  if ( *(_BYTE *)(a1 + 320) )
    result = ((unsigned int)v9 ^ (32 * v11)) & 0x7FFE0;
  else
    result = ((unsigned int)v9 ^ (16 * v11)) & 0x7FFF0;
  *(_QWORD *)(v3 + 136) = result ^ v9;
  _InterlockedOr(v28, 0);
  if ( !v31 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
