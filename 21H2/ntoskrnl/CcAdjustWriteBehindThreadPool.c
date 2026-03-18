/*
 * XREFs of CcAdjustWriteBehindThreadPool @ 0x14029D344
 * Callers:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14029E260 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     CcReEngageWorkerThreads @ 0x14025A794 (CcReEngageWorkerThreads.c)
 *     CcGetCurrentNumaNode @ 0x14029E3A0 (CcGetCurrentNumaNode.c)
 */

void __fastcall CcAdjustWriteBehindThreadPool(__int64 a1)
{
  __int64 CurrentNumaNode; // rax
  __int64 v2; // rcx
  char v3; // r9

  if ( (unsigned int)CcNumberNumaNodes <= 1 && CcEnablePerVolumeLazyWriter != 1 )
  {
    CurrentNumaNode = CcGetCurrentNumaNode(a1, 0LL);
    if ( v3 )
    {
      *(_DWORD *)(v2 + 1224) = 1;
      if ( *(_BYTE *)(CurrentNumaNode + 224) )
        *(_BYTE *)(CurrentNumaNode + 224) = 0;
    }
    else
    {
      *(_DWORD *)(v2 + 1224) = -1;
      if ( *(_QWORD *)(CurrentNumaNode + 104) != CurrentNumaNode + 104 && !*(_BYTE *)(CurrentNumaNode + 196) )
        CcReEngageWorkerThreads(v2, CurrentNumaNode, *(_DWORD *)(v2 + 776), 0);
    }
  }
}
