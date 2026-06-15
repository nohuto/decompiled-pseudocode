/*
 * XREFs of sub_1801360D8 @ 0x1801360D8
 * Callers:
 *     sub_180072EE8 @ 0x180072EE8 (sub_180072EE8.c)
 *     sub_180073104 @ 0x180073104 (sub_180073104.c)
 *     sub_180073300 @ 0x180073300 (sub_180073300.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1801360D8(__int64 a1, __int64 a2)
{
  char v3; // bl
  __int64 v5; // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+20h] BYREF
  char v7; // [rsp+58h] [rbp+28h] BYREF
  char v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v6 = a1;
  v5 = a2;
  v3 = 0;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = 0LL;
  LOBYTE(v6) = 0;
  v7 = 0;
  v8 = 0;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v6);
  sub_1800461B8(&v9);
  if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))a2)(a2, &unk_180173858, &v9) >= 0 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 88LL))(v9, &v7);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 80LL))(v9, &v8);
  }
  if ( !(_BYTE)v6 && !v7 && !v8 )
    v3 = 1;
  sub_1800461B8(&v9);
  sub_1800461B8(&v5);
  return v3;
}
