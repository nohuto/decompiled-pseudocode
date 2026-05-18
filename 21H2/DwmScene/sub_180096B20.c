/*
 * XREFs of sub_180096B20 @ 0x180096B20
 * Callers:
 *     sub_1800964A0 @ 0x1800964A0 (sub_1800964A0.c)
 * Callees:
 *     sub_18000FB60 @ 0x18000FB60 (sub_18000FB60.c)
 *     sub_1800CF764 @ 0x1800CF764 (sub_1800CF764.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180096B20(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xA8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::IndexBuffer>::`vftable';
    sub_1800CF764(v2 + 4);
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
