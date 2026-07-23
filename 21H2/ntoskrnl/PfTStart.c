/*
 * XREFs of PfTStart @ 0x1407BFF5C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406B3034 (PfSetSuperfetchInformation.c)
 *     PfpParametersPropagate @ 0x1408E0C34 (PfpParametersPropagate.c)
 * Callees:
 *     PfFbBufferListUpdateMax @ 0x1402521D8 (PfFbBufferListUpdateMax.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     PfFbBufferListAllocate @ 0x1403C5454 (PfFbBufferListAllocate.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsEnumProcesses @ 0x1406A5350 (PsEnumProcesses.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     PfTInitialize @ 0x1407BF25C (PfTInitialize.c)
 *     PfTAllocateBuffers @ 0x1407C01F4 (PfTAllocateBuffers.c)
 *     PfpCreateEvent @ 0x1407C036C (PfpCreateEvent.c)
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 *     PfTAccessTracingStart @ 0x140991448 (PfTAccessTracingStart.c)
 */

__int64 __fastcall PfTStart(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int SystemThread; // esi
  HANDLE v6; // rcx
  _SLIST_ENTRY *v7; // rcx
  _SLIST_ENTRY *v8; // rcx
  __int64 v10; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v3 = a3;
  DestinationString = 0LL;
  if ( (a3 & 1) != 0 && (xmmword_140C50144 & 1) == 0 )
    v3 = a3 & 0xFFFFFFFE;
  if ( (v3 & 2) != 0 && (xmmword_140C50144 & 1) == 0 && (_DWORD)qword_140C50160 != 1 && HIDWORD(qword_140C50160) != 1 )
    v3 &= ~2u;
  if ( (v3 & 1) != 0 )
  {
    SystemThread = PfTAllocateBuffers(a1 + 24, 0x8000LL, 8LL, 1112303184LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    SystemThread = PfTAllocateBuffers(a1 + 64, 81960LL, 2LL, 1413834320LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&Handle,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)PfTLoggingWorker,
                     a1 + 104,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v6 = Handle;
    *(_QWORD *)(a1 + 104) = Object;
    ObCloseHandle(v6, 0);
  }
  if ( (v3 & 3) != 0 && !*(_QWORD *)(a1 + 616) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchTracesReady");
    SystemThread = PfpCreateEvent(&DestinationString, 1LL, a1 + 616);
    if ( SystemThread < 0 )
    {
LABEL_30:
      PfTCleanup(a1);
      PfTInitialize((_QWORD *)a1, v10, 1);
      return (unsigned int)SystemThread;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 352, 0x100000);
    PfFbBufferListAllocate(v7, ((_DWORD)KeNumberProcessors_0 + 2) << 12, 2 * KeNumberProcessors_0 + 4);
  }
  if ( (v3 & 2) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 224, 0x1000000);
    PfFbBufferListAllocate(v8, ((_DWORD)KeNumberProcessors_0 + 7) << 15, 2 * KeNumberProcessors_0 + 14);
  }
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 540) = HIDWORD(xmmword_140C50144);
    if ( dword_140C4FE18 < (unsigned int)dword_140C4FE1C )
      PfTAccessTracingStart(a1, &PfKernelGlobals, 2LL);
  }
  if ( (v3 & 2) != 0 )
    *(_DWORD *)(a1 + 548) = DWORD2(xmmword_140C50144);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 8) |= v3;
  if ( (v3 & 1) != 0 )
  {
    _InterlockedOr(v11, 0);
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PfCalculateProcessHash, 0LL);
    PfTAccessTracingStart(a1, &PfKernelGlobals, 1LL);
  }
  return 0;
}
