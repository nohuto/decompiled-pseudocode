/*
 * XREFs of CrmRegisterToStateMonitor @ 0x18002AFC8
 * Callers:
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x180036490 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorGPUUsageStart @ 0x1800383EC (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x18003DCA0 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180043108 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x1800438FC (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x180043C7C (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180043CF0 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180043D64 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180043DC8 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180043E70 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x180043EDC (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180043F48 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180085400 (CrmStateMonitorCompositeTestStart.c)
 * Callees:
 *     CrmStateMonitorListenerAdd @ 0x18002B188 (CrmStateMonitorListenerAdd.c)
 *     CrmStateMonitorStart @ 0x18002B290 (CrmStateMonitorStart.c)
 *     CrmStateMonitorCleanup @ 0x180036560 (CrmStateMonitorCleanup.c)
 *     CrmStateMonitorListenerRemove @ 0x1800366BC (CrmStateMonitorListenerRemove.c)
 *     CrmStateMonitorInitialize @ 0x180036F80 (CrmStateMonitorInitialize.c)
 *     CrmStateMonitorSizeGet @ 0x180037F00 (CrmStateMonitorSizeGet.c)
 */

__int64 __fastcall CrmRegisterToStateMonitor(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // edi
  unsigned int v8; // eax
  PVOID Heap; // rax
  void *v10; // rbx

  v3 = a2;
  RtlAcquireSRWLockShared(&CrmGlobals);
  v4 = *((_QWORD *)&CrmGlobals + v3 + 2);
  v5 = v3;
  if ( v4 )
  {
    CrmStateMonitorListenerAdd(v4, a1, 2LL);
    return 0;
  }
  else
  {
    RtlReleaseSRWLockShared(&CrmGlobals);
    v8 = CrmStateMonitorSizeGet((unsigned int)v3);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    v10 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    CrmStateMonitorInitialize(Heap, (unsigned int)v3);
    v6 = CrmStateMonitorStart(v10);
    if ( v6 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&CrmGlobals);
      dword_1800B3D68 = GetCurrentThreadId();
      if ( !*((_QWORD *)&CrmGlobals + v5 + 2) )
      {
        *((_QWORD *)&CrmGlobals + v5 + 2) = v10;
        dword_1800B3D68 = 0;
        RtlReleaseSRWLockExclusive(&CrmGlobals);
        return (unsigned int)v6;
      }
      CrmStateMonitorListenerRemove(v10);
      v10 = 0LL;
      CrmStateMonitorListenerAdd(*((_QWORD *)&CrmGlobals + v5 + 2), a1, 1LL);
      v6 = 0;
    }
    if ( v10 )
    {
      CrmStateMonitorCleanup(v10);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    }
  }
  return (unsigned int)v6;
}
