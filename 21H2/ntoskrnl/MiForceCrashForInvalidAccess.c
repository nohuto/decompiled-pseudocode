/*
 * XREFs of MiForceCrashForInvalidAccess @ 0x140967E00
 * Callers:
 *     MiKernelWriteToExecutableMemory @ 0x1405A7608 (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402321F0 (IoThreadToProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     ZwCreateThreadEx @ 0x14041D020 (ZwCreateThreadEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsFreezeProcess @ 0x1406C03F0 (PsFreezeProcess.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PsTerminateProcess @ 0x1407D80A4 (PsTerminateProcess.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkQueueUserExceptionReport @ 0x14092972C (DbgkQueueUserExceptionReport.c)
 *     KeRequestTerminationProcess @ 0x140961390 (KeRequestTerminationProcess.c)
 */

_QWORD *__fastcall MiForceCrashForInvalidAccess(PEPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rax
  _QWORD v7[24]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+170h] [rbp+70h] BYREF
  PVOID Object; // [rsp+178h] [rbp+78h] BYREF

  Handle = 0LL;
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
        memset(v7, 0, 0x98uLL);
        LODWORD(v7[0]) = -1073739994;
        LODWORD(v7[3]) = 1;
        v7[4] = PsGetProcessId(Process);
        DbgkQueueUserExceptionReport((__int64)CurrentThread, 0xEu, (__int64)v7);
      }
      PsFreezeProcess((ULONG_PTR)Process, 0);
      if ( (int)ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL) < 0 )
      {
        PsTerminateProcess((__int64)Process, 0xC0000725);
      }
      else
      {
        Object = 0LL;
        ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        KeRequestTerminationProcess((__int64)Object, 3);
        ObCloseHandle(Handle, 0);
        ObfDereferenceObject(Object);
      }
    }
  }
  else
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 2);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
