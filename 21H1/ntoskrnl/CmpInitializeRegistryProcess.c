/*
 * XREFs of CmpInitializeRegistryProcess @ 0x1407878AC
 * Callers:
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExInitializeLookasideListEx @ 0x1402C1D20 (ExInitializeLookasideListEx.c)
 *     CmSiProcessTupleInitialize @ 0x1403234B4 (CmSiProcessTupleInitialize.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1403AF4C0 (CmSiProcessTupleStartFromHandle.c)
 *     MmAdjustWorkingSetSize @ 0x1403AF530 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1403F26B0 (ZwSetInformationProcess.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x14078721C (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryThread @ 0x140788804 (CmpCreateRegistryThread.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  HANDLE v0; // rdi
  int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // rdx
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  HANDLE ProcessHandle; // [rsp+60h] [rbp-1h] BYREF
  HANDLE v12; // [rsp+68h] [rbp+7h] BYREF
  HANDLE ProcessInformation[2]; // [rsp+70h] [rbp+Fh] BYREF
  _OWORD v14[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v14, 0, sizeof(v14));
  Object = 0LL;
  v0 = 0LL;
  ProcessHandle = 0LL;
  v12 = 0LL;
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
          CmpAttachToRegistryProcess((__int64)v14, v3, v4, v5);
          MmAdjustWorkingSetSize(0x4000000uLL, 0x4000000uLL, 0, 1);
          KiUnstackDetachProcess((__int64)v14, 0LL, v6, v7);
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          v1 = CmpCreateRegistryThread(&v12, v8, CmpDummyThreadRoutine, 0LL);
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
  if ( v12 )
    ZwClose(v12);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)v1;
}
