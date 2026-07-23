/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1402FB2A0
 * Callers:
 *     KiProcessExpiredTimerList @ 0x14028BA60 (KiProcessExpiredTimerList.c)
 *     KiExpireTimer2 @ 0x1402E01F0 (KiExpireTimer2.c)
 *     KiIpiSendRequest @ 0x1402EA7B0 (KiIpiSendRequest.c)
 *     KiIpiProcessRequests @ 0x1402F60F0 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x14030AE60 (KeFlushIoBuffers.c)
 *     KeDisableTimer2 @ 0x14033C330 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14033C5E0 (KiFinalizeTimer2Disablement.c)
 *     HvcallFastExtended @ 0x14038FE30 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14038FFF0 (HvcallInitiateHypercall.c)
 *     KiScanInterruptObjectList @ 0x1403FD6C0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FD8A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FD9F0 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x140402750 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404028B0 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x1404FF5B0 (IopTimerDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051FE8C (KiInvokeInterruptServiceRoutine.c)
 *     CmOpenKey @ 0x14060C320 (CmOpenKey.c)
 *     NtQueryValueKey @ 0x140618560 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140618FF0 (NtQueryKey.c)
 *     NtDeleteValueKey @ 0x140668FB0 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x14066EFA0 (CmpSecurityMethod.c)
 *     NtSetInformationKey @ 0x1406766B0 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x140676B10 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1406775B0 (NtEnumerateValueKey.c)
 *     CmKtmNotification @ 0x1406A3E40 (CmKtmNotification.c)
 *     NtQueryMultipleValueKey @ 0x1406A4AE0 (NtQueryMultipleValueKey.c)
 *     CmpCloseKeyObject @ 0x1406B1340 (CmpCloseKeyObject.c)
 *     NtFlushKey @ 0x1406BF640 (NtFlushKey.c)
 *     CmCreateKey @ 0x1406FF300 (CmCreateKey.c)
 *     NtDeleteKey @ 0x140701FA0 (NtDeleteKey.c)
 *     CmpReplicateKeyToVirtual @ 0x140873194 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1402D6A90 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
