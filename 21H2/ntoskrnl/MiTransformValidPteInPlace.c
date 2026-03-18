/*
 * XREFs of MiTransformValidPteInPlace @ 0x1402270B8
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14027C784 (MiInitializeSystemPageTable.c)
 *     MiShadowTopLevelPxes @ 0x14036C624 (MiShadowTopLevelPxes.c)
 *     MiReplicatePteChangeToProcess @ 0x14036C9FC (MiReplicatePteChangeToProcess.c)
 *     MiReplacePfnWithGapMapping @ 0x1403C92F4 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeLargePageTable @ 0x140598DA4 (MiMakeLargePageTable.c)
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiFlushValidPteFromTb @ 0x140227254 (MiFlushValidPteFromTb.c)
 *     MiWritePteHighLevel @ 0x1405AE144 (MiWritePteHighLevel.c)
 */

signed __int64 __fastcall MiTransformValidPteInPlace(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        signed __int64 a3,
        unsigned int a4)
{
  int v4; // r15d
  signed __int64 result; // rax
  int v10; // ebp
  unsigned __int64 v11; // rbx
  signed __int64 v12; // rtt
  signed __int64 v13; // rtt

  v4 = MiFlags;
  if ( (MiFlags & 0x4000000) != 0 )
    _mm_lfence();
  result = *a1;
  if ( *a1 != a3 )
  {
    while ( 1 )
    {
      v10 = 0;
      if ( (v4 & 0x18000000u) <= 0x8000000
        && ((v4 & 0x18000000) == 0
         || a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL && (result & 0x80u) == 0LL) )
      {
        v10 = 1;
        if ( KeGetCurrentPrcb()->Number < (unsigned int)KeNumberProcessors_0 )
          return MiWritePteHighLevel(a1, a2, a3, 1LL);
      }
      while ( (result & 0x20) != 0 && !v10 )
      {
        v11 = result & 0xFFFFFFFFFFFFFFDFuLL;
        if ( (MiFlags & 0x4000000) != 0 )
          _mm_lfence();
        v12 = result;
        result = _InterlockedCompareExchange64(a1, v11, result);
        if ( v12 == result )
        {
          MiFlushValidPteFromTb(a2, result, a4, 1LL);
          result = v11;
          break;
        }
        if ( (v4 & 0x18000000) == 0x8000000
          && a2 >= 0xFFFFF6FB40000000uLL
          && a2 <= 0xFFFFF6FB7FFFFFFFuLL
          && (result & 0x80u) == 0LL )
        {
          v10 = 1;
        }
      }
      if ( (MiFlags & 0x4000000) != 0 )
        _mm_lfence();
      v13 = result;
      result = _InterlockedCompareExchange64(a1, a3, result);
      if ( v13 == result )
        break;
      if ( result == a3 )
        return result;
    }
    if ( v10 )
      result |= 0x20uLL;
    if ( (result & 0x20) != 0 )
      return MiFlushValidPteFromTb(a2, result, a4, 1LL);
  }
  return result;
}
