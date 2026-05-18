/*
 * XREFs of sub_1800F9700 @ 0x1800F9700
 * Callers:
 *     sub_1800B662C @ 0x1800B662C (sub_1800B662C.c)
 * Callees:
 *     sub_180067A2C @ 0x180067A2C (sub_180067A2C.c)
 */

__int64 __fastcall sub_1800F9700(__int64 a1)
{
  __int64 result; // rax

  sub_180067A2C((_QWORD *)a1, 6LL, 7LL);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  return result;
}
