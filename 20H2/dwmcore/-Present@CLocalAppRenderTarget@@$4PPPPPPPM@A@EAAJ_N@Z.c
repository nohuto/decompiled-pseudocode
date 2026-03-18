/*
 * XREFs of ?Present@CLocalAppRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800EFCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLocalAppRenderTarget::Present(__int64 a1, bool a2)
{
  return CLocalAppRenderTarget::Present((CLocalAppRenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
