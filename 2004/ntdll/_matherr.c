/*
 * XREFs of _matherr @ 0x180096174
 * Callers:
 *     _call_matherr @ 0x180094004 (_call_matherr.c)
 *     _umatherr @ 0x180094EC4 (_umatherr.c)
 * Callees:
 *     <none>
 */

int __cdecl matherr(struct _exception *Except)
{
  return 0;
}
