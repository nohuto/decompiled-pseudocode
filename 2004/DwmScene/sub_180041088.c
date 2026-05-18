/*
 * XREFs of sub_180041088 @ 0x180041088
 * Callers:
 *     sub_1800231C0 @ 0x1800231C0 (sub_1800231C0.c)
 *     sub_1800268A0 @ 0x1800268A0 (sub_1800268A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180041088(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  v2 = a1[18];
  if ( v2 )
  {
    a1[18] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800CC478(a1);
}
