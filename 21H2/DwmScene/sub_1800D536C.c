/*
 * XREFs of sub_1800D536C @ 0x1800D536C
 * Callers:
 *     sub_1800D53E8 @ 0x1800D53E8 (sub_1800D53E8.c)
 * Callees:
 *     sub_1801083C8 @ 0x1801083C8 (sub_1801083C8.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800D536C(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x448uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::GpuProfilerFrame>::`vftable';
    sub_1801083C8(v4 + 4, a2);
  }
  else
  {
    v5 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 4;
  *(_QWORD *)(a1 + 8) = v5;
  return a1;
}
