/*
 * XREFs of sub_180076844 @ 0x180076844
 * Callers:
 *     sub_180076FC8 @ 0x180076FC8 (sub_180076FC8.c)
 * Callees:
 *     sub_18007256C @ 0x18007256C (sub_18007256C.c)
 *     sub_1800A43E4 @ 0x1800A43E4 (sub_1800A43E4.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180076844(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x4918uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ShaderManager>::`vftable';
    sub_1800A43E4(v4 + 4, *a2);
  }
  else
  {
    v5 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 4;
  *(_QWORD *)(a1 + 8) = v5;
  sub_18007256C(a1, (_QWORD *)v5 + 2);
  return a1;
}
