/*
 * XREFs of MiReturnSystemVa @ 0x140305338
 * Callers:
 *     MiExpandPtes @ 0x140231448 (MiExpandPtes.c)
 *     MiReturnSystemPtes @ 0x140240318 (MiReturnSystemPtes.c)
 *     MmFreePoolMemory @ 0x140305598 (MmFreePoolMemory.c)
 *     MiReleaseSystemCacheView @ 0x14031AA4C (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 *     MiUnmapLargePages @ 0x140395434 (MiUnmapLargePages.c)
 *     MiDeleteBootRange @ 0x1403B52E8 (MiDeleteBootRange.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8F34 (MiGetPageTablesForLargeMap.c)
 *     MmFreeSecurePoolMemory @ 0x140545148 (MmFreeSecurePoolMemory.c)
 *     MiReleaseLargePteMappings @ 0x1405541FC (MiReleaseLargePteMappings.c)
 *     MiReleaseDriverPtes @ 0x14075FEB0 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140760064 (MiReserveDriverPtes.c)
 *     MiMapBBTMemory @ 0x140A562A8 (MiMapBBTMemory.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiMakeSystemRangeAvailable @ 0x140308264 (MiMakeSystemRangeAvailable.c)
 *     MiDeleteSystemPageTables @ 0x1403084AC (MiDeleteSystemPageTables.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rdi
  ULONG_PTR v10; // rbx
  int v11; // eax
  int AnyMultiplexedVm; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r10d
  __int64 v16; // rdx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rcx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  _QWORD v23[24]; // [rsp+30h] [rbp-E8h] BYREF

  memset(v23, 0, 0xB8uLL);
  v6 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v8 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v6 < v8 )
  {
    v9 = (__int64)(v8 << 25) >> 16;
    v10 = (__int64)(v6 << 25) >> 16;
    v11 = 2;
    WORD2(v23[0]) = 0;
    v23[2] = 0LL;
    v23[3] = 0LL;
    LODWORD(v23[1]) = 20;
    if ( a3 != 1 )
      v11 = 0;
    LODWORD(v23[0]) = v11;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
    v16 = a3 - v15;
    if ( a3 == v15 )
    {
      AnyMultiplexedVm = MiGetSessionVm(v13, v16, v14);
      goto LABEL_11;
    }
    v17 = v16 - 5;
    if ( v17 )
    {
      v18 = v17 - v14;
      if ( v18 )
      {
        v19 = (unsigned int)(v14 + 1);
        v20 = v18 - v15;
        if ( v20 )
        {
          v21 = v20 - v19;
          if ( v21 )
          {
            v22 = v21 - v15;
            if ( v22 )
            {
              if ( v22 != v15 )
                goto LABEL_11;
              v19 = 4LL;
            }
          }
          else
          {
            v19 = v15;
          }
        }
      }
      else
      {
        v19 = 0LL;
      }
    }
    else
    {
      v19 = (unsigned int)v14;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v19);
LABEL_11:
    MiDeleteSystemPageTables(AnyMultiplexedVm, a3, v10, v9 - 1, v15, (__int64)v23);
    return MiMakeSystemRangeAvailable(v10, v9 - v10);
  }
  return result;
}
