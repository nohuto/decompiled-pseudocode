/*
 * XREFs of ?IsHardwareProtected@CD3DTexture@@UEBA_NXZ @ 0x1802637A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD3DTexture::IsHardwareProtected(CD3DTexture *this)
{
  return (*((_DWORD *)this + 34) & 0x80000) != 0;
}
