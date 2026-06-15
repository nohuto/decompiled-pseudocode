/*
 * XREFs of sub_18000ACE4 @ 0x18000ACE4
 * Callers:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_18000D6FC @ 0x18000D6FC (sub_18000D6FC.c)
 *     sub_18000F6B8 @ 0x18000F6B8 (sub_18000F6B8.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall sub_18000ACE4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        void (__fastcall ***a5)(_QWORD, void *, _QWORD *))
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rsi
  _QWORD v12[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v13[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+48h] [rbp-60h] BYREF
  __int64 v15; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+58h] [rbp-50h]
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int64 (__fastcall ***v18)(); // [rsp+80h] [rbp-28h]

  v6 = qword_18004FE80;
  if ( *(_DWORD *)(qword_18004FE80 + 488) )
    return 0LL;
  if ( a4 == 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 176));
    v12[0] = v6 + 176;
    sub_18000CD64(&v14, v8);
    sub_18000D6FC(v6 + 216, v13, &v14);
    ++*(_DWORD *)(v13[0] + 48);
    sub_180009CF0((__int64)&v14);
    if ( v6 != -176 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 176));
    if ( *(_DWORD *)(v6 + 448) == 3 )
      return 0LL;
    v12[0] = 0LL;
    (**a5)(a5, &unk_180042A90, v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v13[0] = 0LL;
    v9 = v12[0];
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 8LL))(v12[0]);
    v14 = off_18003EC70;
    v15 = a2;
    v16 = v6;
    v17 = v9;
    v18 = &v14;
    sub_18000F6B8(v6 + 280, &v14);
  }
  else
  {
    if ( a4 )
      return 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 176));
    v13[0] = v6 + 176;
    sub_18000CD64(&v14, v10);
    sub_18000D6FC(v6 + 216, v12, &v14);
    --*(_DWORD *)(v12[0] + 48LL);
    sub_180009CF0((__int64)&v14);
    if ( v6 != -176 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 176));
    if ( *(_DWORD *)(v6 + 448) == 3 )
      return 0LL;
    v12[0] = 0LL;
    (**a5)(a5, &unk_180042A90, v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v13[0] = 0LL;
    v11 = v12[0];
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 8LL))(v12[0]);
    v14 = off_18003EC40;
    v15 = a2;
    v16 = v6;
    v17 = v11;
    v18 = &v14;
    sub_18000F6B8(v6 + 280, &v14);
  }
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return 0LL;
}
