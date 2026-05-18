/*
 * XREFs of sub_1800A88A8 @ 0x1800A88A8
 * Callers:
 *     sub_1800A99A4 @ 0x1800A99A4 (sub_1800A99A4.c)
 * Callees:
 *     sub_18007256C @ 0x18007256C (sub_18007256C.c)
 *     sub_1800F6B4C @ 0x1800F6B4C (sub_1800F6B4C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800A88A8(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x2A0uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ShaderPipeline>::`vftable';
    sub_1800F6B4C(v4 + 4, a2);
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
