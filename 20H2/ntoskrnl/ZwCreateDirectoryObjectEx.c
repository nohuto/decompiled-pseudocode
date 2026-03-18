/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1403F9670
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140796470 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x140796624 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407968D8 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140982DB0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
