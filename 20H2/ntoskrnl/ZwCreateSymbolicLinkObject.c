/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x1403F9990
 * Callers:
 *     SeGetTokenDeviceMap @ 0x14063C438 (SeGetTokenDeviceMap.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 *     IoCreateSymbolicLink @ 0x140769BE0 (IoCreateSymbolicLink.c)
 *     ObpInitializeRootNamespace @ 0x140796470 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407968D8 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x1408964F0 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140909310 (PspSiloInitializeSystemRootSymlink.c)
 *     CmpInitializeDriverStores @ 0x140A56CF8 (CmpInitializeDriverStores.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A70F6C (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSymbolicLinkObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
