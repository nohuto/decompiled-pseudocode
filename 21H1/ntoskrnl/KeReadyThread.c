/*
 * XREFs of KeReadyThread @ 0x14032FD8C
 * Callers:
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 * Callees:
 *     KiInSwapSingleProcess @ 0x1402EF380 (KiInSwapSingleProcess.c)
 *     KiFastReadyThread @ 0x1403299AC (KiFastReadyThread.c)
 */

__int64 __fastcall KeReadyThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r11

  v4 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v4 + 840) & 7) == 0 )
    return KiFastReadyThread(a1, v4, a3, (_DWORD *)a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a4 = SchedulerAssist[5] | ~((unsigned __int8)(1LL << ((unsigned __int8)CurrentIrql + 1)) - 1) & 4u;
    SchedulerAssist[5] = a4;
  }
  result = KiInSwapSingleProcess(a1, v4, CurrentIrql, a4);
  if ( !(_BYTE)result )
    return KiFastReadyThread(a1, v4, a3, (_DWORD *)a4);
  return result;
}
