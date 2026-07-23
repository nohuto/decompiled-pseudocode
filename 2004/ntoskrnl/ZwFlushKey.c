/*
 * XREFs of ZwFlushKey @ 0x1403F52E0
 * Callers:
 *     VfClearVerifierSettings @ 0x14059AE10 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x1405ACFDC (ExpRecordShutdownTime.c)
 *     BcdFlushStore @ 0x1407672B0 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x140794264 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1409220D0 (SepAuditFailed.c)
 *     PopFlushVolumes @ 0x14099499C (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
