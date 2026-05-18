/*
 * XREFs of sub_180020ED8 @ 0x180020ED8
 * Callers:
 *     sub_180022474 @ 0x180022474 (sub_180022474.c)
 * Callees:
 *     sub_180032BA4 @ 0x180032BA4 (sub_180032BA4.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180020ED8(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xB0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::CommandListD3D11>::`vftable';
    sub_180032BA4(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}
