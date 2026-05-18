/*
 * XREFs of sub_180018A04 @ 0x180018A04
 * Callers:
 *     sub_180017B6C @ 0x180017B6C (sub_180017B6C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018A04(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreMesh::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_18013ACD0;
  if ( qword_180218548 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180218548 + 8LL))(qword_180218548);
  *(_QWORD *)a1 = &off_18013AD00;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 1065353216;
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 1065353216;
  return a1;
}
