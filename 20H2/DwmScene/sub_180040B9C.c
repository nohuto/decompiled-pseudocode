/*
 * XREFs of sub_180040B9C @ 0x180040B9C
 * Callers:
 *     sub_180023190 @ 0x180023190 (sub_180023190.c)
 *     sub_180026890 @ 0x180026890 (sub_180026890.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180040B9C(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  v2 = a1[13];
  if ( v2 )
  {
    a1[13] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return sub_1800C98E0(a1);
}
