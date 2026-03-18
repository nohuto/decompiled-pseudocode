/*
 * XREFs of TryDetachShellFrame @ 0x1C01E1AF4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     IsDebuggerAttached @ 0x1C002CEAC (IsDebuggerAttached.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00BAF00 (LockW32Thread.c)
 *     zzzAttachThreadInput @ 0x1C00BF544 (zzzAttachThreadInput.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D781C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     AssociateShellFrameAppThreads @ 0x1C01D2644 (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D279C (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall TryDetachShellFrame(__int64 *a1, __int64 a2, int a3, int a4)
{
  signed int v8; // ebx
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD v21[2]; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-9h] BYREF
  __int128 v24; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+70h] [rbp+1Fh]
  _BYTE v26[32]; // [rsp+78h] [rbp+27h] BYREF

  v8 = gdwMDAQThreshold;
  result = 0LL;
  v23[2] = 0LL;
  v10 = (*(_DWORD *)(a2 + 1232) & 0x100000) == 0;
  v24 = 0LL;
  v25 = 0LL;
  if ( v10 )
  {
    result = FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2);
    if ( !result )
    {
      result = IsDebuggerAttached(a1[53]);
      if ( !(_DWORD)result )
      {
        result = IsDebuggerAttached(*(_QWORD *)(a2 + 424));
        if ( !(_DWORD)result )
        {
          if ( !a3 )
            v8 = gdwMDAQThreshold / 0xAu;
          if ( a4
            || (result = a1[54],
                (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                    - *(_DWORD *)(result + 480)) >= v8) )
          {
            result = AssociateShellFrameAppThreads((__int64)a1, a2);
            if ( (_DWORD)result )
            {
              v11 = *(_QWORD *)(a1[54] + 112);
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v23[0] = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = v23;
              v23[1] = v11;
              if ( v11 )
                HMLockObject(v11);
              LockW32Thread(a2, &v24);
              CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v26, a1[54]);
              v13 = zzzAttachThreadInput((__int64)a1, a2, 0x4000);
              v17 = ThreadUnlock1(v15, v14, v16);
              if ( v13 >= 0 )
              {
                *(_DWORD *)(a2 + 1232) |= 0x80000u;
                v18 = a1[54];
                v21[0] = v18 + 112;
                v21[1] = *(_QWORD *)(v18 + 120);
                HMAssignmentLock(v21);
                if ( v17 )
                {
                  v19 = *(_QWORD *)(a2 + 432);
                  if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 432LL) == v19 )
                  {
                    v22[1] = v17;
                    v22[0] = v19 + 112;
                    HMAssignmentLock(v22);
                  }
                }
                v20 = a1[174];
                if ( v20 )
                  PostMessage(v20, 840, 1, 0);
              }
              return PopAndFreeW32ThreadLock((__int64)&v24);
            }
          }
        }
      }
    }
  }
  return result;
}
