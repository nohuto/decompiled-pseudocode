/*
 * XREFs of sub_1800EA960 @ 0x1800EA960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800EA960(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, int a5, int a6)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  v6 = *(__int64 **)(a1 + 40);
  v7 = *v6;
  v9 = *a4;
  return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int128 *, int, int))(v7 + 64))(
           v6,
           a2,
           a3,
           &v9,
           a5,
           a6);
}
