/*
 * XREFs of PsCreateMinimalProcess @ 0x14078748C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402CAF84 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     CmpInitializeRegistryProcess @ 0x1407878AC (CmpInitializeRegistryProcess.c)
 *     PspCreateProcess @ 0x1407B87A0 (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x140907680 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x1409088D8 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x14092A3C0 (VmCreateMemoryProcess.c)
 *     PspInitPhase1 @ 0x140A60C8C (PspInitPhase1.c)
 * Callees:
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     KeKvaShadowingActive @ 0x1402C1374 (KeKvaShadowingActive.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     PspGetMemoryPartitionContext @ 0x14066E8B0 (PspGetMemoryPartitionContext.c)
 *     PspInsertProcess @ 0x14066F7BC (PspInsertProcess.c)
 *     PsAssignProcessToJobObject @ 0x140674EF0 (PsAssignProcessToJobObject.c)
 *     PsTerminateProcess @ 0x1406E666C (PsTerminateProcess.c)
 *     PspCreateObjectHandle @ 0x1406F3A00 (PspCreateObjectHandle.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     DbgkCreateMinimalProcess @ 0x140787780 (DbgkCreateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x1407877EC (PspSetMinimalProcessName.c)
 *     MmSynchronizeAddressPolicy @ 0x140787888 (MmSynchronizeAddressPolicy.c)
 *     PspDeleteMemoryPartitionContext @ 0x140904658 (PspDeleteMemoryPartitionContext.c)
 *     PspDeleteObjectAccessState @ 0x140905A2C (PspDeleteObjectAccessState.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        char a4,
        PADAPTER_OBJECT DmaAdapter,
        int a6,
        char a7,
        __int64 a8,
        PVOID Object,
        _QWORD *a10)
{
  PVOID v11; // r14
  PADAPTER_OBJECT v12; // r12
  unsigned int v14; // ebx
  int MemoryPartitionContext; // esi
  PRKPROCESS v16; // rdi
  char v17; // al
  PRKPROCESS PROCESS; // [rsp+80h] [rbp-80h] BYREF
  PVOID v20; // [rsp+88h] [rbp-78h] BYREF
  PVOID v21; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  _QWORD *v25; // [rsp+B0h] [rbp-50h]
  _BYTE v26[400]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v28; // [rsp+308h] [rbp+208h]

  v11 = Object;
  v24 = a3;
  v23 = a2;
  v20 = Object;
  v12 = DmaAdapter;
  v25 = a10;
  v22 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v26, 0, sizeof(v26));
  v21 = 0LL;
  PROCESS = 0LL;
  if ( !DmaAdapter )
    v12 = (PADAPTER_OBJECT)PsReferencePrimaryToken(Process);
  v14 = DmaAdapter != 0LL;
  v28 = a6 | 0x800;
  MemoryPartitionContext = PspGetMemoryPartitionContext((__int64)Process, v28, (__int64)&v20, Object != 0LL, &v21);
  if ( MemoryPartitionContext >= 0 )
  {
    MemoryPartitionContext = PspAllocateProcess(
                               (__int64)Process,
                               0,
                               0LL,
                               a4,
                               0,
                               0,
                               0LL,
                               v12,
                               v28,
                               a7,
                               0LL,
                               DmaAdapter != 0LL,
                               v21,
                               (__int64)&v22,
                               &PROCESS);
    if ( MemoryPartitionContext < 0 )
    {
      PROCESS = 0LL;
    }
    else
    {
      if ( a8 )
        *(_QWORD *)&PROCESS[2].Affinity.Count = a8;
      v16 = PROCESS;
      if ( (HIDWORD(PROCESS[2].Header.WaitListHead.Flink) & 1) != 0
        && !*(_QWORD *)&PROCESS[2].Affinity.Count
        && (unsigned int)KeKvaShadowingActive() )
      {
        v16->AddressPolicy = 1;
        if ( !_interlockedbittestandset((volatile signed __int32 *)&PROCESS[2].Header.WaitListHead.Flink + 1, 0xEu) )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          MmSynchronizeAddressPolicy(PROCESS);
          KeUnstackDetachProcess(&ApcState);
        }
        v11 = v20;
        v16 = PROCESS;
      }
      if ( v23 )
      {
        PspSetMinimalProcessName(v16, v23);
        v16 = PROCESS;
      }
      v17 = 1;
      if ( (_DWORD)v22 )
        v17 = 3;
      MemoryPartitionContext = PspInsertProcess(
                                 v16,
                                 Process,
                                 0x2000000u,
                                 v28,
                                 0LL,
                                 v17,
                                 v24,
                                 (struct _ACCESS_STATE *)v26);
      if ( MemoryPartitionContext < 0 )
      {
        PspRundownSingleProcess((ULONG_PTR)PROCESS, 0);
      }
      else
      {
        v14 |= 4u;
        if ( !v11
          || (MemoryPartitionContext = PsAssignProcessToJobObject(v11, PROCESS, 0LL), MemoryPartitionContext >= 0) )
        {
          DbgkCreateMinimalProcess(PROCESS);
          v14 |= 2u;
          *(_DWORD *)&v26[384] |= 0x200u;
          MemoryPartitionContext = PspCreateObjectHandle(PROCESS, (__int64)v26, (struct _OBJECT_TYPE *)PsProcessType);
          if ( MemoryPartitionContext >= 0 )
          {
            v14 &= ~4u;
            *v25 = *(_QWORD *)&v26[392];
          }
        }
      }
    }
  }
  if ( (v14 & 2) != 0 )
    PspDeleteObjectAccessState(v26);
  if ( PROCESS )
  {
    if ( v14 >= 4 )
      PsTerminateProcess((ULONG_PTR)PROCESS);
    ObfDereferenceObjectWithTag(PROCESS, 0x72437350u);
  }
  if ( v21 )
    PspDeleteMemoryPartitionContext();
  if ( (v14 & 1) == 0 )
    HalPutDmaAdapter(v12);
  return (unsigned int)MemoryPartitionContext;
}
