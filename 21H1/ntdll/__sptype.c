/*
 * XREFs of __sptype @ 0x4B2FDF5D
 * Callers:
 *     _fabs @ 0x4B2F83F0 (_fabs.c)
 *     __ceil_default @ 0x4B2FD662 (__ceil_default.c)
 *     __floor_default @ 0x4B2FE05F (__floor_default.c)
 *     __fpclass @ 0x4B2FECAE (__fpclass.c)
 * Callees:
 *     <none>
 */

int __cdecl _sptype(int a1, int a2)
{
  if ( a2 == 2146435072 )
  {
    if ( !a1 )
      return 1;
  }
  else if ( a2 == -1048576 && !a1 )
  {
    return 2;
  }
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF8 )
    return 3;
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF0 && ((a2 & 0x7FFFF) != 0 || a1) )
    return 4;
  return 0;
}
