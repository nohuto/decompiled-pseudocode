/*
 * XREFs of sub_18003D61C @ 0x18003D61C
 * Callers:
 *     sub_18003D8B0 @ 0x18003D8B0 (sub_18003D8B0.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 * Callees:
 *     memset @ 0x18011E09A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18003D61C(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  __int64 result; // rax

  v2 = operator new(0x58uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::RenderStateDesc>::`vftable';
    memset(v2 + 4, 0, 0x48uLL);
    v3[4] = 0;
    *(_QWORD *)(v3 + 5) = 2LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    v3[9] = 0;
    *((_BYTE *)v3 + 40) = 0;
    *(_QWORD *)(v3 + 11) = 0LL;
    *(_QWORD *)(v3 + 13) = 0LL;
    *(_QWORD *)(v3 + 15) = 0LL;
    *(_QWORD *)(v3 + 17) = 0LL;
    v3[19] = 65793;
    *((_BYTE *)v3 + 80) = 1;
    v3[21] = 3;
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  result = a1;
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
