/*
 * XREFs of sub_1801435E0 @ 0x1801435E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801435E0(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *(_QWORD *)(a1 + 32);
  v4 = xmmword_180178F08;
  v5 = 4;
  v6 = 2;
  return (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *, int, __int64 *))(*(_QWORD *)v2 + 24LL))(
           v2,
           &v4,
           24LL,
           &v8,
           4,
           &v7);
}
