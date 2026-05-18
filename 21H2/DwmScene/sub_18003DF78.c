/*
 * XREFs of sub_18003DF78 @ 0x18003DF78
 * Callers:
 *     sub_18003DFF0 @ 0x18003DFF0 (sub_18003DFF0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003DF78(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  v2 = a1[15];
  if ( v2 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800D3610(a1);
}
