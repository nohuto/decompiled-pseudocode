/*
 * XREFs of sub_1800F3E30 @ 0x1800F3E30
 * Callers:
 *     sub_1800B0D5C @ 0x1800B0D5C (sub_1800B0D5C.c)
 * Callees:
 *     sub_18006215C @ 0x18006215C (sub_18006215C.c)
 */

__int64 __fastcall sub_1800F3E30(__int64 a1)
{
  __int64 result; // rax

  sub_18006215C((_QWORD *)a1, 6LL, 7LL);
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
