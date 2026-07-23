/*
 * XREFs of CmpInitializeRegistryProcess @ 0x140781E8C
 * Callers:
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     ExInitializeLookasideListEx @ 0x1402FD800 (ExInitializeLookasideListEx.c)
 *     CmSiProcessTupleInitialize @ 0x140360F84 (CmSiProcessTupleInitialize.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1403AB79C (CmSiProcessTupleStartFromHandle.c)
 *     MmAdjustWorkingSetSize @ 0x1403AB810 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1403F3940 (ZwSetInformationProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     CmpCreateRegistryProcessToken @ 0x1407817F8 (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryThread @ 0x140782DE4 (CmpCreateRegistryThread.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  HANDLE v0; // rdi
  int v1; // ebx
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
  v1 = CmpCreateRegistryProcessToken(&Object);
  if ( v1 >= 0 )
  {
    v1 = PsCreateMinimalProcess(
           PsInitialSystemProcess,
           (__int64)&CmRegistryProcessName,
           0LL,
           BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink),
           0LL,
           0,
           0,
           0LL,
           0LL,
           &ProcessHandle);
    if ( v1 < 0
      || (v1 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 1u, (POBJECT_TYPE)SeTokenObjectType, 0, ProcessInformation),
          v1 < 0) )
    {
      v0 = ProcessHandle;
    }
    else
    {
      v0 = ProcessHandle;
      v1 = ZwSetInformationProcess(ProcessHandle, ProcessAccessToken, ProcessInformation, 0x10u);
      if ( v1 >= 0 )
      {
        v1 = CmSiProcessTupleStartFromHandle(v2, v0);
        if ( v1 >= 0 )
        {
          v0 = 0LL;
          CmpAttachToRegistryProcess((__int64)v9);
          MmAdjustWorkingSetSize(0x4000000uLL, 0x4000000uLL, 0, 1);
          KiUnstackDetachProcess((__int64)v9, 0LL);
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          v1 = CmpCreateRegistryThread(&v7, v3, CmpDummyThreadRoutine, 0LL);
          if ( v1 >= 0 )
          {
            v1 = ExInitializeLookasideListEx(
                   (PLOOKASIDE_LIST_EX)&CmpBounceBufferLookaside,
                   (PALLOCATE_FUNCTION_EX)CmpAllocateTransientPoolWithTag,
                   (PFREE_FUNCTION_EX)CmSiFreeMemory,
                   PagedPool,
                   0,
                   0x1000uLL,
                   0x42424D43u,
                   0);
            if ( v1 >= 0 )
              v1 = 0;
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
  return (unsigned int)v1;
}
