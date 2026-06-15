/*
 * XREFs of sub_180143224 @ 0x180143224
 * Callers:
 *     sub_180142F80 @ 0x180142F80 (sub_180142F80.c)
 *     sub_1801430C0 @ 0x1801430C0 (sub_1801430C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180143224(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *(_QWORD *)(a1 + 32);
  v5 = 2;
  v6 = 2;
  v4 = xmmword_180178F08;
  return (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *, int, __int64 *))(*(_QWORD *)v2 + 24LL))(
           v2,
           &v4,
           24LL,
           &v8,
           8,
           &v7);
}
