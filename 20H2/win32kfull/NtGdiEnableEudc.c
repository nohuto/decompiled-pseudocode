/*
 * XREFs of NtGdiEnableEudc @ 0x1C0022DB0
 * Callers:
 *     <none>
 * Callees:
 *     GreEnableEUDC @ 0x1C00220CC (GreEnableEUDC.c)
 */

__int64 __fastcall NtGdiEnableEudc(int a1)
{
  return GreEnableEUDC(a1);
}
