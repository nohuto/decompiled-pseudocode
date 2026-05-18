/*
 * XREFs of sub_180026880 @ 0x180026880
 * Callers:
 *     sub_1800281F8 @ 0x1800281F8 (sub_1800281F8.c)
 * Callees:
 *     sub_18003E910 @ 0x18003E910 (sub_18003E910.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180026880(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x118uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::DepthBufferD3D11>::`vftable';
    sub_18003E910(v2 + 4);
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
