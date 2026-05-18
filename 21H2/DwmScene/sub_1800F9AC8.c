/*
 * XREFs of sub_1800F9AC8 @ 0x1800F9AC8
 * Callers:
 *     sub_1800F99EC @ 0x1800F99EC (sub_1800F99EC.c)
 * Callees:
 *     sub_18011135C @ 0x18011135C (sub_18011135C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800F9AC8(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x190uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ImageProcessingEffectBlur>::`vftable';
    sub_18011135C(v2 + 4);
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
