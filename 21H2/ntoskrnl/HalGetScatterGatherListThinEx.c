/*
 * XREFs of HalGetScatterGatherListThinEx @ 0x1404CB430
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuildScatterGatherListThin @ 0x1404CB86C (HalpBuildScatterGatherListThin.c)
 */

__int64 __fastcall HalGetScatterGatherListThinEx(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v14; // [rsp+48h] [rbp-30h]

  if ( a3 && (a8 || (a7 & 1) != 0 && a13) )
    return HalpBuildScatterGatherListThin(a1, a2, a3, a4, a5, a6, a7, a8, a9, v14, 0LL, 0, a13);
  else
    return 3221225485LL;
}
