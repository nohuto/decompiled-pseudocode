/*
 * XREFs of sub_180015290 @ 0x180015290
 * Callers:
 *     sub_1800151B8 @ 0x1800151B8 (sub_1800151B8.c)
 *     sub_18001D33C @ 0x18001D33C (sub_18001D33C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180015290(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreNode::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_18013A5E0;
  if ( qword_180218548 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180218548 + 8LL))(qword_180218548);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = &off_18013A640;
  *(_QWORD *)(a1 + 16) = off_18013A6A0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return a1;
}
