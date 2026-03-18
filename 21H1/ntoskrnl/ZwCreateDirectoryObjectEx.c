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

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
