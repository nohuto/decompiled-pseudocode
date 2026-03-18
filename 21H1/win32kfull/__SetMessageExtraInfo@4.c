/*
 * XREFs of __SetMessageExtraInfo@4 @ 0xB53EA
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _SetMessageExtraInfo(int a1)
{
  int v1; // edx
  int result; // eax

  v1 = *(_DWORD *)(_gptiCurrent + 236);
  result = *(_DWORD *)(v1 + 300);
  *(_DWORD *)(v1 + 300) = a1;
  return result;
}
