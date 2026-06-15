/*
 * XREFs of sub_1800037E8 @ 0x1800037E8
 * Callers:
 *     sub_18002A54C @ 0x18002A54C (sub_18002A54C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800037E8(__int64 a1)
{
  *(_QWORD *)(a1 + 40) = 1LL;
  *(_QWORD *)a1 = off_1801463D8;
  *(_QWORD *)(a1 + 8) = off_180146320;
  *(_QWORD *)(a1 + 16) = off_180146398;
  *(_QWORD *)(a1 + 24) = off_180146378;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = off_180146340;
  *(_QWORD *)(a1 + 8) = off_180146320;
  *(_QWORD *)(a1 + 16) = off_1801462E0;
  *(_QWORD *)(a1 + 24) = off_1801462C0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 72), 0, 0);
  *(_BYTE *)(a1 + 112) = 0;
  return a1;
}
