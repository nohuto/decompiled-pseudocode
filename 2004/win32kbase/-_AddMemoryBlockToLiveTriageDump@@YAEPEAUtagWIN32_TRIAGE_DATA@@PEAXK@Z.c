/*
 * XREFs of ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1C013F234
 * Callers:
 *     ?_AddMListToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagMLIST@@@Z @ 0x1C013F17C (-_AddMListToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagMLIST@@@Z.c)
 *     ?_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z @ 0x1C013F258 (-_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C013F318 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C013F3A0 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall _AddMemoryBlockToLiveTriageDump(struct tagWIN32_TRIAGE_DATA *a1, void *a2)
{
  return (*((int (__fastcall **)(_QWORD, void *))a1 + 3))(*((_QWORD *)a1 + 5), a2) >= 0;
}
