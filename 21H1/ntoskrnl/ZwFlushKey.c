/*
 * XREFs of ZwFlushKey @ 0x1403F4050
 * Callers:
 *     VfClearVerifierSettings @ 0x14059A720 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x1405AC8B0 (ExpRecordShutdownTime.c)
 *     BcdFlushStore @ 0x1407658F0 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x140791714 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x140920E20 (SepAuditFailed.c)
 *     PopFlushVolumes @ 0x14099335C (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
