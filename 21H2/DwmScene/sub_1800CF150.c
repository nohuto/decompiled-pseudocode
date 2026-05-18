/*
 * XREFs of sub_1800CF150 @ 0x1800CF150
 * Callers:
 *     sub_1800CFB14 @ 0x1800CFB14 (sub_1800CFB14.c)
 *     sub_1800D2C10 @ 0x1800D2C10 (sub_1800D2C10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CF150(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 24) = a6;
  result = a1;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  return result;
}
