/*
 * XREFs of ?IsDisplayTarget@CDeviceTextureTarget@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F2850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsDisplayTarget(__int64 a1)
{
  return CDeviceTextureTarget::IsDisplayTarget((CDeviceTextureTarget *)(a1 - *(int *)(a1 - 4)));
}
