/*
 * XREFs of sub_1800386A8 @ 0x1800386A8
 * Callers:
 *     sub_180038720 @ 0x180038720 (sub_180038720.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800386A8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  v2 = a1[15];
  if ( v2 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800CDD40(a1);
}
