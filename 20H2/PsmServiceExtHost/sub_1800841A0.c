/*
 * XREFs of sub_1800841A0 @ 0x1800841A0
 * Callers:
 *     sub_1800838A0 @ 0x1800838A0 (sub_1800838A0.c)
 *     sub_180083B4C @ 0x180083B4C (sub_180083B4C.c)
 *     sub_180083D0C @ 0x180083D0C (sub_180083D0C.c)
 *     sub_18008431C @ 0x18008431C (sub_18008431C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800841A0(__int64 a1)
{
  unsigned __int64 v2; // rdi
  char v3; // al
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 48;
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v2);
    *(_DWORD *)(v2 + 8) = GetCurrentThreadId();
    v3 = *(_BYTE *)(a1 + 53);
    if ( (v3 & 1) == 0 )
      break;
    v5 = *(_BYTE *)(a1 + 53);
    *(_DWORD *)(v2 + 8) = 0;
    RtlReleaseSRWLockExclusive(v2);
    RtlWaitOnAddress(a1 + 53, &v5, 1LL);
  }
  *(_BYTE *)(a1 + 53) = v3 | 1;
  *(_DWORD *)(v2 + 8) = 0;
  return RtlReleaseSRWLockExclusive(v2);
}
