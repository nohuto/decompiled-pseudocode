/*
 * XREFs of ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00011CC
 * Callers:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C000103C (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0060598 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00633FC (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(VIDMM_RECYCLE_HEAP_MGR *this, char a2)
{
  int v2; // eax
  int v4; // eax

  if ( (unsigned __int64)qword_1C00511D8 <= 0x53333333 )
  {
    if ( !a2 )
    {
      v2 = dword_1C00513E8;
      return (unsigned int)(v2 << 20);
    }
    v4 = dword_1C00513EC;
  }
  else
  {
    if ( !a2 )
    {
      v2 = dword_1C00513D8;
      return (unsigned int)(v2 << 20);
    }
    v4 = dword_1C00513DC;
  }
  return (unsigned int)(v4 << 10);
}
