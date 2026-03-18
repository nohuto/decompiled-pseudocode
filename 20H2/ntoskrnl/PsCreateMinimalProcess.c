/*
 * XREFs of PsCreateMinimalProcess @ 0x1407C1F84
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140337B6C (-SmFirstTimeInit@@YAJKK@Z.c)
 *     CmpInitializeRegistryProcess @ 0x1407C1D6C (CmpInitializeRegistryProcess.c)
 *     PspCreateProcess @ 0x1407CA1A0 (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x14090E550 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x14090F7A8 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x1409314A0 (VmCreateMemoryProcess.c)
 *     PspInitPhase1 @ 0x140A654A0 (PspInitPhase1.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     KeKvaShadowingActive @ 0x14032D974 (KeKvaShadowingActive.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     PsAssignProcessToJobObject @ 0x14062C530 (PsAssignProcessToJobObject.c)
 *     PspInsertProcess @ 0x1406302B8 (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     PspCreateObjectHandle @ 0x1406880AC (PspCreateObjectHandle.c)
 *     PspGetMemoryPartitionContext @ 0x140690758 (PspGetMemoryPartitionContext.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     PsTerminateProcess @ 0x1406DC8DC (PsTerminateProcess.c)
 *     DbgkCreateMinimalProcess @ 0x1407C2278 (DbgkCreateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x1407C22E4 (PspSetMinimalProcessName.c)
 *     MmSynchronizeAddressPolicy @ 0x1407C2380 (MmSynchronizeAddressPolicy.c)
 *     PspDeleteMemoryPartitionContext @ 0x14090B558 (PspDeleteMemoryPartitionContext.c)
 *     PspDeleteObjectAccessState @ 0x14090C92C (PspDeleteObjectAccessState.c)
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
        __int64 a9,
        _QWORD *a10)
{
  ULONG_PTR v11; // r14
  PADAPTER_OBJECT v12; // r12
  unsigned int v14; // ebx
  signed int MemoryPartitionContext; // esi
  PRKPROCESS v16; // rdi
  char v17; // al
  PRKPROCESS PROCESS; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+88h] [rbp-78h] BYREF
  PVOID v21; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  _QWORD *v25; // [rsp+B0h] [rbp-50h]
  _BYTE v26[400]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+250h] [rbp+150h] BYREF
  int v28; // [rsp+308h] [rbp+208h]

  v11 = a9;
  v24 = a3;
  v23 = a2;
  v20 = a9;
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
  MemoryPartitionContext = PspGetMemoryPartitionContext((__int64)Process, v28, (__int64)&v20, a9 != 0, &v21);
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
        PspRundownSingleProcess((__int64)PROCESS, 0);
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
      PsTerminateProcess((ULONG_PTR)PROCESS, MemoryPartitionContext);
    ObfDereferenceObjectWithTag(PROCESS, 0x72437350u);
  }
  if ( v21 )
    PspDeleteMemoryPartitionContext();
  if ( (v14 & 1) == 0 )
    HalPutDmaAdapter(v12);
  return (unsigned int)MemoryPartitionContext;
}
