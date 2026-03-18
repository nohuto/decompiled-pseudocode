/*
 * XREFs of KeDeleteThread @ 0x1402E55E8
 * Callers:
 *     PspReaper @ 0x1402E5450 (PspReaper.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x1402051D8 (KiDecrementProcessStackCount.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiWaitForContextSwap @ 0x140280C14 (KiWaitForContextSwap.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeDeleteThread(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rdi
  __int64 *v5; // rdi
  KIRQL v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __int64 **v9; // r8
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  KIRQL v13; // al
  __int64 *v14; // rcx
  unsigned __int64 v15; // rsi
  __int64 **v16; // rax
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8

  KiWaitForContextSwap((__int64)a1, a2);
  result = KiDecrementProcessStackCount(a1[23]);
  v4 = a1 + 110;
  if ( a1[110] != 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C31CD8);
    v7 = *v4;
    v8 = v6;
    if ( *v4 != 1 && a1[111] )
    {
      v9 = (__int64 **)a1[111];
      if ( *(__int64 **)(v7 + 8) != v4 || *v9 != v4 )
        goto LABEL_11;
      *v9 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v9;
    }
    KxReleaseSpinLock(&qword_140C31CD8);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v12 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  v5 = a1 + 126;
  if ( a1[126] == 1 )
    return result;
  v13 = KeAcquireSpinLockRaiseToDpc(&KiUpdateVpThreadPriorityLock);
  v14 = (__int64 *)*v5;
  v15 = v13;
  if ( *v5 != 1 && a1[127] )
  {
    v16 = (__int64 **)a1[127];
    if ( (__int64 *)v14[1] == v5 && *v16 == v5 )
    {
      *v16 = v14;
      v14[1] = (__int64)v16;
      goto LABEL_23;
    }
LABEL_11:
    __fastfail(3u);
  }
LABEL_23:
  KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v15 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v18 = v17->SchedulerAssist;
        v12 = ((unsigned int)result & v18[5]) == 0;
        v18[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(v15);
  return result;
}
