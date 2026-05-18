/*
 * XREFs of sub_1800270B0 @ 0x1800270B0
 * Callers:
 *     sub_180028554 @ 0x180028554 (sub_180028554.c)
 * Callees:
 *     sub_1800CFBB4 @ 0x1800CFBB4 (sub_1800CFBB4.c)
 *     memset @ 0x18012396A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800270B0(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::VertexBufferD3D11>::`vftable';
    memset(v2 + 4, 0, 0x70uLL);
    sub_1800CFBB4(v3 + 4);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
    *((_QWORD *)v3 + 15) = 0LL;
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
