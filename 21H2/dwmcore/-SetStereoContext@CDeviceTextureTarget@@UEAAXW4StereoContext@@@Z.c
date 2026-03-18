/*
 * XREFs of ?SetStereoContext@CDeviceTextureTarget@@UEAAXW4StereoContext@@@Z @ 0x1800FC560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetStereoContext(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 24) = a2;
}
