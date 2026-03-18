/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x1403F4DC0
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1406E253C (SeGetTokenDeviceMap.c)
 *     IopProcessSetInterfaceState @ 0x14073452C (IopProcessSetInterfaceState.c)
 *     IoCreateSymbolicLink @ 0x14075B2F0 (IoCreateSymbolicLink.c)
 *     ObpInitializeRootNamespace @ 0x140788760 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140788BC8 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140890A00 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409036F0 (PspSiloInitializeSystemRootSymlink.c)
 *     CmpInitializeDriverStores @ 0x140A56678 (CmpInitializeDriverStores.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6A660 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSymbolicLinkObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
