/*
 * XREFs of sub_1800A8830 @ 0x1800A8830
 * Callers:
 *     sub_1800A76CC @ 0x1800A76CC (sub_1800A76CC.c)
 * Callees:
 *     sub_18000FB60 @ 0x18000FB60 (sub_18000FB60.c)
 *     sub_180091538 @ 0x180091538 (sub_180091538.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800A8830(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xF8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::Material>::`vftable';
    sub_180091538((__int64)(v2 + 4));
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
