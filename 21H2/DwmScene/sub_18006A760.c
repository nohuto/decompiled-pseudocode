/*
 * XREFs of sub_18006A760 @ 0x18006A760
 * Callers:
 *     sub_18006A8C8 @ 0x18006A8C8 (sub_18006A8C8.c)
 * Callees:
 *     sub_1800D69A0 @ 0x1800D69A0 (sub_1800D69A0.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18006A760(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x38uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::GpuProfilingGrapher>::`vftable';
    sub_1800D69A0(v2 + 4);
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
