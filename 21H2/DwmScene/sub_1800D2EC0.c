/*
 * XREFs of sub_1800D2EC0 @ 0x1800D2EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     sub_180068040 @ 0x180068040 (sub_180068040.c)
 *     sub_1800693F8 @ 0x1800693F8 (sub_1800693F8.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800D2EC0(_QWORD *a1)
{
  __int64 v2; // rax
  char result; // al
  __int64 v4; // rax
  __int128 i; // rdi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  sub_180068040((__int64)a1);
  v2 = a1[14];
  if ( v2 )
    LODWORD(v2) = *(_DWORD *)(v2 + 24);
  if ( (_DWORD)v2 != 2 )
    sub_1800693F8(a1 + 15);
  result = sub_180067F88((__int64)a1, 1);
  if ( result )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    v6 = 0LL;
    v7 = 0LL;
    sub_18007E228(v4, &v6);
    for ( i = v6; (_QWORD)i != *((_QWORD *)&i + 1); *(_QWORD *)&i = i + 16 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, i);
    return sub_180012A18((__int64 *)&v6);
  }
  return result;
}
