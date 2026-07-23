/*
 * XREFs of FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0A78
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14022B930 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14022BD50 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x14022D260 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14035FB50 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374620 (FsRtlpRequestExclusiveOplock.c)
 * Callees:
 *     IoReleaseCancelSpinLock @ 0x140202A00 (IoReleaseCancelSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x140219A60 (IoAcquireCancelSpinLock.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140246634 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpOplockEnqueueRH @ 0x1402AAB54 (FsRtlpOplockEnqueueRH.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     FsRtlpOplockDequeueRH @ 0x1403617F0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140374DC8 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403799C4 (FsRtlpModifyThreadPriorities.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v13; // rcx
  __int64 v14; // rbx

  v7 = P[2];
  P[2] = 0LL;
  v12 = 1;
  IoAcquireCancelSpinLock((PKIRQL)(v7 + 69));
  _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
  IoReleaseCancelSpinLock(*(_BYTE *)(v7 + 69));
  FsRtlpOplockDequeueRH((__int64)P);
  if ( *(_BYTE *)(v7 + 68) )
  {
    a3 = -1073741536;
    v12 = 0;
    HalPutDmaAdapter((PADAPTER_OBJECT)P[3]);
    if ( P[5] )
      FsRtlpClearOwner(a2, (__int64)P);
    ExFreePoolWithTag(P, 0);
    v14 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(v7 + 24);
    v14 = 24LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_DWORD *)v13 = 1572865;
    *(_DWORD *)(v13 + 4) = 3;
    *(_DWORD *)(v13 + 8) = (a4 >> 12) & 7;
    *(_DWORD *)(v13 + 12) = a5;
    if ( (a5 & 2) != 0 )
    {
      *(_DWORD *)(v13 + 16) = a6;
      *(_WORD *)(v13 + 20) = a7;
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
  *(_QWORD *)(v7 + 56) = v14;
  *(_DWORD *)(v7 + 48) = a3;
  IofCompleteRequest((PIRP)v7, 1);
  return v12;
}
