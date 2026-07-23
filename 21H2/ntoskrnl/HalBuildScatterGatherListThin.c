/*
 * XREFs of HalBuildScatterGatherListThin @ 0x1404CADF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuildScatterGatherListThin @ 0x1404CB86C (HalpBuildScatterGatherListThin.c)
 */

__int64 __fastcall HalBuildScatterGatherListThin(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void *a9,
        int a10)
{
  int v11; // [rsp+48h] [rbp-30h]

  return HalpBuildScatterGatherListThin(
           a1,
           a2,
           0,
           a3,
           a4 - *(unsigned int *)(a3 + 44) - *(_QWORD *)(a3 + 32),
           a5,
           0,
           a6,
           a7,
           v11,
           a9,
           a10,
           0LL);
}
