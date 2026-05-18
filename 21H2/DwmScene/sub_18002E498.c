/*
 * XREFs of sub_18002E498 @ 0x18002E498
 * Callers:
 *     sub_18002E570 @ 0x18002E570 (sub_18002E570.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002E498(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = a1[215];
  if ( v2 )
  {
    a1[215] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[214];
  if ( v3 )
  {
    a1[214] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = a1[213];
  if ( v4 )
  {
    a1[213] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[212];
  if ( v5 )
  {
    a1[212] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_18002E35C(a1);
}
