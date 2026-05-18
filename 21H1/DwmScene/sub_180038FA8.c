/*
 * XREFs of sub_180038FA8 @ 0x180038FA8
 * Callers:
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     sub_18009B0C8 @ 0x18009B0C8 (sub_18009B0C8.c)
 *     sub_18009B10C @ 0x18009B10C (sub_18009B10C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180038FA8(__int64 a1)
{
  char *v2; // rax
  char *v3; // rdx
  __int128 v4; // xmm0
  __int64 result; // rax

  v2 = (char *)operator new(0x48uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::SamplerStateDesc>::`vftable';
    *((_OWORD *)v2 + 1) = 0LL;
    *((_OWORD *)v2 + 2) = 0LL;
    *((_OWORD *)v2 + 3) = 0LL;
    *((_DWORD *)v2 + 16) = 0;
    *((_QWORD *)v2 + 2) = 1LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_DWORD *)v2 + 8) = 0;
    *((_DWORD *)v2 + 9) = 1;
    *((_DWORD *)v2 + 10) = 7;
    v4 = xmmword_18020DC70;
    *((_DWORD *)v2 + 15) = 0;
    *((_DWORD *)v2 + 16) = 2139095039;
    *(_OWORD *)(v2 + 44) = v4;
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 16;
  result = a1;
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
