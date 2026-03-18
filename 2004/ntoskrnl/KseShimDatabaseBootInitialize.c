/*
 * XREFs of KseShimDatabaseBootInitialize @ 0x140A6E9D4
 * Callers:
 *     KseInitialize @ 0x140A38D38 (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x14036F934 (KsepLogError.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KsepDebugPrint @ 0x140521A38 (KsepDebugPrint.c)
 *     RtlAssert @ 0x1405834A0 (RtlAssert.c)
 *     KsepSdbBootRelease @ 0x1407AA168 (KsepSdbBootRelease.c)
 *     KsepSdbBootInitialize @ 0x1407BF398 (KsepSdbBootInitialize.c)
 */

__int64 __fastcall KseShimDatabaseBootInitialize(void *Src, size_t Size, void *a3, unsigned int a4)
{
  unsigned int v6; // ebx
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v6 = Size;
  if ( KsepShimDbDuringBoot )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 590051;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KsepShimDbDuringBoot == FALSE", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE3u, 0LL);
  }
  if ( KsepShimDbHandle )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v11 + 1] = -1073740768;
    KsepHistoryErrors[2 * v11] = 590052;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KsepShimDbHandle == NULL", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE4u, 0LL);
  }
  KsepShimDbLock = 0LL;
  KsepShimDbHandle = 0LL;
  KsepShimDbDuringBoot = 1;
  memset(KsepShimDb, 0, 0x70uLL);
  if ( Src && v6 )
  {
    v8 = KsepSdbBootInitialize(Src, v6, (__int64)KsepShimDb);
    if ( v8 >= 0 )
    {
      if ( a3 && a4 )
      {
        if ( (int)KsepSdbBootInitialize(a3, a4, (__int64)qword_140C2ACB8) < 0 )
        {
          v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v12 + 1] = v8;
          KsepHistoryErrors[2 * v12] = 590110;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(1LL, "KSE: KsepSdbBootInitialize failed for patch SDB!\n");
          KsepLogError(1, "KSE: KsepSdbBootInitialize failed for patch SDB!\n");
        }
        else if ( dword_140C2ACB0 >= (unsigned int)dword_140C2ACE8 )
        {
          KsepSdbBootRelease(qword_140C2ACB8);
        }
      }
      ++KsepShimDbRefCount;
      v8 = 0;
      KsepShimDbHandle = (__int64)KsepShimDb;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
