/*
 * XREFs of sub_180065238 @ 0x180065238
 * Callers:
 *     sub_1800651D0 @ 0x1800651D0 (sub_1800651D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180065238(__int64 a1)
{
  *(_DWORD *)(a1 + 20) = 1;
  *(_QWORD *)a1 = off_180149338;
  *(_QWORD *)(a1 + 8) = off_180149300;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = off_1801491C0;
  *(_QWORD *)(a1 + 8) = off_180149188;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 24), 0, 0);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  return a1;
}
