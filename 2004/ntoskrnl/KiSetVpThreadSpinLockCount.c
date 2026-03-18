/*
 * XREFs of KiSetVpThreadSpinLockCount @ 0x1402086E0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KiDirectSwitchThread @ 0x1402EE940 (KiDirectSwitchThread.c)
 *     KxDispatchInterrupt @ 0x1403FDF50 (KxDispatchInterrupt.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
