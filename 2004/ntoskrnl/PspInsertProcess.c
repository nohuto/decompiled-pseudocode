/*
 * XREFs of PspInsertProcess @ 0x14061809C
 * Callers:
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407BB910 (PspCreateProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x14026A584 (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x14026A76C (PspLockProcessListExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessExclusive @ 0x1403598F8 (PspUnlockProcessExclusive.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCheckRefTraceProcess @ 0x140618300 (ObCheckRefTraceProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x140618348 (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406190D0 (SeAuditingWithTokenForSubcategory.c)
 *     PspImplicitAssignProcessToJob @ 0x1406599D0 (PspImplicitAssignProcessToJob.c)
 *     SeCreateAccessStateEx @ 0x140668A70 (SeCreateAccessStateEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     PspValidateJobAffinityState @ 0x14070494C (PspValidateJobAffinityState.c)
 *     SeAuditProcessCreation @ 0x1407A686C (SeAuditProcessCreation.c)
 *     PspDeleteObjectAccessState @ 0x140906D0C (PspDeleteObjectAccessState.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        struct _KPROCESS *a2,
        int a3,
        unsigned int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        PACCESS_STATE AccessState)
{
  struct _KTHREAD *CurrentThread; // r14
  struct _DMA_ADAPTER *v11; // rbp
  _KPROCESS *Process; // r13
  int inserted; // edi
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  int v17; // ebp
  int v18; // edx
  struct _ACCESS_STATE *v19; // rsi
  __int64 v20; // rcx
  NTSTATUS v22; // eax
  PVOID v23; // [rsp+88h] [rbp+10h] BYREF
  int v24; // [rsp+90h] [rbp+18h]

  v24 = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 174) + 40LL) = *((_DWORD *)Object + 272);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(133LL, 0LL) )
    SeAuditProcessCreation((ULONG_PTR)Object);
  if ( !a2
    || !a2[1].Affinity.Bitmap[16]
    || (inserted = PspImplicitAssignProcessToJob(a2[1].Affinity.Bitmap[16], Object, a4), inserted >= 0) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v15 = (_QWORD *)qword_140C1DF68;
    v16 = Object + 1096;
    if ( *(__int64 **)qword_140C1DF68 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 138) = qword_140C1DF68;
    *v16 = &PsActiveProcessHead;
    *v15 = v16;
    qword_140C1DF68 = (__int64)(Object + 1096);
    *((_QWORD *)Object + 287) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      inserted = -1073741558;
    }
    else if ( !Handle
           || (v23 = 0LL,
               v22 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &v23,
                       0LL),
               v11 = (struct _DMA_ADAPTER *)v23,
               inserted = v22,
               v22 >= 0) )
    {
      inserted = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
      if ( v11 )
        HalPutDmaAdapter(v11);
      if ( inserted >= 0 )
      {
        v17 = 0;
        if ( !a2 || (v18 = (int)PsInitialSystemProcess, a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v18 = (int)Object;
            v17 = 1;
          }
          else
          {
            v18 = (int)Process;
          }
        }
        v19 = AccessState;
        inserted = SeCreateAccessStateEx(
                     0,
                     v18,
                     (_DWORD)AccessState,
                     (int)AccessState + 160,
                     v24,
                     (__int64)PsProcessType + 76);
        if ( inserted >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          inserted = ObInsertObjectEx((PADAPTER_OBJECT)Object, v19, v17, 0LL, 0LL);
          if ( inserted >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v20 = *((_QWORD *)Object + 162);
            if ( !v20 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 281, 0x4000000u);
              goto LABEL_20;
            }
            inserted = PspValidateJobAffinityState(v20, Object);
            if ( inserted >= 0 )
            {
LABEL_20:
              ObCheckRefTraceProcess(Object);
              if ( (a6 & 1) != 0 )
                PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
              return 0LL;
            }
          }
          PspDeleteObjectAccessState(v19);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
    PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
  return (unsigned int)inserted;
}
