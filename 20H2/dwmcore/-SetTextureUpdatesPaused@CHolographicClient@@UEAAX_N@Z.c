/*
 * XREFs of ?SetTextureUpdatesPaused@CHolographicClient@@UEAAX_N@Z @ 0x1800DF500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicClient::SetTextureUpdatesPaused(CHolographicClient *this, char a2)
{
  *((_BYTE *)this + 200) = a2;
}
