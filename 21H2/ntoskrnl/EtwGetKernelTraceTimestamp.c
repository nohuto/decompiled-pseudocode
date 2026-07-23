/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1402129F0
 * Callers:
 *     KiIpiProcessRequests @ 0x14020FCE0 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x140225FF0 (KeFlushIoBuffers.c)
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
 *     KeDisableTimer2 @ 0x14026DE70 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14026E19C (KiFinalizeTimer2Disablement.c)
 *     KiProcessExpiredTimerList @ 0x1402EC2F0 (KiProcessExpiredTimerList.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     KiScanInterruptObjectList @ 0x1403FFB90 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FFD70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FFEC0 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x140404E80 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404FE0 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x1405010B0 (IopTimerDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140521BAC (KiInvokeInterruptServiceRoutine.c)
 *     CmKtmNotification @ 0x1405E11C0 (CmKtmNotification.c)
 *     NtQueryMultipleValueKey @ 0x140601D50 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140612E10 (NtFlushKey.c)
 *     CmOpenKey @ 0x14064A150 (CmOpenKey.c)
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140659F40 (CmpSecurityMethod.c)
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 *     CmpCloseKeyObject @ 0x14065FDA0 (CmpCloseKeyObject.c)
 *     NtDeleteKey @ 0x140661030 (NtDeleteKey.c)
 *     CmCreateKey @ 0x140665B70 (CmCreateKey.c)
 *     NtSetInformationKey @ 0x1406E3160 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x1406E35B0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1406E4050 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14070F950 (NtQueryKey.c)
 *     CmpReplicateKeyToVirtual @ 0x140870B24 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140266EC0 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, unsigned int a2)
{
  int v3; // ebx
  unsigned int v4; // r9d
  bool i; // zf
  unsigned int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  if ( qword_140D248A0 )
  {
    v4 = *(_DWORD *)(qword_140D248A0 + 4224);
    for ( i = !_BitScanForward(&v6, v4); !i; i = !_BitScanForward(&v6, v4) )
    {
      v7 = v6;
      v4 &= v4 - 1;
      v8 = 32LL * v6 + qword_140D248A0 + 4260;
      if ( v8 && (a2 & *(_DWORD *)(v8 + 4 * ((unsigned __int64)a2 >> 29)) & 0x1FFFFFFF) != 0 )
        v3 |= 1 << *(_BYTE *)(qword_140D248A0 + 2 * v7 + 4209);
    }
  }
  else
  {
    LOBYTE(v3) = 30;
  }
  if ( (v3 & 2) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  *a1 = PerformanceCounter;
  if ( (v3 & 4) != 0 )
    result = RtlGetSystemTimePrecise();
  else
    result.QuadPart = 0LL;
  a1[1] = result;
  if ( (v3 & 8) != 0 )
  {
    result.QuadPart = __rdtsc();
    a1[2] = result;
  }
  else
  {
    a1[2].QuadPart = 0LL;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v11.QuadPart = 0LL;
    ((void (__fastcall *)(LARGE_INTEGER *))off_140C009E0[0])(&v11);
    result = v11;
    a1[3] = v11;
  }
  else
  {
    a1[3].QuadPart = 0LL;
  }
  return result;
}
