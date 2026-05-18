/*
 * XREFs of sub_1800190B4 @ 0x1800190B4
 * Callers:
 *     sub_180018014 @ 0x180018014 (sub_180018014.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800190B4(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreMesh::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180140E60;
  if ( qword_18021F678 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18021F678 + 8LL))(qword_18021F678);
  *(_QWORD *)a1 = &off_180140E90;
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
