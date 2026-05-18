/*
 * XREFs of sub_1800BD330 @ 0x1800BD330
 * Callers:
 *     sub_1800BEB50 @ 0x1800BEB50 (sub_1800BEB50.c)
 * Callees:
 *     sub_1800F9B34 @ 0x1800F9B34 (sub_1800F9B34.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800BD330(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x130uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ImageProcessingEffectBloom>::`vftable';
    sub_1800F9B34(v2 + 4);
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
