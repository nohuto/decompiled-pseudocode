/*
 * XREFs of ZwLoadKey2 @ 0x1403F56C0
 * Callers:
 *     BiLoadHive @ 0x140773668 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey2(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
