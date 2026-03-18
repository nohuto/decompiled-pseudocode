/*
 * XREFs of ?DxgkCddGetCurrentDxgProcess@@YAPEAXXZ @ 0x1C01E9FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *__fastcall DxgkCddGetCurrentDxgProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return DXGPROCESS::GetCurrent(a1, a2, a3, a4);
}
