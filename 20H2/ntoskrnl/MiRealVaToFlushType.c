/*
 * XREFs of MiRealVaToFlushType @ 0x140378F9C
 * Callers:
 *     MiFlushValidPteFromTb @ 0x140378EF0 (MiFlushValidPteFromTb.c)
 *     MiDbgReleaseAddress @ 0x1405445BC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140544BBC (MiDbgWriteCheck.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiHyperSpaceSize @ 0x140299518 (MiHyperSpaceSize.c)
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
  if ( a1 >= qword_140C4E1E0 && (v2 = MiHyperSpaceSize(), v1 < qword_140C4E1E0 + v2) )
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
