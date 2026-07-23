/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x140884FF4
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x140884F2C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140885970 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsSuspendThread @ 0x14061AE10 (PsSuspendThread.c)
 *     PsQuitNextProcessThread @ 0x140622590 (PsQuitNextProcessThread.c)
 *     PsResumeThread @ 0x140641B00 (PsResumeThread.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsGetNextProcessThread @ 0x1407216D0 (PsGetNextProcessThread.c)
 *     DbgkSendSystemDllMessages @ 0x14088463C (DbgkSendSystemDllMessages.c)
 *     DbgkpQueueMessage @ 0x140885678 (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140887CF4 (DbgkpSectionToFileHandle.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1409078A8 (PsSynchronizeWithThreadInsertion.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(
        __int64 a1,
        struct _KEVENT *a2,
        struct _EX_RUNDOWN_REF *a3,
        struct _EX_RUNDOWN_REF **a4,
        struct _EX_RUNDOWN_REF **a5)
{
  struct _EX_RUNDOWN_REF *NextProcessThread; // rbx
  struct _EX_RUNDOWN_REF *v8; // r15
  struct _EX_RUNDOWN_REF *v9; // rdi
  int v10; // r12d
  bool v11; // r13
  char v12; // si
  char v13; // r13
  __int64 v14; // rcx
  PIMAGE_NT_HEADERS v15; // rax
  bool v17; // [rsp+30h] [rbp-1E8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-1B0h]
  HANDLE v22[34]; // [rsp+90h] [rbp-188h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp-78h] BYREF

  NextProcessThread = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v22, 0, sizeof(v22));
  v8 = 0LL;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = -1073741823;
  if ( NextProcessThread )
  {
    v8 = NextProcessThread;
    ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
  }
  else
  {
    NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(a1, 0LL);
  }
  v11 = a3 == 0LL;
  v17 = a3 == 0LL;
  while ( NextProcessThread )
  {
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x4F676244u);
    v9 = NextProcessThread;
    ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
    if ( (HIDWORD(NextProcessThread[14].Ptr) & 0x400) == 0 )
    {
      if ( (NextProcessThread[162].Count & 2) != 0
        || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[162].Count & 2) != 0) )
      {
        if ( ExAcquireRundownProtection(NextProcessThread + 159) )
        {
          v12 = 10;
          if ( (int)PsSuspendThread((__int64)NextProcessThread, 0LL) >= 0 )
            v12 = 42;
        }
        else
        {
          v12 = 18;
        }
        memset(v22, 0, sizeof(v22));
        if ( !v11 || (v12 & 0x10) != 0 )
        {
          v13 = 0;
          LODWORD(v22[5]) = 1;
          v22[7] = NextProcessThread[154].Ptr;
        }
        else
        {
          v13 = 1;
          LODWORD(v22[5]) = 2;
          v14 = *(_QWORD *)(a1 + 1304);
          if ( v14 )
            v22[7] = (HANDLE)DbgkpSectionToFileHandle(v14);
          else
            v22[7] = 0LL;
          v22[8] = *(HANDLE *)(a1 + 1312);
          KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
          v15 = RtlImageNtHeader(*(PVOID *)(a1 + 1312));
          if ( v15 )
          {
            v22[11] = 0LL;
            v22[9] = *(HANDLE *)&v15->FileHeader.PointerToSymbolTable;
          }
          KeUnstackDetachProcess(&ApcState);
        }
        v10 = DbgkpQueueMessage((PVOID)a1, NextProcessThread, a2);
        if ( v10 < 0 )
        {
          if ( (v12 & 0x20) != 0 )
            PsResumeThread((__int64)NextProcessThread, 0LL);
          if ( (v12 & 8) != 0 )
            ExReleaseRundownProtection(NextProcessThread + 159);
          if ( LODWORD(v22[5]) == 2 && v22[7] )
            ObCloseHandle(v22[7], 0);
          PsQuitNextProcessThread(NextProcessThread);
          break;
        }
        if ( v13 )
        {
          v11 = 0;
          v17 = 0;
          ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
          v8 = NextProcessThread;
          DbgkSendSystemDllMessages(NextProcessThread, a2, v22);
        }
        else
        {
          v11 = v17;
        }
      }
    }
    NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(a1, NextProcessThread);
  }
  if ( v10 >= 0 )
  {
    if ( v8 )
    {
      *a4 = v8;
      *a5 = v9;
    }
    else
    {
      if ( v9 )
        ObfDereferenceObjectWithTag(v9, 0x4F676244u);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x4F676244u);
  }
  return (unsigned int)v10;
}
