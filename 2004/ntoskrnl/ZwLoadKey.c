/*
 * XREFs of ZwLoadKey @ 0x1403F56A0
 * Callers:
 *     BiLoadHive @ 0x140773668 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
