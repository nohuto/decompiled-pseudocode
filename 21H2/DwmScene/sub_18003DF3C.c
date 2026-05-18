/*
 * XREFs of sub_18003DF3C @ 0x18003DF3C
 * Callers:
 *     sub_180026814 @ 0x180026814 (sub_180026814.c)
 * Callees:
 *     sub_180067A2C @ 0x180067A2C (sub_180067A2C.c)
 */

__int64 __fastcall sub_18003DF3C(__int64 a1)
{
  __int64 result; // rax

  sub_180067A2C(a1, 6LL, 7LL);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 120) = 0LL;
  return result;
}
