/*
 * XREFs of KiCheckThreadAffinity @ 0x1402ED834
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x14020CFA0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSearchForNewThread @ 0x1402EB5B4 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1402EB988 (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14032B6EC (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}
