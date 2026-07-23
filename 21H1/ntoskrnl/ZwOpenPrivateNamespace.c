/*
 * XREFs of ZwOpenPrivateNamespace @ 0x1403F4810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NamespaceHandle);
}
