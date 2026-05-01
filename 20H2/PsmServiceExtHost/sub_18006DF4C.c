/*
 * XREFs of sub_18006DF4C @ 0x18006DF4C
 * Callers:
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 * Callees:
 *     sub_18003743C @ 0x18003743C (sub_18003743C.c)
 *     sub_18006D9C8 @ 0x18006D9C8 (sub_18006D9C8.c)
 */

DWORD __fastcall sub_18006DF4C(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  DWORD result; // eax

  *(_DWORD *)(a1 + 80) = 0;
  RtlReleaseSRWLockExclusive(a1 + 72);
  while ( *a2 != a2 )
  {
    v4 = sub_18003743C(a2);
    sub_18006D9C8(a1, (__int64)(v4 - 11));
    *((_BYTE *)v4 + 83) &= ~1u;
    v5 = 16LL * *((int *)v4 + 4) + a1 + 88;
    v6 = *(_QWORD **)(v5 + 8);
    if ( *v6 != v5 )
      __fastfail(3u);
    *v4 = v5;
    v4[1] = v6;
    *v6 = v4;
    *(_QWORD *)(v5 + 8) = v4;
  }
  RtlAcquireSRWLockExclusive(a1 + 72);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 80) = result;
  return result;
}
