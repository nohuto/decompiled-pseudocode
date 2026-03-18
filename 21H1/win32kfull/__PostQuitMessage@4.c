/*
 * XREFs of __PostQuitMessage@4 @ 0xABF96
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _IPostQuitMessage@8 @ 0xABFB2 (_IPostQuitMessage@8.c)
 */

int __stdcall _PostQuitMessage(int a1)
{
  return IPostQuitMessage(_gptiCurrent, a1);
}
