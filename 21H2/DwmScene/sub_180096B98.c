/*
 * XREFs of sub_180096B98 @ 0x180096B98
 * Callers:
 *     sub_1800965B0 @ 0x1800965B0 (sub_1800965B0.c)
 * Callees:
 *     sub_18000FB60 @ 0x18000FB60 (sub_18000FB60.c)
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180096B98(__int64 a1, unsigned int *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0xA8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::VertexBuffer>::`vftable';
    sub_1800CFBE0(v4 + 4, *a2);
  }
  else
  {
    v5 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 4;
  *(_QWORD *)(a1 + 8) = v5;
  sub_18000FB60(a1, (__int64)(v5 + 4));
  return a1;
}
