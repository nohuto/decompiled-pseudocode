/*
 * XREFs of MiForceCrashForInvalidAccess @ 0x1408C0CA4
 * Callers:
 *     MiKernelWriteToExecutableMemory @ 0x1405434E4 (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PsGetProcessId @ 0x14026AB30 (PsGetProcessId.c)
 *     IoThreadToProcess @ 0x140296BB0 (IoThreadToProcess.c)
 *     ZwCreateThreadEx @ 0x1403F4DE0 (ZwCreateThreadEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     PsTerminateProcess @ 0x14065797C (PsTerminateProcess.c)
 *     PsFreezeProcess @ 0x1406F0C08 (PsFreezeProcess.c)
 *     DbgkQueueUserExceptionReport @ 0x140883720 (DbgkQueueUserExceptionReport.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140885A40 (DbgkWerCaptureLiveKernelDump.c)
 *     KeRequestTerminationProcess @ 0x1408B7C34 (KeRequestTerminationProcess.c)
 */

_QWORD *__fastcall MiForceCrashForInvalidAccess(PEPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v8[24]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE ThreadHandle; // [rsp+170h] [rbp+70h] BYREF
  PVOID Object; // [rsp+178h] [rbp+78h] BYREF

  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CurrentThread->ApcStateIndex == 1 || (CurrentThread->MiscFlags & 0x400) != 0 )
  {
    _m_prefetchw(&Process[1].DirectoryTableBase);
    DirectoryTableBase = Process[1].DirectoryTableBase;
    do
    {
      v4 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                             DirectoryTableBase | 0x4000000,
                             DirectoryTableBase);
    }
    while ( v4 != DirectoryTableBase );
    if ( (DirectoryTableBase & 0x4000000) == 0 )
    {
      if ( (HIDWORD(IoThreadToProcess(CurrentThread)[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        ProcessId = PsGetProcessId(Process);
        DbgkWerCaptureLiveKernelDump(L"MemoryManager", 26, 36864LL, -1073739994LL, (__int64)ProcessId, 0LL, 0LL, 0LL, 0);
      }
      else
      {
        memset(v8, 0, 0x98uLL);
        LODWORD(v8[0]) = -1073739994;
        LODWORD(v8[3]) = 1;
        v8[4] = PsGetProcessId(Process);
        DbgkQueueUserExceptionReport(CurrentThread, 0xEu, (__int64)v8);
      }
      PsFreezeProcess((__int64)Process, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             0LL,
             0LL,
             1u,
             0LL,
             0x1000uLL,
             0x1000uLL,
             0LL) < 0 )
      {
        PsTerminateProcess((ULONG_PTR)Process);
      }
      else
      {
        Object = 0LL;
        ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        KeRequestTerminationProcess((__int64)Object, 3);
        ObCloseHandle(ThreadHandle, 0);
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      }
    }
  }
  else
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 2);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
