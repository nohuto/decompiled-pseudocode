/*
 * XREFs of __CsDdeUninitialize@4 @ 0x195136
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _xxxDestroyThreadDDEObject@8 @ 0xD2D78 (_xxxDestroyThreadDDEObject@8.c)
 */

int __stdcall _CsDdeUninitialize(int a1)
{
  ULONG *v1; // eax

  v1 = (ULONG *)HMValidateHandleNoRip(a1, 9);
  if ( v1 )
    xxxDestroyThreadDDEObject(_gptiCurrent, v1);
  return 1;
}
