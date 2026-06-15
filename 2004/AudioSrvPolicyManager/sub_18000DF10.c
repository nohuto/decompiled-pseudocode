/*
 * XREFs of sub_18000DF10 @ 0x18000DF10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_18000B3E0 @ 0x18000B3E0 (sub_18000B3E0.c)
 *     sub_18000BA80 @ 0x18000BA80 (sub_18000BA80.c)
 *     sub_18000BF18 @ 0x18000BF18 (sub_18000BF18.c)
 *     sub_18000C1F4 @ 0x18000C1F4 (sub_18000C1F4.c)
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_18000D6FC @ 0x18000D6FC (sub_18000D6FC.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18000DF10(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _WORD *v3; // r14
  int v4; // eax
  void *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rbx
  const wchar_t *v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbx
  const wchar_t *v13; // rax
  int v14; // eax
  _QWORD v15[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v15[2] = v2;
  v3 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8));
  v4 = sub_18000C1F4(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), (__int64)v3);
  v5 = retaddr;
  if ( v4 >= 0 )
  {
    v4 = sub_18000B3E0(*(_QWORD *)(a1 + 16), (__int64)v3, 0LL);
    v5 = retaddr;
    if ( v4 >= 0 )
      goto LABEL_6;
    v6 = 120LL;
  }
  else
  {
    v6 = 117LL;
  }
  sub_18000F8F4(
    v5,
    v6,
    "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    (unsigned int)v4);
LABEL_6:
  sub_18000CD64(v16, v3);
  v7 = *(_QWORD *)(a1 + 8);
  sub_18000D6FC((_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), (__int64)v15, (char *)v16);
  v8 = v15[0];
  v9 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
  v10 = sub_18000BA80(*(_QWORD *)(a1 + 16), v9, (__int64)v3, *(_DWORD *)(v8 + 48));
  if ( v10 < 0 )
    sub_18000F8F4(
      retaddr,
      126LL,
      "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (unsigned int)v10);
  sub_180009CF0((__int64)v16);
  sub_18000CD64(v16, v3);
  v11 = *(_QWORD *)(a1 + 8);
  sub_18000D6FC((_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), (__int64)v15, (char *)v16);
  v12 = v15[0];
  v13 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
  v14 = sub_18000BF18(*(_QWORD *)(a1 + 16), v13, *(_DWORD *)(v12 + 48));
  if ( v14 < 0 )
    sub_18000F8F4(
      retaddr,
      129LL,
      "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (unsigned int)v14);
  sub_180009CF0((__int64)v16);
  if ( v2 )
    LeaveCriticalSection(v2);
}
