/*
 * XREFs of sub_1800E56A8 @ 0x1800E56A8
 * Callers:
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800E56A8(int (__fastcall ***a1)(_QWORD, void *, __int64 *))
{
  char v1; // bl
  int v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( !a1 )
    return 0;
  v3 = 0;
  v4 = 0LL;
  if ( (**a1)(a1, &unk_18015BE10, &v4) < 0
    || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 24LL))(v4, &v3) < 0
    || (v1 = 1, (v3 & 1) == 0) )
  {
    v1 = 0;
  }
  sub_18000F708(&v4);
  return v1;
}
