/*
 * XREFs of sub_1800460C8 @ 0x1800460C8
 * Callers:
 *     sub_180046110 @ 0x180046110 (sub_180046110.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800460C8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  v2 = a1[23];
  if ( v2 )
  {
    a1[23] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800A0A5C(a1);
}
