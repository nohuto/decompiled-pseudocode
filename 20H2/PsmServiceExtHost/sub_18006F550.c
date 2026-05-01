/*
 * XREFs of sub_18006F550 @ 0x18006F550
 * Callers:
 *     sub_18006F434 @ 0x18006F434 (sub_18006F434.c)
 * Callees:
 *     sub_18006E004 @ 0x18006E004 (sub_18006E004.c)
 *     sub_18006E160 @ 0x18006E160 (sub_18006E160.c)
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 */

char __fastcall sub_18006F550(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  _OWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx

  v1 = a1 - 8;
  v2 = *(_QWORD *)(a1 - 8 + 32);
  RtlAcquireSRWLockExclusive(v2 + 72);
  *(_DWORD *)(v2 + 80) = GetCurrentThreadId();
  if ( (*(_BYTE *)(v1 + 144) & 1) != 0 )
  {
    v3 = (_OWORD *)(v1 + 56);
    v4 = *(_QWORD *)(v1 + 56);
    if ( *(_QWORD *)(v4 + 8) != v1 + 56 || (v5 = *(_QWORD **)(v1 + 64), (_OWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
    sub_18006E348((volatile signed __int64 *)v1);
    if ( (*(_BYTE *)(v1 + 170) & 8) != 0 )
      sub_18006E160(v1, 0LL);
  }
  *(_BYTE *)(v1 + 170) &= ~1u;
  *(_DWORD *)(v2 + 80) = 0;
  RtlReleaseSRWLockExclusive(v2 + 72);
  sub_18006E004((_QWORD *)v1);
  return sub_18006E348((volatile signed __int64 *)v1);
}
