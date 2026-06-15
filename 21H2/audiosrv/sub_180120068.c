/*
 * XREFs of sub_180120068 @ 0x180120068
 * Callers:
 *     sub_1801203F8 @ 0x1801203F8 (sub_1801203F8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180120068(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = off_180155DD8;
  *(_QWORD *)(a1 + 8) = off_180155D88;
  *(_QWORD *)(a1 + 16) = off_180155D48;
  *(_QWORD *)(a1 + 24) = off_180155D28;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E5D8 + 8LL))(qword_18019E5D8);
  return a1;
}
