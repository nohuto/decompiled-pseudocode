/*
 * XREFs of KeReadyThread @ 0x1402EAC4C
 * Callers:
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 * Callees:
 *     KiFastReadyThread @ 0x1402E4884 (KiFastReadyThread.c)
 *     KiInSwapSingleProcess @ 0x140328540 (KiInSwapSingleProcess.c)
 */

__int64 __fastcall KeReadyThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r11

  v4 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v4 + 840) & 7) == 0 )
    return KiFastReadyThread(a1, v4, a3, a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << ((unsigned __int8)CurrentIrql + 1)) - 1) & 4;
  }
  result = KiInSwapSingleProcess(a1, v4, CurrentIrql);
  if ( !(_BYTE)result )
    return KiFastReadyThread(a1, v4, a3, a4);
  return result;
}
