/*
 * XREFs of sub_180071600 @ 0x180071600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_180071600(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  bool v4; // di
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v4 = 0;
  v6 = 0LL;
  sub_1800CB144(&v6);
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, &v6) >= 0 )
    v4 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 80LL))(*(_QWORD *)(a1 + 8), v6) == 0;
  sub_18000F708(&v6);
  return v4;
}
