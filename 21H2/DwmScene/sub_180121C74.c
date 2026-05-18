/*
 * XREFs of sub_180121C74 @ 0x180121C74
 * Callers:
 *     sub_180121E6C @ 0x180121E6C (sub_180121E6C.c)
 * Callees:
 *     sub_180121CE0 @ 0x180121CE0 (sub_180121CE0.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180121C74(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xB8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Utils::ThreadPool::TaskHandler>::`vftable';
    sub_180121CE0(v2 + 4);
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
