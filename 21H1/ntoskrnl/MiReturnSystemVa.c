/*
 * XREFs of MiReturnSystemVa @ 0x1402AA5DC
 * Callers:
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x14022F3DC (MiReleaseSystemCacheView.c)
 *     MmFreePoolMemory @ 0x1402AC0AC (MmFreePoolMemory.c)
 *     MiReturnSystemPtes @ 0x1402E6E74 (MiReturnSystemPtes.c)
 *     MiExpandPtes @ 0x140300D04 (MiExpandPtes.c)
 *     MiUnmapLargePages @ 0x140391E04 (MiUnmapLargePages.c)
 *     MiDeleteBootRange @ 0x1403AB508 (MiDeleteBootRange.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B4BA4 (MiGetPageTablesForLargeMap.c)
 *     MmFreeSecurePoolMemory @ 0x14053F3E4 (MmFreeSecurePoolMemory.c)
 *     MiReleaseLargePteMappings @ 0x14054E4CC (MiReleaseLargePteMappings.c)
 *     MiReleaseDriverPtes @ 0x140748668 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x14074881C (MiReserveDriverPtes.c)
 *     MiMapBBTMemory @ 0x140A4D920 (MiMapBBTMemory.c)
 * Callees:
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiMakeSystemRangeAvailable @ 0x140301AE8 (MiMakeSystemRangeAvailable.c)
 *     MiDeleteSystemPageTables @ 0x14030FF24 (MiDeleteSystemPageTables.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rdi
  ULONG_PTR v10; // rbx
  int v11; // eax
  unsigned int AnyMultiplexedVm; // eax
  int v13; // r8d
  int v14; // r10d
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  _QWORD v20[24]; // [rsp+30h] [rbp-E8h] BYREF

  memset(v20, 0, 0xB8uLL);
  v6 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v8 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v6 < v8 )
  {
    v9 = (__int64)(v8 << 25) >> 16;
    v10 = (__int64)(v6 << 25) >> 16;
    v11 = 2;
    WORD2(v20[0]) = 0;
    v20[2] = 0LL;
    v20[3] = 0LL;
    LODWORD(v20[1]) = 20;
    if ( a3 != 1 )
      v11 = 0;
    LODWORD(v20[0]) = v11;
    AnyMultiplexedVm = (unsigned int)MiGetAnyMultiplexedVm(5);
    if ( a3 == v14 )
    {
      AnyMultiplexedVm = MiGetSessionVm();
      goto LABEL_11;
    }
    if ( a3 - v14 == 5 )
    {
      v16 = v13;
    }
    else
    {
      v15 = a3 - v14 - 5 - v13;
      if ( v15 )
      {
        v16 = v13 + 1;
        v17 = v15 - v14;
        if ( v17 )
        {
          v18 = v17 - v16;
          if ( v18 )
          {
            v19 = v18 - v14;
            if ( v19 )
            {
              if ( v19 != v14 )
                goto LABEL_11;
              v16 = 4;
            }
          }
          else
          {
            v16 = v14;
          }
        }
      }
      else
      {
        v16 = 0;
      }
    }
    AnyMultiplexedVm = (unsigned int)MiGetAnyMultiplexedVm(v16);
LABEL_11:
    MiDeleteSystemPageTables(AnyMultiplexedVm, a3, v10, v9 - 1, v14, (__int64)v20);
    return MiMakeSystemRangeAvailable(v10, v9 - v10);
  }
  return result;
}
