/*
 * XREFs of sub_180026B08 @ 0x180026B08
 * Callers:
 *     sub_180028758 @ 0x180028758 (sub_180028758.c)
 * Callees:
 *     sub_1800CF738 @ 0x1800CF738 (sub_1800CF738.c)
 *     memset @ 0x18012396A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180026B08(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::IndexBufferD3D11>::`vftable';
    memset(v2 + 4, 0, 0x70uLL);
    sub_1800CF738(v3 + 4);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
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
