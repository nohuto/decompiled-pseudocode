/*
 * XREFs of CmpInitializeRegistryProcess @ 0x1407C1D6C
 * Callers:
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     CmSiProcessTupleInitialize @ 0x140331D84 (CmSiProcessTupleInitialize.c)
 *     ExInitializeLookasideListEx @ 0x1403388A0 (ExInitializeLookasideListEx.c)
 *     MmAdjustWorkingSetSize @ 0x1403C86E0 (MmAdjustWorkingSetSize.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1403C870C (CmSiProcessTupleStartFromHandle.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1403F84F0 (ZwSetInformationProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 *     CmpCreateRegistryThread @ 0x1407900E4 (CmpCreateRegistryThread.c)
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x1407C23A4 (CmpCreateRegistryProcessToken.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  HANDLE v0; // rdi
  int MinimalProcess; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  HANDLE ProcessHandle; // [rsp+60h] [rbp-1h] BYREF
  HANDLE v7; // [rsp+68h] [rbp+7h] BYREF
  HANDLE ProcessInformation[2]; // [rsp+70h] [rbp+Fh] BYREF
  _OWORD v9[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v9, 0, sizeof(v9));
  Object = 0LL;
  v0 = 0LL;
  ProcessHandle = 0LL;
  v7 = 0LL;
  *(_OWORD *)ProcessInformation = 0LL;
  CmSiProcessTupleInitialize();
  MinimalProcess = CmpCreateRegistryProcessToken(&Object);
  if ( MinimalProcess >= 0 )
  {
    MinimalProcess = PsCreateMinimalProcess(PsInitialSystemProcess, 0LL, 0, 0, 0LL, 0LL, (__int64)&ProcessHandle);
    if ( MinimalProcess < 0
      || (MinimalProcess = ObOpenObjectByPointer(
                             Object,
                             0x200u,
                             0LL,
                             1u,
                             (POBJECT_TYPE)SeTokenObjectType,
                             0,
                             ProcessInformation),
          MinimalProcess < 0) )
    {
      v0 = ProcessHandle;
    }
    else
    {
      v0 = ProcessHandle;
      MinimalProcess = ZwSetInformationProcess(ProcessHandle, ProcessAccessToken, ProcessInformation, 0x10u);
      if ( MinimalProcess >= 0 )
      {
        MinimalProcess = CmSiProcessTupleStartFromHandle(v2, v0);
        if ( MinimalProcess >= 0 )
        {
          v0 = 0LL;
          CmpAttachToRegistryProcess((__int64)v9);
          MmAdjustWorkingSetSize(0x4000000uLL, 0x4000000uLL, 0, 1);
          KiUnstackDetachProcess((__int64)v9, 0);
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          MinimalProcess = CmpCreateRegistryThread((__int64)&v7, v3, (__int64)CmpDummyThreadRoutine, 0LL);
          if ( MinimalProcess >= 0 )
          {
            MinimalProcess = ExInitializeLookasideListEx(
                               (PLOOKASIDE_LIST_EX)&CmpBounceBufferLookaside,
                               (PALLOCATE_FUNCTION_EX)CmpAllocateTransientPoolWithTag,
                               (PFREE_FUNCTION_EX)CmSiFreeMemory,
                               PagedPool,
                               0,
                               0x1000uLL,
                               0x42424D43u,
                               0);
            if ( MinimalProcess >= 0 )
              MinimalProcess = 0;
          }
        }
      }
    }
  }
  if ( Object )
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  if ( ProcessInformation[0] )
    ZwClose(ProcessInformation[0]);
  if ( v7 )
    ZwClose(v7);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)MinimalProcess;
}
