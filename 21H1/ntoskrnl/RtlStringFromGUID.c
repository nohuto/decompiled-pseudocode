/*
 * XREFs of RtlStringFromGUID @ 0x14070EF00
 * Callers:
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     CmpCloneHwProfile @ 0x1408729C4 (CmpCloneHwProfile.c)
 *     PiInitFirmwareResources @ 0x140A4976C (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140A49BF0 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140A6CDF8 (SepSecureBootSetRegistryKey.c)
 *     VhdInitialize @ 0x140A6F7F8 (VhdInitialize.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A92094 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x14070EF18 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
