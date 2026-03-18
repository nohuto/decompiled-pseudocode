/*
 * XREFs of FsRtlpRemoveAndCompleteRHIrp @ 0x1404173E4
 * Callers:
 *     FsRtlUninitializeOplock @ 0x14023A260 (FsRtlUninitializeOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14024E6F0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x1402A2490 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockCleanup @ 0x1402A30D0 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402A4E10 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403857EC (FsRtlpRequestExclusiveOplock.c)
 * Callees:
 *     IoAcquireCancelSpinLock @ 0x14022A5C0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwner @ 0x140240DB4 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14024A390 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14024C370 (FsRtlpOplockSendModernAppTermination.c)
 *     IoReleaseCancelSpinLock @ 0x1402A23F0 (IoReleaseCancelSpinLock.c)
 *     FsRtlpOplockEnqueueRH @ 0x1402A2E8C (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpOplockDequeueRH @ 0x1402A386C (FsRtlpOplockDequeueRH.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  __int64 v15; // r8

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
    ObfDereferenceObject((PVOID)P[3]);
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
      LOBYTE(v15) = 1;
      FsRtlpModifyThreadPriorities(a2, (__int64)P, v15);
      FsRtlpOplockSendModernAppTermination(a2, (__int64)P);
    }
    else
    {
      ObfDereferenceObject((PVOID)P[3]);
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
