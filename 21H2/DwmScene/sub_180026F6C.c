/*
 * XREFs of sub_180026F6C @ 0x180026F6C
 * Callers:
 *     sub_180028804 @ 0x180028804 (sub_180028804.c)
 * Callees:
 *     sub_180031C20 @ 0x180031C20 (sub_180031C20.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180026F6C(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x98uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::RenderTargetD3D11>::`vftable';
    sub_180031C20(v2 + 4);
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
