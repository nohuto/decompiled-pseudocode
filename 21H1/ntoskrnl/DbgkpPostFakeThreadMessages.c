/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x140880A84
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x1408809BC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140881400 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 *     PsSuspendThread @ 0x1406E5EC0 (PsSuspendThread.c)
 *     PsQuitNextProcessThread @ 0x1406ED7F0 (PsQuitNextProcessThread.c)
 *     PsResumeThread @ 0x140708FB0 (PsResumeThread.c)
 *     DbgkSendSystemDllMessages @ 0x1408800CC (DbgkSendSystemDllMessages.c)
 *     DbgkpQueueMessage @ 0x140881108 (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140883784 (DbgkpSectionToFileHandle.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140903098 (PsSynchronizeWithThreadInsertion.c)
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
  __int64 v16; // r8
  _DWORD *v17; // r9
  bool v19; // [rsp+30h] [rbp-1E8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-1B0h]
  HANDLE v24[34]; // [rsp+90h] [rbp-188h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp-78h] BYREF

  NextProcessThread = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v24, 0, sizeof(v24));
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
  v19 = a3 == 0LL;
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
        if ( ExAcquireRundownProtection_0(NextProcessThread + 159) )
        {
          v12 = 10;
          if ( (int)PsSuspendThread((__int64)NextProcessThread, 0LL) >= 0 )
            v12 = 42;
        }
        else
        {
          v12 = 18;
        }
        memset(v24, 0, sizeof(v24));
        if ( !v11 || (v12 & 0x10) != 0 )
        {
          v13 = 0;
          LODWORD(v24[5]) = 1;
          v24[7] = NextProcessThread[154].Ptr;
        }
        else
        {
          v13 = 1;
          LODWORD(v24[5]) = 2;
          v14 = *(_QWORD *)(a1 + 1304);
          if ( v14 )
            v24[7] = (HANDLE)DbgkpSectionToFileHandle(v14);
          else
            v24[7] = 0LL;
          v24[8] = *(HANDLE *)(a1 + 1312);
          KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
          v15 = RtlImageNtHeader(*(PVOID *)(a1 + 1312));
          if ( v15 )
          {
            v24[11] = 0LL;
            v24[9] = *(HANDLE *)&v15->FileHeader.PointerToSymbolTable;
          }
          KeUnstackDetachProcess(&ApcState);
        }
        v10 = DbgkpQueueMessage((PVOID)a1, NextProcessThread, a2);
        if ( v10 < 0 )
        {
          if ( (v12 & 0x20) != 0 )
            PsResumeThread((__int64)NextProcessThread, 0LL, v16, v17);
          if ( (v12 & 8) != 0 )
            ExReleaseRundownProtection_0(NextProcessThread + 159);
          if ( LODWORD(v24[5]) == 2 && v24[7] )
            ObCloseHandle(v24[7], 0);
          PsQuitNextProcessThread(NextProcessThread);
          break;
        }
        if ( v13 )
        {
          v11 = 0;
          v19 = 0;
          ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
          v8 = NextProcessThread;
          DbgkSendSystemDllMessages(NextProcessThread, a2, v24);
        }
        else
        {
          v11 = v19;
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
