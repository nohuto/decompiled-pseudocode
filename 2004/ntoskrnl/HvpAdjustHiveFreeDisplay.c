/*
 * XREFs of HvpAdjustHiveFreeDisplay @ 0x140638704
 * Callers:
 *     HvLoadHive @ 0x140637D30 (HvLoadHive.c)
 *     HvpAddBin @ 0x140638040 (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x14063BCF4 (HvFreeHivePartial.c)
 *     HvHiveStartMemoryBacked @ 0x14075D398 (HvHiveStartMemoryBacked.c)
 *     HvpPerformLogFileRecovery @ 0x140870C80 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpAdjustBitmap @ 0x140638780 (HvpAdjustBitmap.c)
 */

__int64 __fastcall HvpAdjustHiveFreeDisplay(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 result; // rax

  if ( a2 > 0x7FFFE000 )
    return 3221225804LL;
  v5 = 0LL;
  v6 = 632LL * a3;
  while ( 1 )
  {
    result = HvpAdjustBitmap(a1, a2, v6 + 24 * v5 + a1 + 304);
    if ( (int)result < 0 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x18 )
      return 0LL;
  }
  return result;
}
