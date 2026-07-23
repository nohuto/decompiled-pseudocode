/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1402EE940
 * Callers:
 *     KiExpireTimer2 @ 0x140243360 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x140244DA0 (KiProcessExpiredTimerList.c)
 *     KiIpiProcessRequests @ 0x1402EC760 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x1402FB650 (KeFlushIoBuffers.c)
 *     KiIpiSendRequest @ 0x140359160 (KiIpiSendRequest.c)
 *     KeDisableTimer2 @ 0x14035B750 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14035BA00 (KiFinalizeTimer2Disablement.c)
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     KiScanInterruptObjectList @ 0x1403F7370 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403F7550 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F76A0 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1403FB7D0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1403FB930 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x1404FB690 (IopTimerDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051BE6C (KiInvokeInterruptServiceRoutine.c)
 *     CmOpenKey @ 0x1405EA950 (CmOpenKey.c)
 *     NtQueryKey @ 0x1405EBF30 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     NtSetInformationKey @ 0x1405FA5C0 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x1405FAA20 (NtEnumerateKey.c)
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140619DF0 (CmpSecurityMethod.c)
 *     NtEnumerateValueKey @ 0x14061E420 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1406572C0 (NtQueryMultipleValueKey.c)
 *     CmKtmNotification @ 0x140658680 (CmKtmNotification.c)
 *     CmCreateKey @ 0x14068D940 (CmCreateKey.c)
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 *     CmpCloseKeyObject @ 0x1406B8480 (CmpCloseKeyObject.c)
 *     NtFlushKey @ 0x1406DFA70 (NtFlushKey.c)
 *     CmpReplicateKeyToVirtual @ 0x14086C20C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x140355570 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
