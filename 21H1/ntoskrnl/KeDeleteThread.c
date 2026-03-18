/*
 * XREFs of KeDeleteThread @ 0x14032A718
 * Callers:
 *     PspReaper @ 0x14032A580 (PspReaper.c)
 * Callees:
 *     KiWaitForContextSwap @ 0x140244514 (KiWaitForContextSwap.c)
 *     KiDecrementProcessStackCount @ 0x14025E0F8 (KiDecrementProcessStackCount.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeDeleteThread(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  __int64 result; // rax
  __int64 *v6; // rdi
  __int64 *v7; // rdi
  KIRQL v8; // al
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 **v11; // r8
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  KIRQL v15; // al
  __int64 *v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 **v18; // rax
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8

  KiWaitForContextSwap((__int64)a1);
  result = KiDecrementProcessStackCount(a1[23], v2, v3, v4);
  v6 = a1 + 110;
  if ( a1[110] != 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&qword_140C31EF8);
    v9 = *v6;
    v10 = v8;
    if ( *v6 != 1 && a1[111] )
    {
      v11 = (__int64 **)a1[111];
      if ( *(__int64 **)(v9 + 8) != v6 || *v11 != v6 )
        goto LABEL_11;
      *v11 = (__int64 *)v9;
      *(_QWORD *)(v9 + 8) = v11;
    }
    KxReleaseSpinLock(&qword_140C31EF8);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v14 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
  }
  v7 = a1 + 126;
  if ( a1[126] == 1 )
    return result;
  v15 = KeAcquireSpinLockRaiseToDpc(&KiUpdateVpThreadPriorityLock);
  v16 = (__int64 *)*v7;
  v17 = v15;
  if ( *v7 != 1 && a1[127] )
  {
    v18 = (__int64 **)a1[127];
    if ( (__int64 *)v16[1] == v7 && *v18 == v7 )
    {
      *v18 = v16;
      v16[1] = (__int64)v18;
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
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v17 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v20 = v19->SchedulerAssist;
        v14 = ((unsigned int)result & v20[5]) == 0;
        v20[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick(v19);
      }
    }
  }
  __writecr8(v17);
  return result;
}
