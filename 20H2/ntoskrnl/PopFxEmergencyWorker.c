/*
 * XREFs of PopFxEmergencyWorker @ 0x1407D0CA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     PopFxProcessWorkPool @ 0x14033D5EC (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxEmergencyWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16, a3, a4);
  return PopFxProcessWorkPool(a1, 0xFFFFFFFF);
}
