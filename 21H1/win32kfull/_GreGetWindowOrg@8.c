/*
 * XREFs of _GreGetWindowOrg@8 @ 0x21D64C
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     <none>
 */

int __fastcall GreGetWindowOrg(int a1, int a2)
{
  return GreGetDCPoint(a1, 8, a2);
}
