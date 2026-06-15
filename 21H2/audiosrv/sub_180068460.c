/*
 * XREFs of sub_180068460 @ 0x180068460
 * Callers:
 *     sub_1800556DC @ 0x1800556DC (sub_1800556DC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068460(__int64 a1)
{
  *(_QWORD *)(a1 + 32) = 1LL;
  *(_QWORD *)a1 = off_180149D48;
  *(_QWORD *)(a1 + 8) = off_180149D10;
  *(_QWORD *)(a1 + 16) = off_180149C80;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = off_180149CD8;
  *(_QWORD *)(a1 + 8) = off_180149CA0;
  *(_QWORD *)(a1 + 16) = off_180149C80;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 40), 0, 0);
  return a1;
}
