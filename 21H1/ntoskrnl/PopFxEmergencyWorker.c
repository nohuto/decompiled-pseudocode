/*
 * XREFs of PopFxEmergencyWorker @ 0x1407BEFA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     PopFxProcessWorkPool @ 0x1402D79B4 (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxEmergencyWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16LL, a3, a4);
  return PopFxProcessWorkPool(a1, 0xFFFFFFFF);
}
