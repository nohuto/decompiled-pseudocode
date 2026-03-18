/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x1407761F8
 * Callers:
 *     WdipSemEnableScenario @ 0x1407771FC (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     WdipSemBuildScenarioInstance @ 0x1407762CC (WdipSemBuildScenarioInstance.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140777144 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14092C8B4 (WdipSemLogInflightLimitExceededInformation.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1C3B8, 0LL);
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_140C1C3B0 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v3 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v3 )
      {
        v6 = (_QWORD *)qword_140C1C3A8;
        if ( *(__int64 **)qword_140C1C3A8 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v3 = &WdipSemEnabledInstanceTable;
        v3[1] = v6;
        *v6 = v3;
        ++dword_140C1C3B0;
        qword_140C1C3A8 = (__int64)v3;
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1C3B8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
