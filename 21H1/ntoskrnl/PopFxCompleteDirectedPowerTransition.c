/*
 * XREFs of PopFxCompleteDirectedPowerTransition @ 0x140564A5C
 * Callers:
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x140564CD4 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x14056520C (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140236C6C (PopFxAddLogEntry.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1402D7C94 (PopFxDisableWorkOrderWatchdog.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1405638EC (PopFxBugCheck.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x14056502C (PopFxEnforceDirectedPowerTransition.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x14056C7D0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140570F94 (PopCompleteDirectedPowerTransitionCallback.c)
 */

LONG __fastcall PopFxCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  unsigned __int64 v8; // r14
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // r12
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
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
    goto LABEL_23;
  _m_prefetchw((const void *)(BugCheckParameter3 + 1160));
  v6 = *(_DWORD *)(BugCheckParameter3 + 1160);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 1160), v6, v6);
  }
  while ( v7 != v6 );
  if ( v6 )
    goto LABEL_23;
  PopFxDisableWorkOrderWatchdog((__int64 *)(BugCheckParameter3 + 976));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
  PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 1LL);
  _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFDFFF);
  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v9 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v9, v9);
  }
  while ( v10 != v9 );
  if ( ((v9 & 0x1000) != 0) != a2 )
LABEL_23:
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  v11 = *(_QWORD *)(BugCheckParameter3 + 1168);
  v12 = *(_DWORD *)(BugCheckParameter3 + 1176);
  v13 = *(_DWORD *)(BugCheckParameter3 + 1180) & 0xFFFFFFFD;
  *(_QWORD *)(BugCheckParameter3 + 1168) = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 1176) = 0;
  *(_DWORD *)(BugCheckParameter3 + 1180) = v13;
  KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = -1LL << ((unsigned __int8)v8 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)v14;
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  LOBYTE(v14) = a2;
  PopDiagTraceFxDeviceDirectedCompletion(*(_QWORD *)(BugCheckParameter3 + 48), v14);
  if ( byte_140C24E54 )
    v12 = 0;
  else
    PopFxEnforceDirectedPowerTransition(BugCheckParameter3);
  PopCompleteDirectedPowerTransitionCallback(BugCheckParameter3, v11, v12);
  result = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 244));
  if ( !result )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 248), 0, 0);
  return result;
}
