/*
 * XREFs of sub_1800FAABC @ 0x1800FAABC
 * Callers:
 *     sub_1800BD39C @ 0x1800BD39C (sub_1800BD39C.c)
 * Callees:
 *     sub_180109D04 @ 0x180109D04 (sub_180109D04.c)
 */

__int64 __fastcall sub_1800FAABC(__int64 a1)
{
  __int64 result; // rax

  sub_180109D04();
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 232) = 1;
  return result;
}
