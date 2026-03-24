/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x140884E94
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x140884DCC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140885810 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     KeUnstackDetachProcess @ 0x1402075C0 (KeUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14025C110 (KeStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     PsResumeThread @ 0x14064CCE0 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1406BBD90 (PsSuspendThread.c)
 *     PsQuitNextProcessThread @ 0x1406C39B0 (PsQuitNextProcessThread.c)
 *     PsGetNextProcessThread @ 0x14070A2F0 (PsGetNextProcessThread.c)
 *     DbgkSendSystemDllMessages @ 0x1408844DC (DbgkSendSystemDllMessages.c)
 *     DbgkpQueueMessage @ 0x140885518 (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140887B94 (DbgkpSectionToFileHandle.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140907748 (PsSynchronizeWithThreadInsertion.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(
        struct _KPROCESS *a1,
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
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
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
    NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)a1, 0LL);
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
          v14 = a1[1].Affinity.Bitmap[17];
          if ( v14 )
            v24[7] = (HANDLE)DbgkpSectionToFileHandle(v14);
          else
            v24[7] = 0LL;
          v24[8] = (HANDLE)a1[1].Affinity.Bitmap[18];
          KeStackAttachProcess(a1, &ApcState);
          v15 = RtlImageNtHeader(a1[1].Affinity.Bitmap[18]);
          if ( v15 )
          {
            v24[11] = 0LL;
            v24[9] = *(HANDLE *)(v15 + 12);
          }
          KeUnstackDetachProcess(&ApcState);
        }
        v10 = DbgkpQueueMessage(a1, NextProcessThread, a2);
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
    NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)a1, NextProcessThread);
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
