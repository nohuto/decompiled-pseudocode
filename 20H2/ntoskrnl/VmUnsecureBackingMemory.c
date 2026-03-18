/*
 * XREFs of VmUnsecureBackingMemory @ 0x140931AE0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x1406245E0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmUnsecureBackingMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}
