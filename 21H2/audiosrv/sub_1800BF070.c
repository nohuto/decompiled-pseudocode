/*
 * XREFs of sub_1800BF070 @ 0x1800BF070
 * Callers:
 *     sub_1800BF120 @ 0x1800BF120 (sub_1800BF120.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800BF070(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)a1 = &off_180148988;
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 288));
  v2 = *(_QWORD *)(a1 + 256);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(_QWORD *)(a1 + 248);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  sub_1800BEF90(a1);
}
