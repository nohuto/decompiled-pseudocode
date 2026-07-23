/*
 * XREFs of ZwReplaceKey @ 0x1403F51B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplaceKey(POBJECT_ATTRIBUTES NewFile, HANDLE TargetHandle, POBJECT_ATTRIBUTES OldFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NewFile);
}
