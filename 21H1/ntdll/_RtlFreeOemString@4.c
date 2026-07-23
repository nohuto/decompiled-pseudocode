/*
 * XREFs of _RtlFreeOemString@4 @ 0x4B34DC00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  if ( OemString->Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)OemString->Buffer);
}
