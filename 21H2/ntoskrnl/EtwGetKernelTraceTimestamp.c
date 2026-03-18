/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x140223A20
 * Callers:
 *     KiIpiProcessRequests @ 0x140222E70 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 *     KeDisableTimer2 @ 0x1402D40E4 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x1402D43F4 (KiFinalizeTimer2Disablement.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 *     KiIpiSendRequest @ 0x1402FFB70 (KiIpiSendRequest.c)
 *     HvcallFastExtended @ 0x14039DD80 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     IopTimerDispatch @ 0x1403A06D0 (IopTimerDispatch.c)
 *     KiScanInterruptObjectList @ 0x140421050 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140421230 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140421380 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1404270A0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140427200 (KiVmbusInterruptSubDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140576200 (KiInvokeInterruptServiceRoutine.c)
 *     NtDeleteKey @ 0x14067DE90 (NtDeleteKey.c)
 *     CmCreateKey @ 0x14067F8D0 (CmCreateKey.c)
 *     NtEnumerateValueKey @ 0x1406A1370 (NtEnumerateValueKey.c)
 *     NtFlushKey @ 0x1406A5C00 (NtFlushKey.c)
 *     NtQueryMultipleValueKey @ 0x140713980 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     CmpCloseKeyObject @ 0x140718E30 (CmpCloseKeyObject.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140721010 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 *     CmKtmNotification @ 0x140741CF0 (CmKtmNotification.c)
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x1407C1130 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1407CABA0 (CmOpenKey.c)
 *     CmpReplicateKeyToVirtual @ 0x1409174A4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14022DB00 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  LARGE_INTEGER *v3; // rdi
  char v4; // bl
  unsigned int v5; // eax
  bool i; // zf
  __int64 v7; // r8
  unsigned __int64 v8; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = (unsigned int)a2;
  v3 = (LARGE_INTEGER *)a1;
  LODWORD(v11) = 0;
  v4 = 0;
  if ( qword_140D328E0 )
  {
    v5 = *(_DWORD *)(qword_140D328E0 + 4248);
    for ( i = !_BitScanForward((unsigned int *)&v7, v5); !i; i = !_BitScanForward((unsigned int *)&v7, v5) )
    {
      v5 &= v5 - 1;
      a2 = 32LL * (unsigned int)v7;
      a1 = (unsigned int)v7;
      v8 = a2 + qword_140D328E0 + 4284;
      if ( v8 )
      {
        a2 = v2 >> 29;
        if ( ((unsigned int)v2 & *(_DWORD *)(v8 + 4 * (v2 >> 29)) & 0x1FFFFFFF) != 0 )
        {
          a1 = *(unsigned __int8 *)(qword_140D328E0 + 2 * a1 + 4233);
          a2 = (unsigned int)(1 << a1);
          v4 |= a2;
        }
      }
    }
    if ( (v4 & 2) == 0 )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
    v4 = 30;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_9:
  *v3 = PerformanceCounter;
  if ( (v4 & 4) != 0 )
    result = RtlGetSystemTimePrecise(a1, a2, v7);
  else
    result = 0LL;
  v3[1].QuadPart = result;
  if ( (v4 & 8) != 0 )
  {
    result = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(result) << 32;
    v3[2].QuadPart = result;
  }
  else
  {
    v3[2].QuadPart = 0LL;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 *, unsigned __int64, __int64))off_140C02030[0])(&v11, a2, v7);
    result = v11;
    v3[3].QuadPart = v11;
  }
  else
  {
    v3[3].QuadPart = 0LL;
  }
  return result;
}
