/*
 * XREFs of _RtlAddIntegrityLabelToBoundaryDescriptor@8 @ 0x4B34D1A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAddSIDToBoundaryDescriptorEx@12 @ 0x4B2A9D06 (_RtlAddSIDToBoundaryDescriptorEx@12.c)
 */

NTSTATUS __cdecl RtlAddIntegrityLabelToBoundaryDescriptor(
        POBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptor,
        PSID IntegrityLabel)
{
  int v2; // edi

  return RtlAddSIDToBoundaryDescriptorEx((unsigned __int8 *)IntegrityLabel, (int)BoundaryDescriptor, v2, 1);
}
