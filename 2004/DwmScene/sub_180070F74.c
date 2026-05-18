/*
 * XREFs of sub_180070F74 @ 0x180070F74
 * Callers:
 *     sub_1800716F8 @ 0x1800716F8 (sub_1800716F8.c)
 * Callees:
 *     sub_18006CC9C @ 0x18006CC9C (sub_18006CC9C.c)
 *     sub_18009EB14 @ 0x18009EB14 (sub_18009EB14.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180070F74(__int64 a1, _QWORD *a2)
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
    sub_18009EB14(v4 + 4, *a2);
  }
  else
  {
    v5 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 4;
  *(_QWORD *)(a1 + 8) = v5;
  sub_18006CC9C(a1, (_QWORD *)v5 + 2);
  return a1;
}
