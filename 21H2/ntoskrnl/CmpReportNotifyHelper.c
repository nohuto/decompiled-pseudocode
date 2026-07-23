/*
 * XREFs of CmpReportNotifyHelper @ 0x1406DCAF0
 * Callers:
 *     CmpReportNotifyForKcbStack @ 0x1406DCA60 (CmpReportNotifyForKcbStack.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpTransIsTransActive @ 0x1404ECC9C (CmpTransIsTransActive.c)
 *     CmpNotifyTriggerCheck @ 0x1406DC7A4 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1406DC820 (CmpPostNotify.c)
 *     CmpDelayedDerefKeys @ 0x1406DCCDC (CmpDelayedDerefKeys.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpReportNotifyHelper(__int64 a1, __int64 a2, __int64 a3, int a4, __int128 *a5)
{
  volatile signed __int64 *v9; // r14
  __int64 KcbAtLayerHeight; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 i; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  __int128 v26; // [rsp+40h] [rbp-38h] BYREF

  *((_QWORD *)&v26 + 1) = &v26;
  *(_QWORD *)&v26 = &v26;
  v9 = (volatile signed __int64 *)(a2 + 1672);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  for ( i = *(_QWORD *)(a2 + 1584); i; i = *(_QWORD *)i )
  {
    v14 = *(_QWORD *)(i + 32);
    if ( (*(_DWORD *)(v14 + 8) & 0x7FE00000u) > (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x7FE00000u) )
      break;
    if ( (a4 & *(_DWORD *)(i + 48) & 0x3FFFFFFF) != 0
      && ((*(_DWORD *)(i + 48) & 0x40000000) != 0 || v14 == KcbAtLayerHeight) )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(i + 40) + 56LL);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v15) && (!v15 || (unsigned int)CmpTransIsTransActive(v15)) )
      {
        v16 = *(_QWORD *)(i + 32);
        v17 = KcbAtLayerHeight;
        v18 = (*(_DWORD *)(v16 + 8) >> 21) & 0x3FF;
        if ( ((*(_DWORD *)(KcbAtLayerHeight + 8) >> 21) & 0x3FFu) > v18 )
        {
          do
            v17 = *(_QWORD *)(v17 + 72);
          while ( ((*(_DWORD *)(v17 + 8) >> 21) & 0x3FFu) > v18 );
        }
        if ( v17 == v16 && CmpNotifyTriggerCheck(i, a1, a3) )
          CmpPostNotify(i, v19, v20, 0x10Cu, 0, &v26, a5);
      }
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return CmpDelayedDerefKeys(&v26);
}
