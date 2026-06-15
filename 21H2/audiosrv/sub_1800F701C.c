/*
 * XREFs of sub_1800F701C @ 0x1800F701C
 * Callers:
 *     sub_1800F7140 @ 0x1800F7140 (sub_1800F7140.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180072014 @ 0x180072014 (sub_180072014.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DA7C4 @ 0x1800DA7C4 (sub_1800DA7C4.c)
 */

__int64 __fastcall sub_1800F701C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = &off_18014ABE8;
  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    v3 = 0LL;
    sub_1800DA7C4(a1, (__int64)&v3);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 80LL))(v3, *(_QWORD *)(a1 + 24), 0LL);
    *(_DWORD *)(a1 + 32) = 0;
    sub_180072014(*(_QWORD *)(a1 + 16));
    sub_18000F708(&v3);
  }
  sub_18000F708((__int64 *)(a1 + 24));
  result = sub_18000F708((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
