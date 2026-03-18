/*
 * XREFs of rand @ 0x1403CFCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140C0F120 = 214013 * dword_140C0F120 + 2531011;
  return (dword_140C0F120 >> 16) & 0x7FFF;
}
