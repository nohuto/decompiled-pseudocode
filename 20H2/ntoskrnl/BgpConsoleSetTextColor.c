/*
 * XREFs of BgpConsoleSetTextColor @ 0x1409FA090
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleSetTextColor(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  BgpFwAcquireLock();
  v4 = qword_140CDAFD8;
  v5 = 0;
  if ( qword_140CDAFD8 )
  {
    if ( a1 )
      *(_DWORD *)(qword_140CDAFD8 + 12) = *a1;
    if ( a2 )
      *(_DWORD *)(v4 + 16) = *a2;
  }
  else
  {
    v5 = -1073741823;
  }
  BgpFwReleaseLock();
  return v5;
}
