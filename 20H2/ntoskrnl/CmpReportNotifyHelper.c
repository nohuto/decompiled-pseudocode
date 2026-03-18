/*
 * XREFs of CmpReportNotifyHelper @ 0x1405F38C0
 * Callers:
 *     CmpReportNotifyForKcbStack @ 0x1405F3830 (CmpReportNotifyForKcbStack.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpTransIsTransActive @ 0x1404EB18C (CmpTransIsTransActive.c)
 *     CmpDelayedDerefKeys @ 0x1405F3AAC (CmpDelayedDerefKeys.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     CmpNotifyTriggerCheck @ 0x1405F3C08 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1405F3C84 (CmpPostNotify.c)
 */

__int64 __fastcall CmpReportNotifyHelper(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  volatile signed __int64 *v9; // r14
  __int64 KcbAtLayerHeight; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 *i; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // edx
  int v20; // r8d
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  _QWORD v26[2]; // [rsp+40h] [rbp-38h] BYREF

  v26[1] = v26;
  v26[0] = v26;
  v9 = (volatile signed __int64 *)(a2 + 1672);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  for ( i = *(__int64 **)(a2 + 1584); i; i = (__int64 *)*i )
  {
    v14 = i[4];
    if ( (*(_DWORD *)(v14 + 8) & 0x7FE00000u) > (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x7FE00000u) )
      break;
    if ( (a4 & (_DWORD)i[6] & 0x3FFFFFFF) != 0 && ((i[6] & 0x40000000) != 0 || v14 == KcbAtLayerHeight) )
    {
      v15 = *(_QWORD *)(i[5] + 56);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v15) && (!v15 || (unsigned int)CmpTransIsTransActive(v15)) )
      {
        v16 = i[4];
        v17 = KcbAtLayerHeight;
        v18 = (*(_DWORD *)(v16 + 8) >> 21) & 0x3FF;
        if ( ((*(_DWORD *)(KcbAtLayerHeight + 8) >> 21) & 0x3FFu) > v18 )
        {
          do
            v17 = *(_QWORD *)(v17 + 72);
          while ( ((*(_DWORD *)(v17 + 8) >> 21) & 0x3FFu) > v18 );
        }
        if ( v17 == v16 && (unsigned __int8)CmpNotifyTriggerCheck(i, a1, a3) )
          CmpPostNotify((_DWORD)i, v19, v20, 268, 0, (__int64)v26, a5);
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
  return CmpDelayedDerefKeys(v26);
}
