/*
 * XREFs of sub_180026A9C @ 0x180026A9C
 * Callers:
 *     sub_1800283FC @ 0x1800283FC (sub_1800283FC.c)
 * Callees:
 *     sub_1800480C8 @ 0x1800480C8 (sub_1800480C8.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180026A9C(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::HullShaderD3D11>::`vftable';
    sub_1800480C8(v2 + 4);
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
