/*
 * XREFs of sub_18002DF58 @ 0x18002DF58
 * Callers:
 *     sub_180021774 @ 0x180021774 (sub_180021774.c)
 * Callees:
 *     sub_180099368 @ 0x180099368 (sub_180099368.c)
 */

__int64 __fastcall sub_18002DF58(__int64 a1)
{
  __int64 result; // rax

  sub_180099368();
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::TextureD3D11::`vftable';
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_BYTE *)(a1 + 208) = 0;
  result = a1;
  *(_BYTE *)(a1 + 192) = 1;
  return result;
}
