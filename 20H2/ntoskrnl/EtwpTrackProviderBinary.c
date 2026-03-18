/*
 * XREFs of EtwpTrackProviderBinary @ 0x1406DFDD8
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpProviderArrivalCallback @ 0x1406AFD98 (EtwpProviderArrivalCallback.c)
 */

NTSTATUS __fastcall EtwpTrackProviderBinary(__int64 a1, void **a2)
{
  void *v3; // rcx
  NTSTATUS result; // eax
  NTSTATUS v5; // esi
  PADAPTER_OBJECT v6; // rbx
  struct _KTHREAD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v15; // rax
  unsigned int *v16; // rbp
  unsigned int *v17; // rax
  unsigned int *v18; // rbp
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp+10h] BYREF

  v3 = *a2;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(v3, 0x800u, EtwpRegistrationObjectType, 1, (PVOID *)&DmaAdapter, 0LL);
  v5 = result;
  if ( result >= 0 )
  {
    v6 = DmaAdapter;
    if ( *(_QWORD *)(*(_QWORD *)&DmaAdapter[2].Version + 400LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(*(_QWORD *)&v6[2].Version + 400LL) + 408LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v6[2].Version + 400LL) + 416LL) = KeGetCurrentThread();
    }
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)&v6[2].Version + 408LL, 0LL);
    *(_QWORD *)(*(_QWORD *)&v6[2].Version + 416LL) = KeGetCurrentThread();
    if ( (DmaAdapter[6].Size & 0x20) != 0 )
    {
      v5 = 0;
    }
    else
    {
      _InterlockedOr16((volatile signed __int16 *)&DmaAdapter[6].Size, 0x20u);
      v8 = 0LL;
      v9 = 8LL;
      do
      {
        v10 = *(_QWORD *)&v6[2].Version;
        if ( *(_DWORD *)(v8 + v10 + 128) )
        {
          v15 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v8 + v10 + 134), 0);
          v16 = v15;
          if ( v15 )
          {
            EtwpProviderArrivalCallback((__int64)v15, 1, (__int64)DmaAdapter);
            EtwpReleaseLoggerContext(v16, 0);
          }
        }
        v11 = *(_QWORD *)&v6[2].Version;
        v12 = *(_QWORD *)(v11 + 400);
        if ( v12 )
        {
          if ( *(_DWORD *)(v8 + v12 + 128) )
          {
            v17 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v8 + v11 + 134), 0);
            v18 = v17;
            if ( v17 )
            {
              EtwpProviderArrivalCallback((__int64)v17, 1, (__int64)DmaAdapter);
              EtwpReleaseLoggerContext(v18, 0);
            }
          }
        }
        v8 += 32LL;
        --v9;
      }
      while ( v9 );
    }
    *(_QWORD *)(*(_QWORD *)&v6[2].Version + 416LL) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)&v6[2].Version + 408LL, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v13 = *(_QWORD *)(*(_QWORD *)&v6[2].Version + 400LL);
    if ( v13 )
    {
      *(_QWORD *)(v13 + 416) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(*(_QWORD *)&v6[2].Version + 400LL) + 408LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    HalPutDmaAdapter(DmaAdapter);
    return v5;
  }
  return result;
}
