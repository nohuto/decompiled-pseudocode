/*
 * XREFs of sub_180064E14 @ 0x180064E14
 * Callers:
 *     sub_180064FF8 @ 0x180064FF8 (sub_180064FF8.c)
 * Callees:
 *     sub_1800CFC70 @ 0x1800CFC70 (sub_1800CFC70.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180064E14(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0xD8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::GpuProfiler>::`vftable';
    sub_1800CFC70(v4 + 4, a2);
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
