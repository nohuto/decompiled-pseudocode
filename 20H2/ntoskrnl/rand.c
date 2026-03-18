/*
 * XREFs of rand @ 0x1403D2940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140C0F130 = 214013 * dword_140C0F130 + 2531011;
  return (dword_140C0F130 >> 16) & 0x7FFF;
}
