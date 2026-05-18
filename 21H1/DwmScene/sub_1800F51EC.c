/*
 * XREFs of sub_1800F51EC @ 0x1800F51EC
 * Callers:
 *     sub_1800B7ACC @ 0x1800B7ACC (sub_1800B7ACC.c)
 * Callees:
 *     sub_180104434 @ 0x180104434 (sub_180104434.c)
 */

__int64 __fastcall sub_1800F51EC(__int64 a1)
{
  __int64 result; // rax

  sub_180104434();
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
