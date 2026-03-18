/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1403F4AA0
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140788760 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x140788914 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140788BC8 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x14097CFE0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
