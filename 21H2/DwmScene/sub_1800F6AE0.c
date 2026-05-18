/*
 * XREFs of sub_1800F6AE0 @ 0x1800F6AE0
 * Callers:
 *     sub_1800F65C4 @ 0x1800F65C4 (sub_1800F65C4.c)
 * Callees:
 *     sub_1800D1C5C @ 0x1800D1C5C (sub_1800D1C5C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800F6AE0(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xC0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::VertexLayout>::`vftable';
    sub_1800D1C5C((__int64)(v2 + 4));
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
