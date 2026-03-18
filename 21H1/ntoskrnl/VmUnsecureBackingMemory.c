/*
 * XREFs of VmUnsecureBackingMemory @ 0x14092AA00
 * Callers:
 *     <none>
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x140635790 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmUnsecureBackingMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}
