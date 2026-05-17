/*
 * XREFs of _RtlAddIntegrityLabelToBoundaryDescriptor@8 @ 0x4B34D1A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAddSIDToBoundaryDescriptorEx@12 @ 0x4B2A9D06 (_RtlAddSIDToBoundaryDescriptorEx@12.c)
 */

int __stdcall RtlAddIntegrityLabelToBoundaryDescriptor(int a1, unsigned __int8 *a2)
{
  return RtlAddSIDToBoundaryDescriptorEx(a1, a2, 1);
}
