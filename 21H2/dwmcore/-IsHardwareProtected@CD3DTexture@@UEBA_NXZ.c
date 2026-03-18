/*
 * XREFs of ?IsHardwareProtected@CD3DTexture@@UEBA_NXZ @ 0x1802A6000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD3DTexture::IsHardwareProtected(CD3DTexture *this)
{
  return (*((_DWORD *)this + 36) & 0x80000) != 0;
}
