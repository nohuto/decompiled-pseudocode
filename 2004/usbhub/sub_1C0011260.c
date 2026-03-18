/*
 * XREFs of sub_1C0011260 @ 0x1C0011260
 * Callers:
 *     sub_1C00021C0 @ 0x1C00021C0 (sub_1C00021C0.c)
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 *     sub_1C002F27C @ 0x1C002F27C (sub_1C002F27C.c)
 *     sub_1C002F3E0 @ 0x1C002F3E0 (sub_1C002F3E0.c)
 *     sub_1C003B69C @ 0x1C003B69C (sub_1C003B69C.c)
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 *     sub_1C00430F0 @ 0x1C00430F0 (sub_1C00430F0.c)
 *     sub_1C0043450 @ 0x1C0043450 (sub_1C0043450.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 *     sub_1C0059A30 @ 0x1C0059A30 (sub_1C0059A30.c)
 *     sub_1C0059DA0 @ 0x1C0059DA0 (sub_1C0059DA0.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00125E0 @ 0x1C00125E0 (sub_1C00125E0.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

void __fastcall sub_1C0011260(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx
  KIRQL v9; // r10
  __int64 v10; // rcx
  _QWORD *v11; // rax

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  if ( a2 )
  {
    if ( dword_1C006B650 )
      sub_1C00125E0(&stru_1C0061DE0, 0LL);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 3728));
    v5 = *(int *)(a2 + 4);
    v6 = *(_DWORD *)(a2 + 4);
    if ( (dword_1C006B268 & 0x2000) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 827618148;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = v5;
        v6 = *(_DWORD *)(a2 + 4);
      }
    }
    if ( v6 == 1 )
    {
      sub_1C000FD80(a1, 0x2000, 1685279794, a2, 1LL);
      v10 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v10 + 8) != a2 + 56 || (v11 = *(_QWORD **)(a2 + 64), *v11 != a2 + 56) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
    }
    else
    {
      sub_1C000FD80(a1, 0x2000, 1685279795, a2, v6);
    }
    *(_DWORD *)(a2 + 4) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 3728), v9);
  }
}
