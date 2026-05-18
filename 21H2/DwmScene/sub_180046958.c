/*
 * XREFs of sub_180046958 @ 0x180046958
 * Callers:
 *     sub_180028A90 @ 0x180028A90 (sub_180028A90.c)
 *     sub_18002C170 @ 0x18002C170 (sub_18002C170.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180046958(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  v2 = a1[18];
  if ( v2 )
  {
    a1[18] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800D1D48(a1);
}
