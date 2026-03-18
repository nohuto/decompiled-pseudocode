/*
 * XREFs of LeaveRenderBlock @ 0x1C0051990
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 */

__int64 LeaveRenderBlock()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
    --*(_DWORD *)(result + 332);
  return result;
}
