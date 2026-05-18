/*
 * XREFs of sub_18009E96C @ 0x18009E96C
 * Callers:
 *     sub_18009FD8C @ 0x18009FD8C (sub_18009FD8C.c)
 * Callees:
 *     sub_18006CC9C @ 0x18006CC9C (sub_18006CC9C.c)
 *     sub_1800EBE50 @ 0x1800EBE50 (sub_1800EBE50.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009E96C(__int64 a1, __int64 a2, unsigned int *a3)
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
    sub_1800EBE50(v6 + 4, a2, *a3);
  }
  else
  {
    v7 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v7 + 4;
  *(_QWORD *)(a1 + 8) = v7;
  sub_18006CC9C(a1, (_QWORD *)v7 + 2);
  return a1;
}
