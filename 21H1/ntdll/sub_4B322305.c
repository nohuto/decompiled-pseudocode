/*
 * XREFs of sub_4B322305 @ 0x4B322305
 * Callers:
 *     _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9 (_RtlpResolveAssemblyStorageMapEntry@20.c)
 * Callees:
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

void __userpurge sub_4B322305(const void *a1@<edx>, int a2@<ecx>, const void *a3@<edi>, int a4, int a5, int a6)
{
  int v6; // [esp+0h] [ebp-8h]
  int v7; // [esp+4h] [ebp-4h]

  DbgPrintEx(
    51,
    a2,
    "SXS: %s() bad parameters\n"
    "SXS:   Map                : %p\n"
    "SXS:   Data               : %p\n"
    "SXS:   AssemblyRosterIndex: 0x%lx\n"
    "SXS:   Map->AssemblyCount : 0x%lx\n",
    "RtlpResolveAssemblyStorageMapEntry",
    a3,
    a1,
    v6,
    v7);
  JUMPOUT(0x4B2E2B66);
}
