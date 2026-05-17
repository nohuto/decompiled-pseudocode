/*
 * XREFs of _matherr @ 0x180096274
 * Callers:
 *     _call_matherr @ 0x180094104 (_call_matherr.c)
 *     _umatherr @ 0x180094FC4 (_umatherr.c)
 * Callees:
 *     <none>
 */

int __cdecl matherr(struct _exception *Except)
{
  return 0;
}
