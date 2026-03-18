/*
 * XREFs of _W32kCddIsNullBrush@4 @ 0x9A35C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall W32kCddIsNullBrush(int a1)
{
  return *(_DWORD *)(a1 + 76) & 0x100;
}
