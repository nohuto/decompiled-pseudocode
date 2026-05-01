/*
 * XREFs of sub_1800673E8 @ 0x1800673E8
 * Callers:
 *     sub_1800739C4 @ 0x1800739C4 (sub_1800739C4.c)
 * Callees:
 *     sub_18000334C @ 0x18000334C (sub_18000334C.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800673E8(__int64 a1, int a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rbx
  _DWORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = (_QWORD *)(a1 + 88);
  v4 = *(_QWORD **)(a1 + 88);
  while ( v2 != v4 )
  {
    v5 = (_DWORD *)v4[4];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    v4 = (_QWORD *)*v4;
    if ( v5[2] == a2 )
      sub_18000334C((__int64)v5);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v11 = 0;
    v9 = &v7;
    v7 = a2;
    v10 = 4;
    sub_18002E278(v6, (unsigned __int8 *)dword_18009AE4A, 0LL, 0LL, 3u, &v8);
  }
}
