/*
 * XREFs of sub_18003866C @ 0x18003866C
 * Callers:
 *     sub_180020F44 @ 0x180020F44 (sub_180020F44.c)
 * Callees:
 *     sub_18006215C @ 0x18006215C (sub_18006215C.c)
 */

__int64 __fastcall sub_18003866C(__int64 a1)
{
  __int64 result; // rax

  sub_18006215C(a1, 6LL, 7LL);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 120) = 0LL;
  return result;
}
