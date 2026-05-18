/*
 * XREFs of sub_180099368 @ 0x180099368
 * Callers:
 *     sub_18002DF58 @ 0x18002DF58 (sub_18002DF58.c)
 *     sub_1800B0F9C @ 0x1800B0F9C (sub_1800B0F9C.c)
 * Callees:
 *     sub_18006215C @ 0x18006215C (sub_18006215C.c)
 */

__int64 __fastcall sub_180099368(__int64 a1)
{
  __int64 result; // rax

  sub_18006215C((_QWORD *)a1, 1LL, 11LL);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceTexture::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  result = a1;
  *(_QWORD *)(a1 + 144) = 15LL;
  *(_QWORD *)(a1 + 152) = qword_18021AB48;
  return result;
}
