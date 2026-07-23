/*
 * XREFs of CcAdjustWriteBehindThreadPool @ 0x140381478
 * Callers:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140341080 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     CcReEngageWorkerThreads @ 0x14037FFD0 (CcReEngageWorkerThreads.c)
 */

void __fastcall CcAdjustWriteBehindThreadPool(__int64 a1, char a2)
{
  if ( a2 )
  {
    *(_DWORD *)(a1 + 960) = 1;
    if ( *(_BYTE *)(a1 + 776) )
      *(_BYTE *)(a1 + 776) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 960) = -1;
    if ( *(_QWORD *)(a1 + 256) != a1 + 256 && !*(_BYTE *)(a1 + 352) )
      CcReEngageWorkerThreads(a1, *(_DWORD *)(a1 + 200), 0);
  }
}
