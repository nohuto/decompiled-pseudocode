/*
 * XREFs of ?ShowFocus@CDragVisual@@UEAAXXZ @ 0x180403890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDragVisual::ShowFocus(HWND *this)
{
  PostMessageW(this[16], 0x402u, 0LL, 0LL);
}
