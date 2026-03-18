/*
 * XREFs of __ForceEnableNumpadTranslation@4 @ 0xAEEE6
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _ForceEnableNumpadTranslation(int a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(_gptiCurrent + 688);
  *(_DWORD *)(_gptiCurrent + 688) = v1 ^ (v1 ^ (a1 << 23)) & 0x800000;
  return (v1 >> 23) & 1;
}
