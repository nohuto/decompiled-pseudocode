/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1C0091A10
 * Callers:
 *     <none>
 * Callees:
 *     xxxHandleHealthyThread @ 0x1C0003640 (xxxHandleHealthyThread.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxGetInputEvent @ 0x1C0091F60 (xxxGetInputEvent.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0157F54 (xxxMsgWaitForMultipleObjectsEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     _CancelQueueEventCompletionPacket @ 0x1C01D3A60 (_CancelQueueEventCompletionPacket.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1C01D3B10 (_ReassociateQueueEventCompletionPacket.c)
 *     _SetWaitForQueueAttach @ 0x1C01D3BC0 (_SetWaitForQueueAttach.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(unsigned int a1, volatile void *a2, int a3, int a4, int a5)
{
  unsigned __int16 v5; // r14
  volatile void *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 InputEvent; // r15
  __int64 CurrentProcess; // rax
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  char *v18; // rax
  _OWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v22; // r8d
  __int64 v23; // r14
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // rbx
  int *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r10
  int v33; // eax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  struct _KTHREAD *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  __int64 v48; // rax
  int ProcessSessionId; // ebx
  __int64 v50; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v52; // rax
  int v53; // ebx
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // [rsp+30h] [rbp-8F8h]
  void *v57; // [rsp+40h] [rbp-8E8h]
  __int64 v58; // [rsp+48h] [rbp-8E0h]
  __int64 v59; // [rsp+50h] [rbp-8D8h] BYREF
  void *v60; // [rsp+58h] [rbp-8D0h]
  void (__fastcall *v61)(void *); // [rsp+60h] [rbp-8C8h]
  __int64 ProcessPeb; // [rsp+68h] [rbp-8C0h]
  char v63; // [rsp+70h] [rbp-8B8h] BYREF
  __int64 v64; // [rsp+90h] [rbp-898h]
  __int64 v65; // [rsp+98h] [rbp-890h]
  __int64 v66; // [rsp+A0h] [rbp-888h]
  _BYTE v67[1144]; // [rsp+4B0h] [rbp-478h] BYREF

  v5 = a4;
  v6 = a2;
  v7 = a1;
  EnterCrit(0LL, 1LL);
  v10 = 0LL;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    LODWORD(v7) = -1;
    UserSetLastError(87LL, v8, v9);
    goto LABEL_56;
  }
  v11 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( !v11
    || (a5 & 1) != 0 && (_DWORD)v7
    || ((a5 & 4) == 0 ? (v12 = 0LL) : (v12 = *(unsigned __int16 *)(v11 + 6)),
        ((unsigned __int16)(v12 | *(_WORD *)(v11 + 4)) & v5) == 0) )
  {
    InputEvent = xxxGetInputEvent(v5 | ((unsigned __int16)a5 << 16));
    if ( InputEvent )
    {
      if ( (a5 & 1) != 0 )
      {
        v58 = 0LL;
        CancelQueueEventCompletionPacket();
LABEL_12:
        CurrentProcess = PsGetCurrentProcess(v12, v8, v9);
        ProcessPeb = PsGetProcessPeb(CurrentProcess);
        v15 = *(_OWORD **)(ProcessPeb + 32);
        if ( v15 + 68 < v15 || (unsigned __int64)(v15 + 68) > MmUserProbeAddress )
          v15 = (_OWORD *)MmUserProbeAddress;
        v16 = v67;
        v17 = 8LL;
        do
        {
          *v16 = *v15;
          v16[1] = v15[1];
          v16[2] = v15[2];
          v16[3] = v15[3];
          v16[4] = v15[4];
          v16[5] = v15[5];
          v16[6] = v15[6];
          v16 += 8;
          *(v16 - 1) = v15[7];
          v15 += 8;
          --v17;
        }
        while ( v17 );
        *v16 = *v15;
        v16[1] = v15[1];
        v16[2] = v15[2];
        v16[3] = v15[3];
        v18 = &v63;
        v19 = v67;
        v20 = 8LL;
        do
        {
          *(_OWORD *)v18 = *v19;
          *((_OWORD *)v18 + 1) = v19[1];
          *((_OWORD *)v18 + 2) = v19[2];
          *((_OWORD *)v18 + 3) = v19[3];
          *((_OWORD *)v18 + 4) = v19[4];
          *((_OWORD *)v18 + 5) = v19[5];
          *((_OWORD *)v18 + 6) = v19[6];
          v18 += 128;
          *((_OWORD *)v18 - 1) = v19[7];
          v19 += 8;
          --v20;
        }
        while ( v20 );
        *(_OWORD *)v18 = *v19;
        *((_OWORD *)v18 + 1) = v19[1];
        *((_OWORD *)v18 + 2) = v19[2];
        *((_OWORD *)v18 + 3) = v19[3];
        if ( (_DWORD)v7 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19);
          v22 = 4;
          if ( CurrentProcessWow64Process )
            v22 = 1;
          v23 = v7;
          ProbeForRead(v6, 8 * v7, v22);
        }
        else
        {
          v23 = 0LL;
        }
        v24 = (_QWORD *)Win32AllocPoolWithQuota(8LL * (unsigned int)(v7 + 1), 2037609301LL);
        v27 = v24;
        v57 = v24;
        if ( v24 )
        {
          memmove(v24, (const void *)a2, 8 * v23);
          v29 = 0LL;
          v30 = v66;
          v31 = v65;
          v32 = v64;
          while ( (unsigned int)v29 < (unsigned int)v7 )
          {
            v28 = (int *)&v27[(unsigned int)v29];
            v33 = *v28;
            if ( (unsigned int)*v28 >= 0xFFFFFFF4 )
            {
              switch ( v33 )
              {
                case -12:
                  *(_QWORD *)v28 = v30;
                  break;
                case -11:
                  *(_QWORD *)v28 = v31;
                  break;
                case -10:
                  *(_QWORD *)v28 = v32;
                  break;
              }
            }
            v29 = (unsigned int)(v29 + 1);
          }
          if ( (a5 & 8) != 0 )
            SetWaitForQueueAttach(1LL, v28, v30, v31);
          if ( (a5 & 1) == 0 )
            InputEvent = v58;
          v27[v7] = InputEvent;
          CurrentThread = KeGetCurrentThread();
          v35 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v29)
            || (v48 = PsGetCurrentProcess(v37, v36, v38),
                ProcessSessionId = PsGetProcessSessionIdEx(v48),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v50),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v35 = *ThreadWin32Thread;
          }
          v59 = *(_QWORD *)(v35 + 16);
          *(_QWORD *)(v35 + 16) = &v59;
          v60 = v57;
          v61 = (void (__fastcall *)(void *))Win32FreePool;
          v56 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v57, a3, a4, a5);
          v40 = (unsigned int)_InterlockedExchange(
                                (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
                                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          if ( !*(_DWORD *)(gptiCurrent + 1168LL) )
          {
            v41 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( !(_DWORD)v41 )
              LODWORD(v41) = -1;
            EtwTraceMessageCheckDelay(gptiCurrent);
            *(_DWORD *)(gptiCurrent + 1168LL) = v41;
            if ( *(int *)(gptiCurrent + 480LL) < 0 )
              xxxHandleHealthyThread(gptiCurrent);
            *(_QWORD *)(gptiCurrent + 1224LL) &= ~0x400000000uLL;
            EtwTraceProcessWindowInfo(gptiCurrent);
          }
          *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 0;
          *(_DWORD *)(gptiCurrent + 1224LL) &= ~0x400u;
          v42 = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v40)
            || (v52 = PsGetCurrentProcess(v44, v43, v45),
                v53 = PsGetProcessSessionIdEx(v52),
                v55 = PsGetCurrentThreadProcess(v54),
                v53 == (unsigned int)PsGetProcessSessionIdEx(v55)) )
          {
            v46 = (__int64 *)PsGetThreadWin32Thread(v42);
            if ( v46 )
              v10 = *v46;
          }
          *(_QWORD *)(v10 + 16) = v59;
          v61(v60);
          if ( (a5 & 1) != 0 )
            ReassociateQueueEventCompletionPacket();
          LODWORD(v7) = v56;
        }
        else
        {
          LODWORD(v7) = -1;
          UserSetLastError(8LL, v25, v26);
        }
        goto LABEL_56;
      }
      v12 = gptiCurrent;
      v58 = *(_QWORD *)(gptiCurrent + 1424LL);
      if ( v58 )
      {
        v6 = a2;
        goto LABEL_12;
      }
    }
    LODWORD(v7) = -1;
  }
LABEL_56:
  UserSessionSwitchLeaveCrit(v12, v8, v9);
  return (unsigned int)v7;
}
