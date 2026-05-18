/*
 * XREFs of sub_180015370 @ 0x180015370
 * Callers:
 *     sub_180015298 @ 0x180015298 (sub_180015298.c)
 *     sub_180022B3C @ 0x180022B3C (sub_180022B3C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180015370(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreNode::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_1801406E0;
  if ( qword_18021F678 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18021F678 + 8LL))(qword_18021F678);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = &off_180140740;
  *(_QWORD *)(a1 + 16) = off_1801407A0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return a1;
}
