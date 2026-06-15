/*
 * XREFs of sub_18011FFB4 @ 0x18011FFB4
 * Callers:
 *     sub_1801202C4 @ 0x1801202C4 (sub_1801202C4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011FFB4(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_180155E20;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 24) = off_180155E90;
  *(_QWORD *)(a1 + 32) = off_180155E40;
  *(_QWORD *)(a1 + 40) = off_180155D68;
  *(_QWORD *)(a1 + 48) = off_180155D08;
  *(_QWORD *)(a1 + 56) = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E5D8 + 8LL))(qword_18019E5D8);
  return a1;
}
