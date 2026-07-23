/*
 * XREFs of sub_4B322305 @ 0x4B322305
 * Callers:
 *     _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9 (_RtlpResolveAssemblyStorageMapEntry@20.c)
 * Callees:
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

void __thiscall sub_4B322305(ULONG Level, int a2, int a3, int a4)
{
  DbgPrintEx(
    51,
    Level,
    (int)"SXS: %s() bad parameters\n"
         "SXS:   Map                : %p\n"
         "SXS:   Data               : %p\n"
         "SXS:   AssemblyRosterIndex: 0x%lx\n"
         "SXS:   Map->AssemblyCount : 0x%lx\n",
    (int)"RtlpResolveAssemblyStorageMapEntry");
  JUMPOUT(0x4B2E2B66);
}
