/*
 * XREFs of GreIncNonRBLockCount @ 0x1C0032D30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 */

__int64 GreIncNonRBLockCount()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
    ++*(_DWORD *)(result + 108);
  return result;
}
