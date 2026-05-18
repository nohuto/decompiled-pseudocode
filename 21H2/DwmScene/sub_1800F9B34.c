/*
 * XREFs of sub_1800F9B34 @ 0x1800F9B34
 * Callers:
 *     sub_1800BD330 @ 0x1800BD330 (sub_1800BD330.c)
 * Callees:
 *     sub_180109D04 @ 0x180109D04 (sub_180109D04.c)
 */

__int64 __fastcall sub_1800F9B34(__int64 a1)
{
  __int64 result; // rax

  sub_180109D04();
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectBloom::`vftable';
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 280) = 1056964608;
  return result;
}
