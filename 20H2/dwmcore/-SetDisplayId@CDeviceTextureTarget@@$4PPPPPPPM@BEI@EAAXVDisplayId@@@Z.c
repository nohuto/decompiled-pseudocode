/*
 * XREFs of ?SetDisplayId@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXVDisplayId@@@Z @ 0x1800F2590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetDisplayId(__int64 a1, int a2)
{
  CD2DBitmap::SetDisplayId(a1 - *(int *)(a1 - 4) - 328, a2);
}
