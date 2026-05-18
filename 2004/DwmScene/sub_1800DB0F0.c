/*
 * XREFs of sub_1800DB0F0 @ 0x1800DB0F0
 * Callers:
 *     sub_1800DB1F8 @ 0x1800DB1F8 (sub_1800DB1F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DB0F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 56) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::ScissorState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  result = a1;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 1164);
  return result;
}
