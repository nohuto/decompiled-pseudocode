/*
 * XREFs of sub_1800F99D0 @ 0x1800F99D0
 * Callers:
 *     sub_1800FA9C8 @ 0x1800FA9C8 (sub_1800FA9C8.c)
 * Callees:
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F99D0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)a1 = off_18014AD60;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  v6 = (__int64 *)(a1 + 24);
  *v6 = *a2;
  sub_180047458(v6);
  *(_QWORD *)(a1 + 32) = *a3;
  sub_180047458((__int64 *)(a1 + 32));
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return a1;
}
