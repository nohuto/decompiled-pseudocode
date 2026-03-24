/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x14029B060
 * Callers:
 *     KiProcessExpiredTimerList @ 0x140247AA0 (KiProcessExpiredTimerList.c)
 *     KiExpireTimer2 @ 0x14024B5C0 (KiExpireTimer2.c)
 *     KiIpiSendRequest @ 0x14027AED0 (KiIpiSendRequest.c)
 *     KeDisableTimer2 @ 0x14027FC30 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14027FF5C (KiFinalizeTimer2Disablement.c)
 *     KiIpiProcessRequests @ 0x140291D70 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x1402A7EB0 (KeFlushIoBuffers.c)
 *     HvcallFastExtended @ 0x140390300 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x1403904C0 (HvcallInitiateHypercall.c)
 *     KiScanInterruptObjectList @ 0x1403FF9B0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FFB90 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FFCE0 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x140404CA0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404E00 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x140501130 (IopTimerDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14052196C (KiInvokeInterruptServiceRoutine.c)
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x1405F3E50 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405F48F0 (NtEnumerateValueKey.c)
 *     CmOpenKey @ 0x140655330 (CmOpenKey.c)
 *     NtSetValueKey @ 0x140663DC0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140665120 (CmpSecurityMethod.c)
 *     NtDeleteValueKey @ 0x140669100 (NtDeleteValueKey.c)
 *     CmpCloseKeyObject @ 0x14066AF80 (CmpCloseKeyObject.c)
 *     NtDeleteKey @ 0x14066C210 (NtDeleteKey.c)
 *     CmCreateKey @ 0x14066F690 (CmCreateKey.c)
 *     NtQueryMultipleValueKey @ 0x1406A1E20 (NtQueryMultipleValueKey.c)
 *     CmKtmNotification @ 0x1406A36F0 (CmKtmNotification.c)
 *     NtFlushKey @ 0x1406B3C40 (NtFlushKey.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1406F8570 (NtQueryKey.c)
 *     CmpReplicateKeyToVirtual @ 0x1408709C4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x140278F20 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, unsigned int a2)
{
  int v3; // ebx
  unsigned int v4; // r9d
  bool i; // zf
  unsigned int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

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
    result = 0LL;
  a1[1].QuadPart = result;
  if ( (v3 & 8) != 0 )
  {
    result = __rdtsc();
    a1[2].QuadPart = result;
  }
  else
  {
    a1[2].QuadPart = 0LL;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 *))off_140C009E0[0])(&v11);
    result = v11;
    a1[3].QuadPart = v11;
  }
  else
  {
    a1[3].QuadPart = 0LL;
  }
  return result;
}
