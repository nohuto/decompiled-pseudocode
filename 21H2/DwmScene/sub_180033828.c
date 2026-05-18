/*
 * XREFs of sub_180033828 @ 0x180033828
 * Callers:
 *     sub_180027044 @ 0x180027044 (sub_180027044.c)
 * Callees:
 *     sub_18009EC38 @ 0x18009EC38 (sub_18009EC38.c)
 */

__int64 __fastcall sub_180033828(__int64 a1)
{
  __int64 result; // rax

  sub_18009EC38();
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
