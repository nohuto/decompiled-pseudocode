/*
 * XREFs of _DxgkEngGetRgnData@12 @ 0xBF848
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DxgkEngGetRgnData(int a1, int a2, int a3)
{
  return GreGetRegionData(a1, a2, a3);
}
