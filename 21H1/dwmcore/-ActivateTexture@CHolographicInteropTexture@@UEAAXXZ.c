/*
 * XREFs of ?ActivateTexture@CHolographicInteropTexture@@UEAAXXZ @ 0x1800DDD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::ActivateTexture(CHolographicInteropTexture *this)
{
  *((_BYTE *)this + 144) = 1;
  *((_BYTE *)this + 152) = 1;
}
