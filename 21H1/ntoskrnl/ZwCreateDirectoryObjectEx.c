/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1403F3810
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140782DDC (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x140782F90 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140783244 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x14097BC40 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
