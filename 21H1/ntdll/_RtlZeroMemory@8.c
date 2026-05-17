/*
 * XREFs of _RtlZeroMemory@8 @ 0x4B308040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlZeroMemory(char *a1, unsigned int a2)
{
  int result; // eax

  result = 0;
  memset(a1, 0, 4 * (a2 >> 2));
  if ( (a2 & 3) != 0 )
    memset(&a1[4 * (a2 >> 2)], 0, a2 & 3);
  return result;
}
