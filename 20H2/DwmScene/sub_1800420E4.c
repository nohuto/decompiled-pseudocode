/*
 * XREFs of sub_1800420E4 @ 0x1800420E4
 * Callers:
 *     sub_180042150 @ 0x180042150 (sub_180042150.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800420E4(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  v2 = a1[13];
  if ( v2 )
  {
    a1[13] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800C8AAC(a1);
}
