/*
 * XREFs of RtlStringFromGUID @ 0x1406FA600
 * Callers:
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     CmpCloneHwProfile @ 0x140879804 (CmpCloneHwProfile.c)
 *     PiInitFirmwareResources @ 0x140A4F840 (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140A4FCEC (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140A739A8 (SepSecureBootSetRegistryKey.c)
 *     VhdInitialize @ 0x140A767F8 (VhdInitialize.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A97408 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1406FA618 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
