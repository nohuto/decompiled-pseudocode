/*
 * XREFs of _RtlAddSIDToBoundaryDescriptor@8 @ 0x4B2A9CF0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAddSIDToBoundaryDescriptorEx@12 @ 0x4B2A9D06 (_RtlAddSIDToBoundaryDescriptorEx@12.c)
 */

NTSTATUS __cdecl RtlAddSIDToBoundaryDescriptor(POBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptor, PSID RequiredSid)
{
  return RtlAddSIDToBoundaryDescriptorEx(BoundaryDescriptor, RequiredSid, 0);
}
