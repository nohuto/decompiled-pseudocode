/*
 * XREFs of ZwCreatePrivateNamespace @ 0x1403F9890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NamespaceHandle);
}
