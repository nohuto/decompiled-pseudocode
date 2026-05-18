/*
 * XREFs of sub_18003D7B4 @ 0x18003D7B4
 * Callers:
 *     sub_18003D860 @ 0x18003D860 (sub_18003D860.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D7B4(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  v2 = a1[16];
  if ( v2 )
  {
    a1[16] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[15];
  if ( v3 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = a1[14];
  if ( v4 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_18003D724(a1);
}
