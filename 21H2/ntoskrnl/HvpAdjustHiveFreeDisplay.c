/*
 * XREFs of HvpAdjustHiveFreeDisplay @ 0x14068CF68
 * Callers:
 *     HvFreeHivePartial @ 0x140689900 (HvFreeHivePartial.c)
 *     HvLoadHive @ 0x14068C238 (HvLoadHive.c)
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     HvHiveStartMemoryBacked @ 0x14068F7C4 (HvHiveStartMemoryBacked.c)
 *     HvpPerformLogFileRecovery @ 0x14091ADA0 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpAdjustBitmap @ 0x14068CFE4 (HvpAdjustBitmap.c)
 */

__int64 __fastcall HvpAdjustHiveFreeDisplay(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 result; // rax

  if ( a2 > 0x7FFFE000 )
    return 3221225804LL;
  v5 = 0;
  v6 = 632LL * a3;
  while ( 1 )
  {
    result = HvpAdjustBitmap(a1, a2, a1 + v6 + 24 * (v5 + 13LL));
    if ( (int)result < 0 )
      break;
    if ( ++v5 >= 0x18 )
      return 0LL;
  }
  return result;
}
