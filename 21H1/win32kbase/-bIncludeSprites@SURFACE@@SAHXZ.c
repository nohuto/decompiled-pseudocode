/*
 * XREFs of ?bIncludeSprites@SURFACE@@SAHXZ @ 0x1C004A970
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 */

bool SURFACE::bIncludeSprites(void)
{
  __int64 ThreadWin32Thread; // rcx
  bool result; // al

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  result = 0;
  if ( ThreadWin32Thread )
    return -__CFSHR__(*(_DWORD *)(ThreadWin32Thread + 328), 2) == 1;
  return result;
}
