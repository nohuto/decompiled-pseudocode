/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x140328270
 * Callers:
 *     KeDisableTimer2 @ 0x1402755A0 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x140275850 (KiFinalizeTimer2Disablement.c)
 *     KiExpireTimer2 @ 0x14027FA60 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x140281580 (KiProcessExpiredTimerList.c)
 *     KiIpiSendRequest @ 0x1402FD180 (KiIpiSendRequest.c)
 *     KiIpiProcessRequests @ 0x140326090 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x140338680 (KeFlushIoBuffers.c)
 *     HvcallFastExtended @ 0x14038D940 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14038DB00 (HvcallInitiateHypercall.c)
 *     KiScanInterruptObjectList @ 0x1403F8600 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403F87E0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F8930 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1403FCA60 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1403FCBC0 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x1404FBCE0 (IopTimerDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051C4BC (KiInvokeInterruptServiceRoutine.c)
 *     NtDeleteValueKey @ 0x1405DD640 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405E3650 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1405E47D0 (CmpSecurityMethod.c)
 *     NtEnumerateValueKey @ 0x1405E8E00 (NtEnumerateValueKey.c)
 *     NtDeleteKey @ 0x140643C50 (NtDeleteKey.c)
 *     CmCreateKey @ 0x140651FB0 (CmCreateKey.c)
 *     CmKtmNotification @ 0x140653D20 (CmKtmNotification.c)
 *     NtQueryMultipleValueKey @ 0x140654D60 (NtQueryMultipleValueKey.c)
 *     NtSetInformationKey @ 0x1406726A0 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x140672B00 (NtEnumerateKey.c)
 *     CmOpenKey @ 0x140693E90 (CmOpenKey.c)
 *     NtQueryKey @ 0x140695470 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140695B10 (NtQueryValueKey.c)
 *     CmpCloseKeyObject @ 0x1406D7580 (CmpCloseKeyObject.c)
 *     NtFlushKey @ 0x140702800 (NtFlushKey.c)
 *     CmpReplicateKeyToVirtual @ 0x14086D55C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1402F9590 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
