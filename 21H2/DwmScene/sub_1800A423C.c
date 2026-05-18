/*
 * XREFs of sub_1800A423C @ 0x1800A423C
 * Callers:
 *     sub_1800A565C @ 0x1800A565C (sub_1800A565C.c)
 * Callees:
 *     sub_18007256C @ 0x18007256C (sub_18007256C.c)
 *     sub_1800F1720 @ 0x1800F1720 (sub_1800F1720.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A423C(__int64 a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v6 = operator new(0x4F0uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<Spectre::Engine::ShaderPropertyLayout>::`vftable';
    sub_1800F1720(v6 + 4, a2, *a3);
  }
  else
  {
    v7 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v7 + 4;
  *(_QWORD *)(a1 + 8) = v7;
  sub_18007256C(a1, (_QWORD *)v7 + 2);
  return a1;
}
