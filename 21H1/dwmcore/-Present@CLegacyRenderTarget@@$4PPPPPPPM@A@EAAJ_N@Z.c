/*
 * XREFs of ?Present@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800EC820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::Present(__int64 a1, char a2)
{
  return CLegacyRenderTarget::Present((CLegacyRenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
