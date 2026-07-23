/*
 * XREFs of RtlStringFromGUID @ 0x1406A7C60
 * Callers:
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     CmpCloneHwProfile @ 0x140873CB4 (CmpCloneHwProfile.c)
 *     PipHardwareConfigInit @ 0x140A4F66C (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140A6D0C8 (SepSecureBootSetRegistryKey.c)
 *     VhdInitialize @ 0x140A703C0 (VhdInitialize.c)
 *     PiInitFirmwareResources @ 0x140A70B20 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A917A4 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140A92778 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1406A7C78 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
