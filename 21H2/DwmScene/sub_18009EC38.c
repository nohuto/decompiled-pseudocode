/*
 * XREFs of sub_18009EC38 @ 0x18009EC38
 * Callers:
 *     sub_180033828 @ 0x180033828 (sub_180033828.c)
 *     sub_1800B686C @ 0x1800B686C (sub_1800B686C.c)
 * Callees:
 *     sub_180067A2C @ 0x180067A2C (sub_180067A2C.c)
 */

__int64 __fastcall sub_18009EC38(__int64 a1)
{
  __int64 result; // rax

  sub_180067A2C((_QWORD *)a1, 1LL, 11LL);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceTexture::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  result = a1;
  *(_QWORD *)(a1 + 144) = 15LL;
  *(_QWORD *)(a1 + 152) = qword_180221E78;
  return result;
}
