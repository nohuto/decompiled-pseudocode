/*
 * XREFs of sub_18006E004 @ 0x18006E004
 * Callers:
 *     sub_18006E3C8 @ 0x18006E3C8 (sub_18006E3C8.c)
 *     sub_18006F550 @ 0x18006F550 (sub_18006F550.c)
 *     sub_1800701C0 @ 0x1800701C0 (sub_1800701C0.c)
 * Callees:
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 */

__int64 __fastcall sub_18006E004(_QWORD *P)
{
  __int64 v1; // rdi
  char v3; // al

  v1 = P[4];
  TpSetWait(P[6], 0LL, 0LL);
  TpWaitForWait(P[6], 1LL);
  RtlAcquireSRWLockExclusive(v1 + 72);
  *(_DWORD *)(v1 + 80) = GetCurrentThreadId();
  v3 = *((_BYTE *)P + 170);
  if ( (v3 & 2) != 0 )
  {
    *((_BYTE *)P + 170) = v3 & 0xFD;
    sub_18006E348(P);
  }
  *(_DWORD *)(v1 + 80) = 0;
  return RtlReleaseSRWLockExclusive(v1 + 72);
}
