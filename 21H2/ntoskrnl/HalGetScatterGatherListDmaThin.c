/*
 * XREFs of HalGetScatterGatherListDmaThin @ 0x1402117A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuildScatterGatherListDmaThin @ 0x140211804 (HalpBuildScatterGatherListDmaThin.c)
 */

__int64 __fastcall HalGetScatterGatherListDmaThin(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  return HalpBuildScatterGatherListDmaThin(
           a1,
           a2,
           0,
           a3,
           a4 - *(unsigned int *)(a3 + 44) - *(_QWORD *)(a3 + 32),
           a5,
           0,
           a6,
           a7);
}
