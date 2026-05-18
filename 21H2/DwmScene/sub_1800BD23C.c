/*
 * XREFs of sub_1800BD23C @ 0x1800BD23C
 * Callers:
 *     sub_1800B99C8 @ 0x1800B99C8 (sub_1800B99C8.c)
 *     sub_1801037E0 @ 0x1801037E0 (sub_1801037E0.c)
 * Callees:
 *     sub_1800111C8 @ 0x1800111C8 (sub_1800111C8.c)
 *     sub_180103458 @ 0x180103458 (sub_180103458.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800BD23C(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0xB8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ColorTransform>::`vftable';
    sub_180103458(v4 + 4, a2);
  }
  else
  {
    v5 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 4;
  *(_QWORD *)(a1 + 8) = v5;
  sub_1800111C8(a1, (__int64)(v5 + 4));
  return a1;
}
