/*
 * XREFs of ZwDeleteFile @ 0x1403F9BD0
 * Callers:
 *     NtEnableLastKnownGood @ 0x140778440 (NtEnableLastKnownGood.c)
 *     KsepDeletePatchSdb @ 0x1408C34B4 (KsepDeletePatchSdb.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A93A90 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
