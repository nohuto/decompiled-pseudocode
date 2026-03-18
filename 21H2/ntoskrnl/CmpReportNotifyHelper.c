/*
 * XREFs of CmpReportNotifyHelper @ 0x140721910
 * Callers:
 *     CmpReportNotifyForKcbStack @ 0x140721878 (CmpReportNotifyForKcbStack.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     CmpTransIsTransActive @ 0x14053F16C (CmpTransIsTransActive.c)
 *     CmpPostNotify @ 0x14071C288 (CmpPostNotify.c)
 *     CmpNotifyTriggerCheck @ 0x14071EDD4 (CmpNotifyTriggerCheck.c)
 *     CmpDelayedDerefKeys @ 0x140721B0C (CmpDelayedDerefKeys.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpReportNotifyHelper(__int64 a1, __int64 a2, __int64 a3, int a4, __int128 *a5)
{
  __int64 v6; // rdx
  volatile signed __int64 *v10; // r14
  __int64 KcbAtLayerHeight; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 i; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  __int128 v27; // [rsp+40h] [rbp-38h] BYREF

  v6 = *(unsigned __int16 *)(a1 + 2);
  *((_QWORD *)&v27 + 1) = &v27;
  *(_QWORD *)&v27 = &v27;
  v10 = (volatile signed __int64 *)(a2 + 1680);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v6);
  ExAcquirePushLockExclusiveEx(a2 + 1680, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  for ( i = *(_QWORD *)(a2 + 1592); i; i = *(_QWORD *)i )
  {
    v15 = *(_QWORD *)(i + 32);
    if ( (*(_DWORD *)(v15 + 8) & 0x7FE00000u) > (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x7FE00000u) )
      break;
    if ( (a4 & *(_DWORD *)(i + 48) & 0x3FFFFFFF) != 0
      && ((*(_DWORD *)(i + 48) & 0x40000000) != 0 || v15 == KcbAtLayerHeight) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(i + 40) + 56LL);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v16) && (!v16 || (unsigned int)CmpTransIsTransActive(v16)) )
      {
        v17 = *(_QWORD *)(i + 32);
        v18 = KcbAtLayerHeight;
        v19 = (*(_DWORD *)(v17 + 8) >> 21) & 0x3FF;
        if ( ((*(_DWORD *)(KcbAtLayerHeight + 8) >> 21) & 0x3FFu) > v19 )
        {
          do
            v18 = *(_QWORD *)(v18 + 72);
          while ( ((*(_DWORD *)(v18 + 8) >> 21) & 0x3FFu) > v19 );
        }
        if ( v18 == v17 && CmpNotifyTriggerCheck(i, a1, a3) )
          CmpPostNotify(i, v20, v21, 0x10Cu, 0, &v27, a5);
      }
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  return CmpDelayedDerefKeys(&v27);
}
