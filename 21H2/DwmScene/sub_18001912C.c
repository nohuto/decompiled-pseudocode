/*
 * XREFs of sub_18001912C @ 0x18001912C
 * Callers:
 *     sub_180018334 @ 0x180018334 (sub_180018334.c)
 * Callees:
 *     sub_1800B7B28 @ 0x1800B7B28 (sub_1800B7B28.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18001912C(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreWorld::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180140F70;
  if ( qword_18021F678 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18021F678 + 8LL))(qword_18021F678);
  *(_QWORD *)a1 = &off_180140FB8;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_1800B7B28(a1 + 48);
  return a1;
}
