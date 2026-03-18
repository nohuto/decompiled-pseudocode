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

__int64 __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r11
  LARGE_INTEGER *v6; // rdi
  int v7; // ebx
  bool i; // zf
  __int64 v9; // r10
  __int64 v10; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v4 = qword_140D248A0;
  v5 = (unsigned int)a2;
  v6 = a1;
  v7 = 0;
  if ( qword_140D248A0 )
  {
    a4 = *(unsigned int *)(qword_140D248A0 + 4224);
    for ( i = !_BitScanForward((unsigned int *)&a1, a4); !i; i = !_BitScanForward((unsigned int *)&a1, a4) )
    {
      v9 = (unsigned int)a1;
      a4 = ((_DWORD)a4 - 1) & (unsigned int)a4;
      v10 = 32LL * (unsigned int)a1 + qword_140D248A0 + 4260;
      if ( v10 )
      {
        a2 = (unsigned int)v5 & *(_DWORD *)(v10 + 4 * (v5 >> 29));
        if ( (a2 & 0x1FFFFFFF) != 0 )
          v7 |= 1 << *(_BYTE *)(qword_140D248A0 + 2 * v9 + 4209);
      }
    }
  }
  else
  {
    LOBYTE(v7) = 30;
  }
  if ( (v7 & 2) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  *v6 = PerformanceCounter;
  if ( (v7 & 4) != 0 )
    result = RtlGetSystemTimePrecise(a1, a2, v4, a4);
  else
    result = 0LL;
  v6[1].QuadPart = result;
  if ( (v7 & 8) != 0 )
  {
    result = __rdtsc();
    v6[2].QuadPart = result;
  }
  else
  {
    v6[2].QuadPart = 0LL;
  }
  if ( (v7 & 0x10) != 0 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 *))off_140C009E0[0])(&v13);
    result = v13;
    v6[3].QuadPart = v13;
  }
  else
  {
    v6[3].QuadPart = 0LL;
  }
  return result;
}
