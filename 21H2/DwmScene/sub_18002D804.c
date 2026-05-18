/*
 * XREFs of sub_18002D804 @ 0x18002D804
 * Callers:
 *     sub_18002C82C @ 0x18002C82C (sub_18002C82C.c)
 * Callees:
 *     sub_18000FB60 @ 0x18000FB60 (sub_18000FB60.c)
 *     sub_1800D0174 @ 0x1800D0174 (sub_1800D0174.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18002D804(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x120uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::DepthBuffer>::`vftable';
    sub_1800D0174(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  sub_18000FB60(a1, (__int64)(v3 + 4));
  return a1;
}
