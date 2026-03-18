/*
 * XREFs of KeSetSystemAffinityThread @ 0x1403CED90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemAffinityThreadEx @ 0x1403CEDB0 (KeSetSystemAffinityThreadEx.c)
 */

void __stdcall KeSetSystemAffinityThread(KAFFINITY Affinity)
{
  KeSetSystemAffinityThreadEx(Affinity);
}
