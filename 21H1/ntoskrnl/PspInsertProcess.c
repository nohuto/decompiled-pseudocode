/*
 * XREFs of PspInsertProcess @ 0x14066F7BC
 * Callers:
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407B87A0 (PspCreateProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1402D7380 (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1402D7568 (PspLockProcessListExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14031BD28 (PspUnlockProcessExclusive.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     SeCreateAccessStateEx @ 0x140613790 (SeCreateAccessStateEx.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObCheckRefTraceProcess @ 0x14066FA20 (ObCheckRefTraceProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x14066FA68 (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406707F0 (SeAuditingWithTokenForSubcategory.c)
 *     PspImplicitAssignProcessToJob @ 0x140671ACC (PspImplicitAssignProcessToJob.c)
 *     PspValidateJobAffinityState @ 0x1406E1FCC (PspValidateJobAffinityState.c)
 *     SeAuditProcessCreation @ 0x1407A401C (SeAuditProcessCreation.c)
 *     PspDeleteObjectAccessState @ 0x140905A2C (PspDeleteObjectAccessState.c)
 */

__int64 __fastcall PspInsertProcess(
        struct _KPROCESS *DmaAdapter,
        struct _KPROCESS *a2,
        ACCESS_MASK a3,
        unsigned int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        struct _ACCESS_STATE *a8)
{
  struct _KTHREAD *CurrentThread; // r14
  struct _DMA_ADAPTER *v11; // rbp
  _KPROCESS *Process; // r13
  int AccessState; // edi
  _DMA_OPERATIONS ***v15; // rcx
  _DMA_OPERATIONS **p_Blink; // rax
  char v17; // bp
  struct _KPROCESS *v18; // rdx
  struct _ACCESS_STATE *v19; // rsi
  ACCESS_MASK v20; // r12d
  unsigned __int64 v21; // rcx
  NTSTATUS v23; // eax
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK v25; // [rsp+90h] [rbp+18h]

  v25 = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(DmaAdapter[1].AffinityPadding[8] + 40) = DmaAdapter[1].Header.WaitListHead.Flink;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(133LL, 0LL) )
    SeAuditProcessCreation((ULONG_PTR)DmaAdapter);
  if ( !a2
    || !a2[1].Affinity.Bitmap[16]
    || (AccessState = PspImplicitAssignProcessToJob(a2[1].Affinity.Bitmap[16], DmaAdapter, a4), AccessState >= 0) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v15 = (_DMA_OPERATIONS ***)qword_140C1E168;
    p_Blink = (_DMA_OPERATIONS **)&DmaAdapter[1].Header.WaitListHead.Blink;
    if ( *(__int64 **)qword_140C1E168 != &PsActiveProcessHead )
      __fastfail(3u);
    DmaAdapter[1].ProfileListHead.Flink = (struct _LIST_ENTRY *)qword_140C1E168;
    *p_Blink = (_DMA_OPERATIONS *)&PsActiveProcessHead;
    *v15 = p_Blink;
    qword_140C1E168 = (__int64)&DmaAdapter[1].Header.WaitListHead.Blink;
    DmaAdapter[2].Affinity.Bitmap[6] = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      AccessState = -1073741558;
    }
    else if ( !Handle
           || (Object = 0LL,
               v23 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &Object,
                       0LL),
               v11 = (struct _DMA_ADAPTER *)Object,
               AccessState = v23,
               v23 >= 0) )
    {
      AccessState = DbgkCopyProcessDebugPort((ULONG_PTR)DmaAdapter);
      if ( v11 )
        HalPutDmaAdapter(v11);
      if ( AccessState >= 0 )
      {
        v17 = 0;
        if ( !a2 || (v18 = PsInitialSystemProcess, a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v18 = DmaAdapter;
            v17 = 1;
          }
          else
          {
            v18 = Process;
          }
        }
        v19 = a8;
        v20 = v25;
        AccessState = SeCreateAccessStateEx(
                        0LL,
                        v18,
                        a8,
                        &a8[1].OperationID,
                        v25,
                        (GENERIC_MAPPING *)((char *)PsProcessType + 76));
        if ( AccessState >= 0 )
        {
          ObfReferenceObjectWithTag(DmaAdapter, 0x72437350u);
          AccessState = ObInsertObjectEx((PADAPTER_OBJECT)DmaAdapter, v19, v20, 0, v17, 0LL, 0LL);
          if ( AccessState >= 0 )
          {
            ObfDereferenceObjectWithTag(DmaAdapter, 0x72437350u);
            v21 = DmaAdapter[1].Affinity.Bitmap[16];
            if ( !v21 )
            {
              _InterlockedOr((volatile signed __int32 *)&DmaAdapter[1].DirectoryTableBase + 1, 0x4000000u);
              goto LABEL_20;
            }
            AccessState = PspValidateJobAffinityState(v21, DmaAdapter);
            if ( AccessState >= 0 )
            {
LABEL_20:
              ObCheckRefTraceProcess(DmaAdapter);
              if ( (a6 & 1) != 0 )
                PspUnlockProcessExclusive((__int64)DmaAdapter, (__int64)CurrentThread);
              return 0LL;
            }
          }
          PspDeleteObjectAccessState(v19);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
    PspUnlockProcessExclusive((__int64)DmaAdapter, (__int64)CurrentThread);
  return (unsigned int)AccessState;
}
