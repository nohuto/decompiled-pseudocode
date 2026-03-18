/*
 * XREFs of ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x1800BE820
 * Callers:
 *     ?IsHardwareProtected@CDeviceTextureTarget@@$4PPPPPPPM@NI@EBA_NXZ @ 0x1800EF8D0 (-IsHardwareProtected@CDeviceTextureTarget@@$4PPPPPPPM@NI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsHardwareProtected(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 184) || (*((_DWORD *)this + 24) & 0x80000) != 0;
}
