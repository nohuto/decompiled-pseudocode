/*
 * XREFs of ZwCreateDirectoryObject @ 0x1403F4A80
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1406E253C (SeGetTokenDeviceMap.c)
 *     ObpInitializeRootNamespace @ 0x140788760 (ObpInitializeRootNamespace.c)
 *     SepInitializationPhase1 @ 0x1407995AC (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x14097D49C (ObpGetSilosRootDirectory.c)
 *     CmpInitializeDriverStores @ 0x140A56678 (CmpInitializeDriverStores.c)
 *     ExInitializeNls @ 0x140A70BF4 (ExInitializeNls.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
