/*
 * XREFs of sub_18000DC80 @ 0x18000DC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_18000B3E0 @ 0x18000B3E0 (sub_18000B3E0.c)
 *     sub_18000BD50 @ 0x18000BD50 (sub_18000BD50.c)
 *     sub_18000C088 @ 0x18000C088 (sub_18000C088.c)
 *     sub_18000C694 @ 0x18000C694 (sub_18000C694.c)
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_18000D6FC @ 0x18000D6FC (sub_18000D6FC.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18000DC80(__int64 a1)
{
  _WORD *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 (__fastcall ***v4)(); // rdx
  int v5; // ebx
  const wchar_t *v6; // rax
  int v7; // eax
  const wchar_t *v8; // rax
  int v9; // eax
  __int128 v10; // [rsp+28h] [rbp-29h] BYREF
  __int64 v11; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-11h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp-9h]
  __int64 (__fastcall **v14)(); // [rsp+58h] [rbp+7h] BYREF
  __int128 v15; // [rsp+60h] [rbp+Fh]
  __int64 (__fastcall ***v16)(); // [rsp+90h] [rbp+3Fh]
  void *retaddr; // [rsp+B0h] [rbp+5Fh]

  Sleep(0x1F4u);
  v2 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8));
  v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v13 = v3;
  v11 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&v10 = &v11;
  *((_QWORD *)&v10 + 1) = v12;
  v14 = off_18003EB38;
  v15 = v10;
  v16 = &v14;
  sub_18000C694(*(_QWORD *)(a1 + 16), (__int64)v2, (__int64)&v14);
  if ( v16 )
  {
    v4 = &v14;
    LOBYTE(v4) = v16 != &v14;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v16)[4])(v16, v4);
  }
  sub_18000B3E0(*(_QWORD *)(a1 + 16), (__int64)v2, (__int64)v12);
  sub_18000CD64(&v14, v2);
  sub_18000D6FC((_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), (__int64)&v10, (char *)&v14);
  v5 = *(_DWORD *)(v10 + 48);
  sub_180009CF0((__int64)&v14);
  if ( !v5 )
  {
    v6 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8));
    v7 = sub_18000BD50(*(_QWORD *)(a1 + 16), v6);
    if ( v7 < 0 )
      sub_18000F8F4(
        retaddr,
        190LL,
        "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (unsigned int)v7);
  }
  v8 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8));
  v9 = sub_18000C088(*(_QWORD *)(a1 + 16), v8);
  if ( v9 < 0 )
    sub_18000F8F4(
      retaddr,
      196LL,
      "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (unsigned int)v9);
  if ( v3 )
    LeaveCriticalSection(v3);
}
