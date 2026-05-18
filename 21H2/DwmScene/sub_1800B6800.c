/*
 * XREFs of sub_1800B6800 @ 0x1800B6800
 * Callers:
 *     sub_1800B6FBC @ 0x1800B6FBC (sub_1800B6FBC.c)
 * Callees:
 *     sub_1800F98EC @ 0x1800F98EC (sub_1800F98EC.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800B6800(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x90uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::SamplerGeneric>::`vftable';
    sub_1800F98EC(v2 + 4);
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
