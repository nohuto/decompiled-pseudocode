/*
 * XREFs of sub_180018668 @ 0x180018668
 * Callers:
 *     sub_180017744 @ 0x180017744 (sub_180017744.c)
 *     sub_180068D9C @ 0x180068D9C (sub_180068D9C.c)
 * Callees:
 *     sub_18000FA80 @ 0x18000FA80 (sub_18000FA80.c)
 *     sub_1800993DC @ 0x1800993DC (sub_1800993DC.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180018668(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xB8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::Texture>::`vftable';
    sub_1800993DC(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  sub_18000FA80(a1, (__int64)(v3 + 4));
  return a1;
}
