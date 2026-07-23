/*
 * XREFs of MiForceCrashForInvalidAccess @ 0x1408C4404
 * Callers:
 *     MiKernelWriteToExecutableMemory @ 0x140548BF4 (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     IoThreadToProcess @ 0x140224230 (IoThreadToProcess.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ZwCreateThreadEx @ 0x1403FBDC0 (ZwCreateThreadEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsFreezeProcess @ 0x140600364 (PsFreezeProcess.c)
 *     PsTerminateProcess @ 0x14061B628 (PsTerminateProcess.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     DbgkQueueUserExceptionReport @ 0x140886970 (DbgkQueueUserExceptionReport.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888C90 (DbgkWerCaptureLiveKernelDump.c)
 *     KeRequestTerminationProcess @ 0x1408BAE90 (KeRequestTerminationProcess.c)
 */

_QWORD *__fastcall MiForceCrashForInvalidAccess(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rdx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v8; // ett
  HANDLE ProcessId; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[24]; // [rsp+90h] [rbp-70h] BYREF
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
    v6 = 0x4000000LL;
    do
    {
      v8 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                             DirectoryTableBase | 0x4000000,
                             DirectoryTableBase);
    }
    while ( v8 != DirectoryTableBase );
    if ( (DirectoryTableBase & 0x4000000) == 0 )
    {
      if ( (HIDWORD(IoThreadToProcess(CurrentThread)[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        ProcessId = PsGetProcessId(Process);
        DbgkWerCaptureLiveKernelDump(L"MemoryManager", 26, 36864LL, -1073739994LL, (__int64)ProcessId, 0LL, 0LL, 0LL, 0);
      }
      else
      {
        memset(v12, 0, 0x98uLL);
        LODWORD(v12[0]) = -1073739994;
        LODWORD(v12[3]) = 1;
        v12[4] = PsGetProcessId(Process);
        DbgkQueueUserExceptionReport(CurrentThread, 0xEu, (__int64)v12);
      }
      PsFreezeProcess((ULONG_PTR)Process, 0);
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
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, a3, a4);
}
