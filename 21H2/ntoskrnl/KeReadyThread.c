/*
 * XREFs of KeReadyThread @ 0x1402659B4
 * Callers:
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 * Callees:
 *     KiInSwapSingleProcess @ 0x140213470 (KiInSwapSingleProcess.c)
 *     KiFastReadyThread @ 0x140266130 (KiFastReadyThread.c)
 */

__int64 __fastcall KeReadyThread(_KTHREAD *a1)
{
  __int64 Process; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r11

  Process = (__int64)a1->ApcState.Process;
  if ( (*(_DWORD *)(Process + 840) & 7) == 0 )
    return KiFastReadyThread(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  result = KiInSwapSingleProcess(a1, Process, CurrentIrql);
  if ( !(_BYTE)result )
    return KiFastReadyThread(a1);
  return result;
}
