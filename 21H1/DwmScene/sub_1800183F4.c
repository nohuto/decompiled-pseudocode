/*
 * XREFs of sub_1800183F4 @ 0x1800183F4
 * Callers:
 *     sub_180019610 @ 0x180019610 (sub_180019610.c)
 *     sub_18001CF70 @ 0x18001CF70 (sub_18001CF70.c)
 *     sub_1800B3610 @ 0x1800B3610 (sub_1800B3610.c)
 *     sub_1800B4334 @ 0x1800B4334 (sub_1800B4334.c)
 *     sub_1800B54CC @ 0x1800B54CC (sub_1800B54CC.c)
 *     sub_1800E66C0 @ 0x1800E66C0 (sub_1800E66C0.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800183F4(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::LightProbe `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a2[1];
    }
    *a1 = v4;
    a1[1] = v5;
  }
  return a1;
}
