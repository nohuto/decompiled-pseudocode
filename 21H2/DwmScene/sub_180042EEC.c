/*
 * XREFs of sub_180042EEC @ 0x180042EEC
 * Callers:
 *     sub_180043180 @ 0x180043180 (sub_180043180.c)
 *     sub_1800CC9E0 @ 0x1800CC9E0 (sub_1800CC9E0.c)
 * Callees:
 *     memset @ 0x18012396A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180042EEC(__int64 a1)
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
