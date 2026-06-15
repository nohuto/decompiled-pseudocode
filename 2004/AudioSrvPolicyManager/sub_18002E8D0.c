/*
 * XREFs of sub_18002E8D0 @ 0x18002E8D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_18002EE80 @ 0x18002EE80 (sub_18002EE80.c)
 *     sub_18002F23C @ 0x18002F23C (sub_18002F23C.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__m128 __fastcall sub_18002E8D0(__int64 a1, _WORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int128 v7; // xmm6
  _QWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v4 = a1 + 56;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  sub_18000CD64(v9, a2);
  v5 = sub_18002EE80(v4, v9);
  sub_180009CF0((__int64)v9);
  if ( v5 )
  {
    sub_18000CD64(v9, a2);
    v6 = sub_18002F23C(v4, v9);
    sub_180009CF0((__int64)v9);
    if ( *(_BYTE *)(*(_QWORD *)v6 + 8LL) )
      v7 = 0LL;
    else
      v7 = *(unsigned int *)(*(_QWORD *)v6 + 4LL);
  }
  else
  {
    v7 = 0x3F800000u;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (__m128)v7;
}
