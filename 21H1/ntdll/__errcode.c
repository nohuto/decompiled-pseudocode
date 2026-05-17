/*
 * XREFs of __errcode @ 0x4B2FD7AB
 * Callers:
 *     __except1 @ 0x4B2FD7DF (__except1.c)
 * Callees:
 *     <none>
 */

int __cdecl _errcode(char a1)
{
  if ( (a1 & 0x20) != 0 )
    return 5;
  if ( (a1 & 8) != 0 )
    return 1;
  if ( (a1 & 4) != 0 )
    return 2;
  if ( (a1 & 1) != 0 )
    return 3;
  return 2 * (a1 & 2);
}
