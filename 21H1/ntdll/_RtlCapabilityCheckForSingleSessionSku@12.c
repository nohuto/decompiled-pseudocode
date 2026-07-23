/*
 * XREFs of _RtlCapabilityCheckForSingleSessionSku@12 @ 0x4B346050
 * Callers:
 *     <none>
 * Callees:
 *     _RtlIsMultiSessionSku@0 @ 0x4B2AD7C0 (_RtlIsMultiSessionSku@0.c)
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 */

NTSTATUS __stdcall RtlCapabilityCheckForSingleSessionSku(
        HANDLE TokenHandle,
        PUNICODE_STRING CapabilityName,
        PBOOLEAN HasCapability)
{
  NTSTATUS result; // eax

  if ( !HasCapability )
    return -1073741811;
  if ( !RtlIsMultiSessionSku() )
    return RtlCapabilityCheck(TokenHandle, CapabilityName, HasCapability);
  result = 0;
  *HasCapability = 0;
  return result;
}
