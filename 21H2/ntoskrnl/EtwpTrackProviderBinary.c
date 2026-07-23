/*
 * XREFs of EtwpTrackProviderBinary @ 0x14061ED28
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     EtwpProviderArrivalCallback @ 0x14060964C (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
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
          v18 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v8 + v10 + 134), 0LL);
          v19 = v18;
          if ( v18 )
          {
            EtwpProviderArrivalCallback(v18, 1, (__int64)DmaAdapter);
            EtwpReleaseLoggerContext(v19, 0LL);
          }
        }
        v11 = *(_QWORD *)&v6[2].Version;
        v12 = *(_QWORD *)(v11 + 400);
        if ( v12 )
        {
          if ( *(_DWORD *)(v8 + v12 + 128) )
          {
            v20 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v8 + v11 + 134), 0LL);
            v21 = v20;
            if ( v20 )
            {
              EtwpProviderArrivalCallback(v20, 1, (__int64)DmaAdapter);
              EtwpReleaseLoggerContext(v21, 0LL);
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
    v16 = *(_QWORD *)(*(_QWORD *)&v6[2].Version + 400LL);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 416) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(*(_QWORD *)&v6[2].Version + 400LL) + 408LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
    }
    HalPutDmaAdapter(DmaAdapter);
    return v5;
  }
  return result;
}
