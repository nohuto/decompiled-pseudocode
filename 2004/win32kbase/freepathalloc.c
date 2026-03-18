/*
 * XREFs of freepathalloc @ 0x1C0079DE0
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0024224 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0079D90 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall freepathalloc(struct PATHALLOC *a1)
{
  unsigned int v2; // edx
  HSEMAPHORE v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = PATHALLOC::hsemFreelist;
  EngAcquireSemaphore(PATHALLOC::hsemFreelist);
  v2 = PATHALLOC::cFree;
  if ( PATHALLOC::cFree >= 4 )
  {
    Win32FreePool(a1);
    --PATHALLOC::cAllocated;
  }
  else
  {
    *(_QWORD *)a1 = PATHALLOC::freelist;
    PATHALLOC::freelist = a1;
    PATHALLOC::cFree = v2 + 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v3);
}
