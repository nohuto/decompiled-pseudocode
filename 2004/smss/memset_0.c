/*
 * XREFs of memset_0 @ 0x14000EFA3
 * Callers:
 *     SmpStartCsr @ 0x1400020F0 (SmpStartCsr.c)
 *     SmpInitializeControlBlock @ 0x1400037B0 (SmpInitializeControlBlock.c)
 *     SmscpExecuteInitialCommand @ 0x140004290 (SmscpExecuteInitialCommand.c)
 *     SmExecPgmEx @ 0x140004338 (SmExecPgmEx.c)
 *     SmscpLoadSubSystem @ 0x1400043FC (SmscpLoadSubSystem.c)
 *     SmpPagefileInitialize @ 0x1400067F8 (SmpPagefileInitialize.c)
 *     SmpSaveOldPageFiles @ 0x140006E48 (SmpSaveOldPageFiles.c)
 *     SmpInit @ 0x14000C620 (SmpInit.c)
 *     RtlStringCbPrintfExW @ 0x140013BD0 (RtlStringCbPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x140013D94 (RtlStringExHandleOtherFlagsW.c)
 *     SmpLoadSubSystem @ 0x1400147CC (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x140014C9C (SmpRenameTargetFile.c)
 *     SmscpNotifySmOfFailure @ 0x140015C08 (SmscpNotifySmOfFailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
