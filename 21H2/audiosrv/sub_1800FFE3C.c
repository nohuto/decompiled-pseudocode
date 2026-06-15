/*
 * XREFs of sub_1800FFE3C @ 0x1800FFE3C
 * Callers:
 *     sub_1800FEC48 @ 0x1800FEC48 (sub_1800FEC48.c)
 *     sub_1800FFDC0 @ 0x1800FFDC0 (sub_1800FFDC0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800FFE3C(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2)
{
  RTL_SRWLOCK *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    ReleaseSRWLockExclusive(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
