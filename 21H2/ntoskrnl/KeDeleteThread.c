/*
 * XREFs of KeDeleteThread @ 0x140295EC8
 * Callers:
 *     PspReaper @ 0x140295D30 (PspReaper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiDecrementProcessStackCount @ 0x1402AC380 (KiDecrementProcessStackCount.c)
 *     KiWaitForContextSwap @ 0x1402EFA9C (KiWaitForContextSwap.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeDeleteThread(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  __int64 *v4; // rdi
  KIRQL v5; // al
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 **v8; // r8
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  KIRQL v12; // al
  __int64 *v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 **v15; // rax
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8

  KiWaitForContextSwap(a1);
  result = KiDecrementProcessStackCount(a1[23]);
  v3 = a1 + 110;
  if ( a1[110] != 1LL )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C31F38);
    v6 = *v3;
    v7 = v5;
    if ( *v3 != 1 && a1[111] )
    {
      v8 = (__int64 **)a1[111];
      if ( *(__int64 **)(v6 + 8) != v3 || *v8 != v3 )
        goto LABEL_11;
      *v8 = (__int64 *)v6;
      *(_QWORD *)(v6 + 8) = v8;
    }
    KxReleaseSpinLock(&qword_140C31F38);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v11 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  v4 = a1 + 126;
  if ( a1[126] == 1LL )
    return result;
  v12 = KeAcquireSpinLockRaiseToDpc(&KiUpdateVpThreadPriorityLock);
  v13 = (__int64 *)*v4;
  v14 = v12;
  if ( *v4 != 1 && a1[127] )
  {
    v15 = (__int64 **)a1[127];
    if ( (__int64 *)v13[1] == v4 && *v15 == v4 )
    {
      *v15 = v13;
      v13[1] = (__int64)v15;
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
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v17 = v16->SchedulerAssist;
        v11 = ((unsigned int)result & v17[5]) == 0;
        v17[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  __writecr8(v14);
  return result;
}
