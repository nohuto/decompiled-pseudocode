/*
 * XREFs of ?DxgkCddGetCurrentDxgProcess@@YAPEAXXZ @ 0x1C015A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *__fastcall DxgkCddGetCurrentDxgProcess(__int64 a1, __int64 a2)
{
  return DXGPROCESS::GetCurrent(a1, a2);
}
