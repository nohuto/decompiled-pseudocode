/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x140581020
 * Callers:
 *     RtlStdLogStackTrace @ 0x1405809A0 (RtlStdLogStackTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlpStdGetSpaceForTrace @ 0x140580F60 (RtlpStdGetSpaceForTrace.c)
 */

KSPIN_LOCK __fastcall RtlpStdLogCapturedStackTrace(PKSPIN_LOCK SpinLock, __int64 a2, unsigned int a3)
{
  SIZE_T v4; // r14
  __int64 v6; // rdx
  __int64 v8; // rbx
  KSPIN_LOCK *v9; // rbp
  KSPIN_LOCK i; // rbx
  _SLIST_ENTRY *SpaceForTrace; // rax
  __int16 v12; // cx
  __int64 v13; // rdx
  __int16 v14; // cx
  unsigned __int64 v15; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf

  v4 = 8LL * *(unsigned __int16 *)(a2 + 14);
  v6 = a3 % *((_DWORD *)SpinLock + 180);
  v8 = 3 * v6;
  _InterlockedAdd((volatile signed __int32 *)SpinLock + 44, 1u);
  v9 = &SpinLock[3 * (unsigned int)v6];
  *((_BYTE *)v9 + 744) = KeAcquireSpinLockRaiseToDpc(v9 + 92);
  for ( i = SpinLock[v8 + 91]; i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v4) == v4 )
    {
      goto LABEL_8;
    }
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace((volatile signed __int32 *)SpinLock, *(_WORD *)(a2 + 14));
  i = (KSPIN_LOCK)SpaceForTrace;
  if ( !SpaceForTrace )
  {
    _InterlockedAdd((volatile signed __int32 *)SpinLock + 50, 1u);
    goto LABEL_11;
  }
  memmove(&SpaceForTrace[1], (const void *)(a2 + 16), v4);
  v12 = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  *(_WORD *)(i + 14) = v12;
  v13 = 3LL * (a3 % *((_DWORD *)SpinLock + 180));
  *(_QWORD *)i = SpinLock[3 * (a3 % *((_DWORD *)SpinLock + 180)) + 91];
  SpinLock[v13 + 91] = i;
LABEL_8:
  v14 = *(_WORD *)(i + 8);
  if ( (v14 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v14 ^ (v14 ^ (v14 + 1)) & 0x7FF;
LABEL_11:
  v15 = *((unsigned __int8 *)v9 + 744);
  KxReleaseSpinLock(v9 + 92);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  return i;
}
