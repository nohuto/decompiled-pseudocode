/*
 * XREFs of KiSetVpThreadSpinLockCount @ 0x140221660
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 *     KxDispatchInterrupt @ 0x140403FD0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiSetVpThreadSpinLockCount(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v4; // eax
  int v5; // edx
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 33976);
  if ( v2 && *(_BYTE *)(a1 + 32) <= 1u )
  {
    v4 = *(_DWORD *)(v2 + 24);
    v5 = v4 - 1;
    v6 = v4 + 1;
    if ( !a2 )
      v6 = v5;
    *(_DWORD *)(v2 + 24) = v6;
    if ( !v6 )
      KiRemoveSystemWorkPriorityKick(a1);
  }
}
