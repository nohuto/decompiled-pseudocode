/*
 * XREFs of ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1C013CEE4
 * Callers:
 *     ?_AddMListToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagMLIST@@@Z @ 0x1C013CE2C (-_AddMListToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagMLIST@@@Z.c)
 *     ?_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z @ 0x1C013CF08 (-_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C013CFC8 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C013D050 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall _AddMemoryBlockToLiveTriageDump(struct tagWIN32_TRIAGE_DATA *a1, void *a2)
{
  return (*((int (__fastcall **)(_QWORD, void *))a1 + 3))(*((_QWORD *)a1 + 5), a2) >= 0;
}
