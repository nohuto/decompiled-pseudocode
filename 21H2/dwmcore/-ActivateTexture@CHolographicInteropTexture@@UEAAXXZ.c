/*
 * XREFs of ?ActivateTexture@CHolographicInteropTexture@@UEAAXXZ @ 0x1800FC7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::ActivateTexture(CHolographicInteropTexture *this)
{
  *((_BYTE *)this + 152) = 1;
  *((_BYTE *)this + 160) = 1;
}
