/*
 * XREFs of BgpConsoleGetCursorState @ 0x1409F3CE0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetCursorState(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  v6 = qword_140CDB058;
  v7 = 0;
  if ( qword_140CDB058 )
  {
    *a1 = *(_DWORD *)(qword_140CDB058 + 68);
    *a2 = *(_DWORD *)(v6 + 72);
    *a3 = *(_DWORD *)(v6 + 76);
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock();
  return v7;
}
