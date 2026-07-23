/*
 * XREFs of ZwDeleteFile @ 0x1403F5000
 * Callers:
 *     NtEnableLastKnownGood @ 0x140769E30 (NtEnableLastKnownGood.c)
 *     KsepDeletePatchSdb @ 0x1408BD754 (KsepDeletePatchSdb.c)
 *     PopDeleteHiberFile @ 0x1408E38AC (PopDeleteHiberFile.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A8DD90 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
