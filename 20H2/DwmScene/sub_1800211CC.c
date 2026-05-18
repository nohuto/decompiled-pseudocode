/*
 * XREFs of sub_1800211CC @ 0x1800211CC
 * Callers:
 *     sub_180022B2C @ 0x180022B2C (sub_180022B2C.c)
 * Callees:
 *     sub_1800427F8 @ 0x1800427F8 (sub_1800427F8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800211CC(__int64 a1)
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
    sub_1800427F8(v2 + 4);
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
