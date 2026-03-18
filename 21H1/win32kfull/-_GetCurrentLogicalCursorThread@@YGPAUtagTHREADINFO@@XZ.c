/*
 * XREFs of ?_GetCurrentLogicalCursorThread@@YGPAUtagTHREADINFO@@XZ @ 0xAC8D4
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

struct tagTHREADINFO *__stdcall _GetCurrentLogicalCursorThread()
{
  PKTHREAD CurrentThread; // eax
  struct tagTHREADINFO *result; // eax

  CurrentThread = KeGetCurrentThread();
  result = (struct tagTHREADINFO *)W32GetThreadWin32Thread(CurrentThread);
  if ( (*((_DWORD *)result + 172) & 0x8000000) != 0 )
    return (struct tagTHREADINFO *)*((_DWORD *)result + 212);
  return result;
}
