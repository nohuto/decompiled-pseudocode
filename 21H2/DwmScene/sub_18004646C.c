/*
 * XREFs of sub_18004646C @ 0x18004646C
 * Callers:
 *     sub_180028A60 @ 0x180028A60 (sub_180028A60.c)
 *     sub_18002C160 @ 0x18002C160 (sub_18002C160.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004646C(_QWORD *a1)
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
  return sub_1800CF1B0(a1);
}
