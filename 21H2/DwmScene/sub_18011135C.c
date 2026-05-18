/*
 * XREFs of sub_18011135C @ 0x18011135C
 * Callers:
 *     sub_1800F9AC8 @ 0x1800F9AC8 (sub_1800F9AC8.c)
 * Callees:
 *     sub_180109D04 @ 0x180109D04 (sub_180109D04.c)
 */

__int64 __fastcall sub_18011135C(__int64 a1)
{
  __int64 result; // rax

  sub_180109D04(a1);
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectBlur::`vftable';
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
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_BYTE *)(a1 + 336) = 0;
  result = a1;
  *(_QWORD *)(a1 + 360) = 15LL;
  return result;
}
