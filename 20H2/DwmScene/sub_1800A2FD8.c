/*
 * XREFs of sub_1800A2FD8 @ 0x1800A2FD8
 * Callers:
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 * Callees:
 *     sub_18006CC9C @ 0x18006CC9C (sub_18006CC9C.c)
 *     sub_1800F127C @ 0x1800F127C (sub_1800F127C.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800A2FD8(__int64 a1, __int64 a2)
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
    sub_1800F127C(v4 + 4, a2);
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
