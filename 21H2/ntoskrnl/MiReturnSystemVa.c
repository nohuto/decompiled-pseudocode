/*
 * XREFs of MiReturnSystemVa @ 0x14026DAB0
 * Callers:
 *     MiReturnSystemCacheRegionsToKva @ 0x1402426F4 (MiReturnSystemCacheRegionsToKva.c)
 *     MiExpandSystemCache @ 0x14024280C (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x14026A818 (MiExpandPtes.c)
 *     MiReturnSystemPtes @ 0x14026CE64 (MiReturnSystemPtes.c)
 *     MmFreePoolMemory @ 0x140366DA8 (MmFreePoolMemory.c)
 *     MiUnmapLargePages @ 0x1403A111C (MiUnmapLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403C736C (MiGetPageTablesForLargeMap.c)
 *     MiDeleteBootRange @ 0x1403C84E4 (MiDeleteBootRange.c)
 *     MmFreeSecurePoolMemory @ 0x14059A9B4 (MmFreeSecurePoolMemory.c)
 *     MiReleaseLargePteMappings @ 0x1405B585C (MiReleaseLargePteMappings.c)
 *     MiReleaseDriverPtes @ 0x14076200C (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x1407621C0 (MiReserveDriverPtes.c)
 *     MiMapBBTMemory @ 0x140B092AC (MiMapBBTMemory.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiMakeSystemRangeAvailable @ 0x14026E218 (MiMakeSystemRangeAvailable.c)
 *     MiDeleteSystemPageTables @ 0x14026E468 (MiDeleteSystemPageTables.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rdi
  ULONG_PTR v10; // rbx
  int v11; // eax
  __int64 AnyMultiplexedVm; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r10d
  __int64 v16; // rdx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  __int64 v22; // rcx
  int v23; // edx
  int v24; // edx
  _QWORD v25[24]; // [rsp+30h] [rbp-E8h] BYREF

  memset(v25, 0, 0xB8uLL);
  v6 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v8 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v6 < v8 )
  {
    v9 = (__int64)(v8 << 25) >> 16;
    v10 = (__int64)(v6 << 25) >> 16;
    v11 = 2;
    WORD2(v25[0]) = 0;
    v25[2] = 0LL;
    LODWORD(v25[1]) = 20;
    v25[3] = 0LL;
    if ( a3 != 1 )
      v11 = 0;
    LODWORD(v25[0]) = v11;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
    v16 = a3 - v15;
    if ( a3 == v15 )
    {
      AnyMultiplexedVm = MiGetSessionVm(v13, v16, v14);
LABEL_12:
      if ( AnyMultiplexedVm )
        MiDeleteSystemPageTables(AnyMultiplexedVm, a3, v10, v9 - 1, v15, (__int64)v25);
      return MiMakeSystemRangeAvailable(v10, v9 - v10);
    }
    v17 = v16 - 5;
    if ( !v17 )
    {
      v22 = (unsigned int)v14;
      goto LABEL_11;
    }
    v18 = v17 - v14;
    if ( !v18 )
    {
      v22 = 0LL;
      goto LABEL_11;
    }
    v19 = v18 - v15;
    if ( v19 )
    {
      v20 = v19 - v14;
      if ( !v20 )
        return MiMakeSystemRangeAvailable(v10, v9 - v10);
      v21 = v20 - v15;
      if ( !v21 )
      {
        v22 = v15;
LABEL_11:
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(v22);
        goto LABEL_12;
      }
      v23 = v21 - v15;
      if ( v23 )
      {
        v24 = v23 - v15;
        if ( v24 && v24 != (_DWORD)v14 )
          goto LABEL_12;
        v22 = 4LL;
        goto LABEL_11;
      }
    }
    v22 = 3LL;
    goto LABEL_11;
  }
  return result;
}
