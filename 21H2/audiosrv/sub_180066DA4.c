/*
 * XREFs of sub_180066DA4 @ 0x180066DA4
 * Callers:
 *     sub_180066D38 @ 0x180066D38 (sub_180066D38.c)
 * Callees:
 *     sub_180066E50 @ 0x180066E50 (sub_180066E50.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180066DA4(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = off_180149728;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 5000LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 5000LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 30000LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  sub_180066E50();
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, a1 + 32, a1 + 64, a1 + 72);
  return a1;
}
