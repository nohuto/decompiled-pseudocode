/*
 * XREFs of PopFxCompleteDirectedPowerTransition @ 0x140568A8C
 * Callers:
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x140568D24 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x140569290 (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     PopFxAddLogEntry @ 0x140246704 (PopFxAddLogEntry.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x14033EEA8 (PopFxDisableWorkOrderWatchdog.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     Feature_Servicing_2206c_38536160__private_IsEnabled @ 0x1403F6778 (Feature_Servicing_2206c_38536160__private_IsEnabled.c)
 *     PopFxBugCheck @ 0x14056791C (PopFxBugCheck.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x14056907C (PopFxEnforceDirectedPowerTransition.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x140570850 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140575014 (PopCompleteDirectedPowerTransitionCallback.c)
 */

LONG __fastcall PopFxCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  LONG result; // eax

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v4 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 0x2000) == 0 )
    goto LABEL_21;
  _m_prefetchw((const void *)(BugCheckParameter3 + 1160));
  v6 = *(_DWORD *)(BugCheckParameter3 + 1160);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 1160), v6, v6);
  }
  while ( v7 != v6 );
  if ( v6
    || (PopFxDisableWorkOrderWatchdog((__int64 *)(BugCheckParameter3 + 976)),
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1152)),
        PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 1LL),
        _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFDFFF),
        _m_prefetchw((const void *)(BugCheckParameter3 + 32)),
        ((_InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 32), 0) & 0x1000) != 0) != a2) )
  {
LABEL_21:
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  }
  v9 = *(_QWORD *)(BugCheckParameter3 + 1168);
  v10 = *(_DWORD *)(BugCheckParameter3 + 1176);
  v11 = *(_DWORD *)(BugCheckParameter3 + 1180) & 0xFFFFFFFD;
  *(_QWORD *)(BugCheckParameter3 + 1168) = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 1176) = 0;
  *(_DWORD *)(BugCheckParameter3 + 1180) = v11;
  KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = -1LL << ((unsigned __int8)v8 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)v12;
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  LOBYTE(v12) = a2;
  PopDiagTraceFxDeviceDirectedCompletion(*(_QWORD *)(BugCheckParameter3 + 48), v12);
  if ( byte_140C24D14 )
  {
    v10 = 0;
  }
  else
  {
    Feature_Servicing_2206c_38536160__private_IsEnabled();
    PopFxEnforceDirectedPowerTransition(BugCheckParameter3);
  }
  PopCompleteDirectedPowerTransitionCallback(BugCheckParameter3, v9, v10);
  result = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 244));
  if ( !result )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 248), 0, 0);
  return result;
}
