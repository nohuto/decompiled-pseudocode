/*
 * XREFs of ?Present@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800F5A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteAppRenderTarget::Present(__int64 a1, bool a2)
{
  return CRemoteAppRenderTarget::Present((CRemoteAppRenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
