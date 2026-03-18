/*
 * XREFs of MiRealVaToFlushType @ 0x14037700C
 * Callers:
 *     MiFlushValidPteFromTb @ 0x140376F60 (MiFlushValidPteFromTb.c)
 *     MiDbgReleaseAddress @ 0x140540BEC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1405411EC (MiDbgWriteCheck.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiHyperSpaceSize @ 0x1402BDFC8 (MiHyperSpaceSize.c)
 */

__int64 __fastcall MiRealVaToFlushType(unsigned __int64 a1)
{
  unsigned __int64 v1; // r10
  __int64 v2; // rax
  int SystemRegionType; // eax
  unsigned int v4; // ecx

  v1 = a1;
  if ( a1 < 0xFFFF800000000000uLL )
    return 1;
  if ( a1 >= qword_140C4E160 && (v2 = MiHyperSpaceSize(), v1 < qword_140C4E160 + v2) )
  {
    return 1;
  }
  else
  {
    SystemRegionType = MiGetSystemRegionType(v1);
    v4 = 0;
    if ( SystemRegionType == 1 )
      return 2;
  }
  return v4;
}
