/*
 * XREFs of ZwLoadKey @ 0x1403FA270
 * Callers:
 *     BiLoadHive @ 0x140781C68 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
