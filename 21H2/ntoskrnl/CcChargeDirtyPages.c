/*
 * XREFs of CcChargeDirtyPages @ 0x140340F60
 * Callers:
 *     CcSetDirtyPinnedData @ 0x140304060 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1403927C0 (CcAddDirtyPagesToExternalCache.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     MmGetControlAreaPartition @ 0x14033D860 (MmGetControlAreaPartition.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140341080 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcChargeDirtyPages(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rsi
  __int64 v8; // rdi

  v4 = (unsigned int)a4;
  if ( a1 )
  {
    v8 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(a1 + 168)
      && v8 != *(_QWORD *)(MmGetControlAreaPartition(
                             *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28),
                             a2,
                             a3,
                             a4)
                         + 8) )
    {
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
  }
  else
  {
    v8 = *((_QWORD *)PspSystemPartition + 1);
  }
  *(_QWORD *)(v8 + 640) += v4;
  if ( a2 )
    *(_DWORD *)(a2 + 8) += v4;
  if ( a3 )
    *(_DWORD *)(a3 + 32) += v4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 112) += v4;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 504) + 32LL), v4);
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 240) + 24LL), v4);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
  }
  if ( *(_BYTE *)(v8 + 964) && *(_QWORD *)(v8 + 640) >= 0x2000uLL )
    CcScheduleLazyWriteScan(v8, 1, 0);
  if ( *(_BYTE *)(v8 + 140) )
  {
    CcScheduleLazyWriteScan(v8, 0, 0);
    *(_BYTE *)(v8 + 140) = 0;
  }
  return CcAdjustWriteBehindThreadPoolIfNeeded(v8, 0LL);
}
