/*
 * XREFs of sub_180072BD8 @ 0x180072BD8
 * Callers:
 *     sub_180072864 @ 0x180072864 (sub_180072864.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180072BD8(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)a1 = off_180154C70;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180148288;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = &off_18014B1F0;
  return a1;
}
