/*
 * XREFs of CmpInitializeRegistryProcess @ 0x1407C606C
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     CmSiProcessTupleInitialize @ 0x1402D4024 (CmSiProcessTupleInitialize.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     ExInitializeLookasideListEx @ 0x14035E190 (ExInitializeLookasideListEx.c)
 *     MmAdjustWorkingSetSize @ 0x1403C9280 (MmAdjustWorkingSetSize.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1403C92AC (CmSiProcessTupleStartFromHandle.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1403FA720 (ZwSetInformationProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     ObOpenObjectByPointer @ 0x140706880 (ObOpenObjectByPointer.c)
 *     CmpCreateRegistryThread @ 0x14078F7D4 (CmpCreateRegistryThread.c)
 *     PsCreateMinimalProcess @ 0x1407C6284 (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x1407C66A4 (CmpCreateRegistryProcessToken.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  void *v0; // rdi
  int MinimalProcess; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  __int64 v6; // rdx
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  __int64 v9; // [rsp+60h] [rbp-1h] BYREF
  HANDLE v10; // [rsp+68h] [rbp+7h] BYREF
  HANDLE Handle[2]; // [rsp+70h] [rbp+Fh] BYREF
  _OWORD v12[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v12, 0, sizeof(v12));
  Object = 0LL;
  v0 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  *(_OWORD *)Handle = 0LL;
  CmSiProcessTupleInitialize();
  MinimalProcess = CmpCreateRegistryProcessToken(&Object);
  if ( MinimalProcess >= 0 )
  {
    MinimalProcess = PsCreateMinimalProcess(PsInitialSystemProcess, 0LL, 0, 0, 0LL, 0LL, (__int64)&v9);
    if ( MinimalProcess < 0
      || (MinimalProcess = ObOpenObjectByPointer(Object, 0x200u, 0LL, 1u, (POBJECT_TYPE)SeTokenObjectType, 0, Handle),
          MinimalProcess < 0) )
    {
      v0 = (void *)v9;
    }
    else
    {
      v0 = (void *)v9;
      MinimalProcess = ZwSetInformationProcess(v9, 9LL);
      if ( MinimalProcess >= 0 )
      {
        MinimalProcess = CmSiProcessTupleStartFromHandle(v2, v0);
        if ( MinimalProcess >= 0 )
        {
          v0 = 0LL;
          CmpAttachToRegistryProcess((__int64)v12, v3, v4, v5);
          MmAdjustWorkingSetSize(0x4000000uLL, 0x4000000uLL, 0, 1);
          KiUnstackDetachProcess((__int64)v12, 0);
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          MinimalProcess = CmpCreateRegistryThread((__int64)&v10, v6, (__int64)CmpDummyThreadRoutine, 0LL);
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
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v10 )
    ZwClose(v10);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)MinimalProcess;
}
