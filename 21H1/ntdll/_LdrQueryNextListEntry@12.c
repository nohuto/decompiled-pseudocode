/*
 * XREFs of _LdrQueryNextListEntry@12 @ 0x4B32EA90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpReadMemory @ 0x4B32F4DC (LdrpReadMemory.c)
 */

int __stdcall LdrQueryNextListEntry(int a1, int a2, int a3)
{
  return LdrpReadMemory(a3, 4);
}
