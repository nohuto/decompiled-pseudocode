/*
 * XREFs of _matherr @ 0x180096874
 * Callers:
 *     _call_matherr @ 0x180094704 (_call_matherr.c)
 *     _umatherr @ 0x1800955C4 (_umatherr.c)
 * Callees:
 *     <none>
 */

int __cdecl matherr(struct _exception *Except)
{
  return 0;
}
