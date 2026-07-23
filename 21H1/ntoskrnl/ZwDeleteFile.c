/*
 * XREFs of ZwDeleteFile @ 0x1403F3D70
 * Callers:
 *     NtEnableLastKnownGood @ 0x140767A50 (NtEnableLastKnownGood.c)
 *     KsepDeletePatchSdb @ 0x1408BC434 (KsepDeletePatchSdb.c)
 *     PopDeleteHiberFile @ 0x1408E262C (PopDeleteHiberFile.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A8E7A0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
