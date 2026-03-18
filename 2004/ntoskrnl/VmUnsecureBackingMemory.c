/*
 * XREFs of VmUnsecureBackingMemory @ 0x14092BCB0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x140600750 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmUnsecureBackingMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}
