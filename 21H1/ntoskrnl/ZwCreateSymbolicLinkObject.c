/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x1403F3B30
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1406C1FBC (SeGetTokenDeviceMap.c)
 *     IopProcessSetInterfaceState @ 0x14072FAFC (IopProcessSetInterfaceState.c)
 *     IoCreateSymbolicLink @ 0x140759470 (IoCreateSymbolicLink.c)
 *     ObpInitializeRootNamespace @ 0x140782DDC (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140783244 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x14088F6E0 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409028E0 (PspSiloInitializeSystemRootSymlink.c)
 *     CmpInitializeDriverStores @ 0x140A50978 (CmpInitializeDriverStores.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6A400 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSymbolicLinkObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
