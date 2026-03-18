/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x140773DE8
 * Callers:
 *     WdipSemEnableScenario @ 0x140774DEC (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     WdipSemBuildScenarioInstance @ 0x140773EBC (WdipSemBuildScenarioInstance.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140774D34 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14092B604 (WdipSemLogInflightLimitExceededInformation.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1A538, 0LL);
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_140C1A530 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v3 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v3 )
      {
        v6 = (_QWORD *)qword_140C1A528;
        if ( *(__int64 **)qword_140C1A528 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v3 = &WdipSemEnabledInstanceTable;
        v3[1] = v6;
        *v6 = v3;
        ++dword_140C1A530;
        qword_140C1A528 = (__int64)v3;
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1A538, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v3;
}
