/*
 * XREFs of ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x1800C4BF0
 * Callers:
 *     ?IsHardwareProtected@CDeviceTextureTarget@@$4PPPPPPPM@NI@EBA_NXZ @ 0x1800F2860 (-IsHardwareProtected@CDeviceTextureTarget@@$4PPPPPPPM@NI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsHardwareProtected(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 184) || (*((_DWORD *)this + 24) & 0x80000) != 0;
}
