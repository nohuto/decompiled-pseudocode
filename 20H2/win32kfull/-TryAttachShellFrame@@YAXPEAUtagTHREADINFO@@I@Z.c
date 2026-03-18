/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E0BBC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00BAF00 (LockW32Thread.c)
 *     zzzAttachThreadInput @ 0x1C00BF544 (zzzAttachThreadInput.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00C25C4 (zzzInputFocusReceivedWindowEvent.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D781C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00D899C (WPP_RECORDER_SF_qqq.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00E8A6C (DisassociateShellFrameAppThreads.c)
 *     DelQEntry @ 0x1C00F6B9C (DelQEntry.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D279C (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v2; // rdi
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // r15d
  _QWORD **v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rax
  int v13; // edi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD v20[2]; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v21[3]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v22; // [rsp+70h] [rbp-11h] BYREF
  __int64 v23; // [rsp+80h] [rbp-1h]
  _BYTE v24[24]; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v25[24]; // [rsp+A0h] [rbp+1Fh] BYREF

  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v24, *((_QWORD *)a1 + 54));
  v2 = *((_QWORD *)a1 + 54);
  if ( *(_DWORD *)(v2 + 40) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v4 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 488) & 1) == 0 )
      {
        v5 = *(_QWORD *)(ShellFrameThreadFromAssociation + 672);
        if ( !v5 || (*(_DWORD *)(v5 + 196) & 0x100000) == 0 )
        {
          v6 = *((_DWORD *)a1 + 308);
          v23 = 0LL;
          v21[2] = 0LL;
          *((_DWORD *)a1 + 308) = v6 & 0xFFE7FFFF | 0x100000;
          v22 = 0LL;
          DisassociateShellFrameAppThreads(a1);
          CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v25, v2);
          v7 = (_QWORD **)(v2 + 24);
          v8 = *(_QWORD **)(v2 + 24);
          if ( v8 )
          {
            do
            {
              if ( !(unsigned int)IsMiPMouseMessage(*((unsigned int *)v8 + 6)) )
                break;
              v9 = *v7;
              if ( *v7 == *(_QWORD **)(v2 + 72) )
                *(_QWORD *)(v2 + 72) = 0LL;
              v10 = *(_QWORD *)(v2 + 80);
              if ( v9 == (_QWORD *)v10 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_qq(
                    v10,
                    5u,
                    0x12u,
                    0xDu,
                    (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                    v2,
                    *(_QWORD *)(v2 + 80));
                  v9 = *(_QWORD **)(v2 + 24);
                }
                *(_QWORD *)(v2 + 80) = 0LL;
              }
              DelQEntry((_QWORD *)(v2 + 24), v9, 1);
              v8 = *v7;
            }
            while ( *v7 );
          }
          if ( *(struct tagTHREADINFO **)(v2 + 64) == a1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqq(
                (__int64)&WPP_RECORDER_INITIALIZED,
                4u,
                0x12u,
                0xEu,
                (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                v2,
                a1,
                *(_QWORD *)(v2 + 64));
            *(_QWORD *)(v2 + 64) = 0LL;
          }
          v11 = *(_QWORD *)(v2 + 112);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v21[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v21;
          v21[1] = v11;
          if ( v11 )
            HMLockObject(v11);
          LockW32Thread(v4, &v22);
          v13 = zzzAttachThreadInput((__int64)a1, v4, 32769);
          v14 = *((_QWORD *)a1 + 54);
          v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v14 + 480) = v15;
          v17 = ThreadUnlock1(v14, v15, v16);
          v18 = *((_QWORD *)a1 + 54);
          v20[1] = v17;
          v20[0] = v18 + 112;
          HMAssignmentLock(v20);
          v19 = *(_QWORD *)(v4 + 1392);
          if ( v19 )
            PostMessage(v19, 840, 2, v13);
          if ( gpqForeground == *((_QWORD *)a1 + 54) )
          {
            if ( *(_QWORD *)(gpqForeground + 112LL) )
              zzzInputFocusReceivedWindowEvent();
          }
          PopAndFreeW32ThreadLock((__int64)&v22);
          *((_DWORD *)a1 + 308) ^= (v6 ^ *((_DWORD *)a1 + 308)) & 0x100000;
        }
      }
    }
  }
}
