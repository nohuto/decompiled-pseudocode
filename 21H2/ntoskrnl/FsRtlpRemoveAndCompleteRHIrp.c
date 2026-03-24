/*
 * XREFs of FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0B48
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402057F0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockCleanup @ 0x1402AD5D0 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1402AD9F0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x1402AEF00 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140354E00 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374AD0 (FsRtlpRequestExclusiveOplock.c)
 * Callees:
 *     FsRtlpOplockEnqueueRH @ 0x140206224 (FsRtlpOplockEnqueueRH.c)
 *     IofCompleteRequest @ 0x140243490 (IofCompleteRequest.c)
 *     IoReleaseCancelSpinLock @ 0x140285860 (IoReleaseCancelSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x14029CF20 (IoAcquireCancelSpinLock.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1402C7DD4 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpOplockDequeueRH @ 0x140356AA0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140375278 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x140379E74 (FsRtlpModifyThreadPriorities.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

char __fastcall FsRtlpRemoveAndCompleteRHIrp(
        _QWORD *P,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int16 a7)
{
  __int64 v7; // rsi
  char v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx

  v7 = P[2];
  P[2] = 0LL;
  v12 = 1;
  IoAcquireCancelSpinLock((PKIRQL)(v7 + 69));
  _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
  IoReleaseCancelSpinLock(*(_BYTE *)(v7 + 69));
  FsRtlpOplockDequeueRH((__int64)P, v13, v14);
  if ( *(_BYTE *)(v7 + 68) )
  {
    a3 = -1073741536;
    v12 = 0;
    HalPutDmaAdapter((PADAPTER_OBJECT)P[3]);
    if ( P[5] )
      FsRtlpClearOwner(a2, (__int64)P);
    ExFreePoolWithTag(P, 0);
    v16 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v7 + 24);
    v16 = 24LL;
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_DWORD *)v15 = 1572865;
    *(_DWORD *)(v15 + 4) = 3;
    *(_DWORD *)(v15 + 8) = (a4 >> 12) & 7;
    *(_DWORD *)(v15 + 12) = a5;
    if ( (a5 & 2) != 0 )
    {
      *(_DWORD *)(v15 + 16) = a6;
      *(_WORD *)(v15 + 20) = a7;
    }
    if ( (a5 & 1) != 0 )
    {
      *((_DWORD *)P + 12) = P[6] & 0xFF0FFFFF | (a4 != 0 ? 0x100000 : 0x800000);
      FsRtlpOplockEnqueueRH((__int64 *)(a2 + 72), P);
      FsRtlpModifyThreadPriorities(a2, (__int64)P, 1);
      FsRtlpOplockSendModernAppTermination(a2, (__int64)P);
    }
    else
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)P[3]);
      if ( P[5] )
        FsRtlpClearOwner(a2, (__int64)P);
      ExFreePoolWithTag(P, 0);
    }
  }
  *(_QWORD *)(v7 + 56) = v16;
  *(_DWORD *)(v7 + 48) = a3;
  IofCompleteRequest((PIRP)v7, 1);
  return v12;
}
