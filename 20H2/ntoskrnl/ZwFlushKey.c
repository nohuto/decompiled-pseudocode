/*
 * XREFs of ZwFlushKey @ 0x1403F9EB0
 * Callers:
 *     VfClearVerifierSettings @ 0x14059E8B0 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x1405B0B3C (ExpRecordShutdownTime.c)
 *     BcdFlushStore @ 0x1407762E0 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x1407A09F0 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x140928130 (SepAuditFailed.c)
 *     PopFlushVolumes @ 0x14099AAFC (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
