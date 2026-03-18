/*
 * XREFs of KiIntSteerGetNextProcessorTarget @ 0x140578414
 * Callers:
 *     KiIntSteerCalculateUniformDistribution @ 0x140578254 (KiIntSteerCalculateUniformDistribution.c)
 * Callees:
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1402FE1C4 (KiIntPartGetLowestClassProcessorInMask.c)
 */

__int64 __fastcall KiIntSteerGetNextProcessorTarget(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_WORD *)(a2 + 8);
  *(_QWORD *)&v4 = *(_QWORD *)a2 & *(_QWORD *)(a1 + 64);
  *((_QWORD *)&v4 + 1) = v2;
  if ( (_QWORD)v4 )
    return KiIntPartGetLowestClassProcessorInMask(&v4);
  else
    return 0xFFFFFFFFLL;
}
