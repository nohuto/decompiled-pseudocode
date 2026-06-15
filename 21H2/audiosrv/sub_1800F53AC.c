/*
 * XREFs of sub_1800F53AC @ 0x1800F53AC
 * Callers:
 *     sub_1800F54D0 @ 0x1800F54D0 (sub_1800F54D0.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800F2D78 @ 0x1800F2D78 (sub_1800F2D78.c)
 *     sub_1800F4D3C @ 0x1800F4D3C (sub_1800F4D3C.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800F53AC(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  LPCRITICAL_SECTION v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]
  void *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 232);
  while ( 1 )
  {
    v3 = 0LL;
    sub_180066980((__int64)&lpCriticalSection, v2);
    v4 = *(_QWORD *)(a1 + 288);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 272);
      if ( !v5 )
        sub_1800B8610(-2147467259);
      v3 = *(_QWORD *)(v5 + 16);
    }
    if ( v7 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v7 = 0;
    }
    if ( !v4 )
      break;
    sub_1800F2D78(a1, *(_DWORD *)v3, (LPCRITICAL_SECTION **)(v3 + 8));
    sub_180066980((__int64)&v8, v2);
    sub_1800F4D3C((__int64 *)(a1 + 272), (__int64 *)&v10);
    if ( v10 )
      sub_18006A148(v10);
    v10 = 0LL;
    if ( v9 )
    {
      LeaveCriticalSection(v8);
      v9 = 0;
    }
  }
}
