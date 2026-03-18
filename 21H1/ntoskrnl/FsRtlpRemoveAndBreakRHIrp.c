/*
 * XREFs of FsRtlpRemoveAndBreakRHIrp @ 0x1402F56F8
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x140255A70 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestShareableOplock @ 0x14025A570 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1402F5590 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x1402F5884 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1402FF660 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140373290 (FsRtlpRequestExclusiveOplock.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     FsRtlpOplockEnqueueRH @ 0x14025AF44 (FsRtlpOplockEnqueueRH.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockDequeueRH @ 0x1402F5C84 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x1402F5CF4 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x140376ED4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140377810 (FsRtlpOplockSendModernAppTermination.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndBreakRHIrp(
        _QWORD *P,
        __int64 a2,
        char a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        __int16 a8)
{
  __int64 v8; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // r8

  v8 = P[2];
  P[2] = 0LL;
  if ( a3 )
  {
    *(_BYTE *)(v8 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v8 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v8 + 69));
  }
  FsRtlpOplockDequeueRH(P);
  if ( *(_BYTE *)(v8 + 68) )
  {
    ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
    if ( P[5] )
      FsRtlpClearOwner(a2, P);
    ExFreePoolWithTag(P, 0);
    v13 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 24);
    v13 = 24LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)v12 = 1572865;
    *(_DWORD *)(v12 + 4) = 3;
    *(_DWORD *)(v12 + 8) = (a5 >> 12) & 7;
    *(_DWORD *)(v12 + 12) = a6;
    if ( (a6 & 2) != 0 )
    {
      *(_DWORD *)(v12 + 16) = a7;
      *(_WORD *)(v12 + 20) = a8;
    }
    if ( (a6 & 1) != 0 )
    {
      *((_DWORD *)P + 12) = P[6] & 0xFF0FFFFF | (a5 != 0 ? 0x100000 : 0x800000);
      FsRtlpOplockEnqueueRH((__int64 *)(a2 + 72), P);
      LOBYTE(v15) = 1;
      FsRtlpModifyThreadPriorities(a2, P, v15);
      FsRtlpOplockSendModernAppTermination(a2, P);
    }
    else
    {
      ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
      if ( P[5] )
        FsRtlpClearOwner(a2, P);
      ExFreePoolWithTag(P, 0);
    }
  }
  *(_QWORD *)(v8 + 56) = v13;
  v14 = -1073741536;
  if ( !*(_BYTE *)(v8 + 68) )
    v14 = a4;
  *(_DWORD *)(v8 + 48) = v14;
  IofCompleteRequest((PIRP)v8, 1);
}
