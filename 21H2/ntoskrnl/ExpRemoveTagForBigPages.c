/*
 * XREFs of ExpRemoveTagForBigPages @ 0x1405B3E18
 * Callers:
 *     ExpSizeHeapPool @ 0x1405BA560 (ExpSizeHeapPool.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpRemoveTagForBigPages(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        _DWORD *a4,
        int *a5,
        _QWORD *a6,
        _WORD *a7,
        _BYTE *a8)
{
  ULONG_PTR v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // r9
  volatile signed __int32 *v14; // r10
  unsigned __int64 v15; // r8
  int v16; // r11d
  unsigned int v17; // edx
  __int64 v18; // rdx
  unsigned int v19; // r8d
  int v20; // r11d
  bool v21; // zf
  char v22; // al
  unsigned int v23; // r8d
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8

  v11 = a2;
  v12 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( (v11 & 0x20) != 0 )
  {
    v13 = *(_QWORD *)(qword_140C4DE20 + 992);
    v14 = (volatile signed __int32 *)(qword_140C4DE20 + 864);
    v15 = *(_QWORD *)(qword_140C4DE20 + 1000);
  }
  else
  {
    v13 = PoolBigPageTable;
    v14 = &ExpPoolBigEntriesInUse;
    v15 = PoolBigPageTableSize;
  }
LABEL_4:
  v16 = 1;
  v17 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                       * (BugCheckParameter2 >> 12))) & (v15 - 1);
  while ( *(_QWORD *)(v13 + 24LL * v17) != BugCheckParameter2 )
  {
    if ( ++v17 >= v15 )
    {
      if ( !v16 )
      {
LABEL_10:
        if ( (v11 & 0x21) != 0
          || v13 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) == -1
          || (v13 = *(_QWORD *)(qword_140C4DE20 + 992),
              v14 = (volatile signed __int32 *)(qword_140C4DE20 + 864),
              v15 = *(_QWORD *)(qword_140C4DE20 + 1000),
              !v13)
          || !v15 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v11, 0LL);
        }
        goto LABEL_4;
      }
      v17 = 0;
      v16 = 0;
    }
  }
  v18 = v13 + 24LL * v17;
  if ( !v18 )
    goto LABEL_10;
  v19 = *(_DWORD *)(v18 + 12);
  v20 = *(_DWORD *)(v18 + 8);
  *a4 = v20;
  v21 = v13 == PoolBigPageTable;
  *a5 = (v19 >> 8) & 0xFFF;
  *a6 = *(_QWORD *)(v18 + 16);
  if ( !v21 || v20 == 1819242320 )
  {
    LOWORD(v23) = 0;
    v22 = 0;
  }
  else
  {
    v22 = *(_BYTE *)(v18 + 12);
    v23 = v19 >> 20;
  }
  *a8 = v22;
  *a7 = v23;
  if ( a3 )
  {
    _InterlockedAdd(v14, 0xFFFFFFFF);
    _InterlockedIncrement64((volatile signed __int64 *)v18);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v21 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  return result;
}
