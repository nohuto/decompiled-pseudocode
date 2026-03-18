/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E187C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0035154 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzAttachThreadInput @ 0x1C00381C0 (zzzAttachThreadInput.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00B440C (WPP_RECORDER_SF_qqq.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00EC3FC (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D35AC (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v2; // rdi
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // r15d
  unsigned int **v7; // r14
  unsigned int *v8; // rax
  unsigned int *v9; // rdx
  unsigned int *v10; // rcx
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

  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v24, *((_QWORD *)a1 + 53));
  v2 = *((_QWORD *)a1 + 53);
  if ( *(_DWORD *)(v2 + 40) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v4 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 480) & 1) == 0 )
      {
        v5 = *(_QWORD *)(ShellFrameThreadFromAssociation + 664);
        if ( !v5 || (*(_DWORD *)(v5 + 196) & 0x100000) == 0 )
        {
          v6 = *((_DWORD *)a1 + 306);
          v23 = 0LL;
          v21[2] = 0LL;
          *((_DWORD *)a1 + 306) = v6 & 0xFFE7FFFF | 0x100000;
          v22 = 0LL;
          DisassociateShellFrameAppThreads(a1);
          CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v25, v2);
          v7 = (unsigned int **)(v2 + 24);
          v8 = *(unsigned int **)(v2 + 24);
          if ( v8 )
          {
            do
            {
              if ( !(unsigned int)IsMiPMouseMessage(v8[6]) )
                break;
              v9 = *v7;
              if ( *v7 == *(unsigned int **)(v2 + 72) )
                *(_QWORD *)(v2 + 72) = 0LL;
              v10 = *(unsigned int **)(v2 + 80);
              if ( v9 == v10 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v9) = 5;
                  WPP_RECORDER_SF_qq(
                    (_DWORD)v10,
                    (_DWORD)v9,
                    18,
                    13,
                    (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                    v2,
                    *(_QWORD *)(v2 + 80));
                  v9 = *(unsigned int **)(v2 + 24);
                }
                *(_QWORD *)(v2 + 80) = 0LL;
              }
              DelQEntry((unsigned int **)(v2 + 24), v9, 1);
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
          v21[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v21;
          v21[1] = v11;
          if ( v11 )
            HMLockObject(v11);
          LockW32Thread(v4, &v22);
          v13 = zzzAttachThreadInput((__int64)a1, v4, 32769);
          v14 = *((_QWORD *)a1 + 53);
          v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v14 + 480) = v15;
          v17 = ThreadUnlock1(v14, v15, v16);
          v18 = *((_QWORD *)a1 + 53);
          v20[1] = v17;
          v20[0] = v18 + 112;
          HMAssignmentLock(v20);
          v19 = *(_QWORD *)(v4 + 1384);
          if ( v19 )
            PostMessage(v19, 840, 2, v13);
          if ( gpqForeground == *((_QWORD *)a1 + 53) )
          {
            if ( *(_QWORD *)(gpqForeground + 112LL) )
              zzzInputFocusReceivedWindowEvent();
          }
          PopAndFreeW32ThreadLock((__int64)&v22);
          *((_DWORD *)a1 + 306) ^= (v6 ^ *((_DWORD *)a1 + 306)) & 0x100000;
        }
      }
    }
  }
}
