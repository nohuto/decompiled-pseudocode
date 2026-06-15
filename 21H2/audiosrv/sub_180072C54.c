/*
 * XREFs of sub_180072C54 @ 0x180072C54
 * Callers:
 *     sub_1800728BC @ 0x1800728BC (sub_1800728BC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180072C54(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)a1 = off_180154C70;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_1801482B0;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = &off_18014B250;
  return a1;
}
