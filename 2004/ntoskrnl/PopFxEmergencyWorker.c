/*
 * XREFs of PopFxEmergencyWorker @ 0x1407C24A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     PopFxProcessWorkPool @ 0x1402E3688 (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxEmergencyWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16LL, a3, a4);
  return PopFxProcessWorkPool(a1, 0xFFFFFFFF);
}
