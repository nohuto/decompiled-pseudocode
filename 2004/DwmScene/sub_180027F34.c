/*
 * XREFs of sub_180027F34 @ 0x180027F34
 * Callers:
 *     sub_180026F5C @ 0x180026F5C (sub_180026F5C.c)
 * Callees:
 *     sub_18000FA80 @ 0x18000FA80 (sub_18000FA80.c)
 *     sub_1800CA8A4 @ 0x1800CA8A4 (sub_1800CA8A4.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180027F34(__int64 a1)
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
    sub_1800CA8A4(v2 + 4);
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
