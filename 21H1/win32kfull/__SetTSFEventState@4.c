/*
 * XREFs of __SetTSFEventState@4 @ 0xAED5A
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _SetTSFEventState(int a1)
{
  *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 244) + 16) = a1;
  return 1;
}
