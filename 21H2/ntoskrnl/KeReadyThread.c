/*
 * XREFs of KeReadyThread @ 0x140277A14
 * Callers:
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 * Callees:
 *     KiFastReadyThread @ 0x140278190 (KiFastReadyThread.c)
 *     KiInSwapSingleProcess @ 0x14029BAA0 (KiInSwapSingleProcess.c)
 */

__int64 __fastcall KeReadyThread(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r11

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 840) & 7) == 0 )
    return KiFastReadyThread(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << ((unsigned __int8)CurrentIrql + 1)) - 1) & 4;
  }
  result = KiInSwapSingleProcess(a1, v1, CurrentIrql);
  if ( !(_BYTE)result )
    return KiFastReadyThread(a1);
  return result;
}
