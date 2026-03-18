/*
 * XREFs of freepathalloc @ 0x1C005D600
 * Callers:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C005D5B0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0087814 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
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
    Win32FreePool((__int64)a1);
    --PATHALLOC::cAllocated;
  }
  else
  {
    *(_QWORD *)a1 = PATHALLOC::freelist;
    PATHALLOC::freelist = a1;
    PATHALLOC::cFree = v2 + 1;
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v3);
}
