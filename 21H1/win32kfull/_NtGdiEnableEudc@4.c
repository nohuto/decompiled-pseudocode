/*
 * XREFs of _NtGdiEnableEudc@4 @ 0xEBCE4
 * Callers:
 *     <none>
 * Callees:
 *     _GreEnableEUDC@4 @ 0xEBCF6 (_GreEnableEUDC@4.c)
 */

int __stdcall NtGdiEnableEudc(int a1)
{
  return GreEnableEUDC(a1);
}
