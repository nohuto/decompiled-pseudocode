/*
 * XREFs of xxxDCEWindowHitTestIndirect @ 0x1C00B2200
 * Callers:
 *     xxxDCEWindowHitTest @ 0x1C00B09BC (xxxDCEWindowHitTest.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00B2490 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C009B5D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00B2490 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(struct tagWND *a1, struct tagPOINT a2, __int64 a3)
{
  struct tagWND *v4; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 CurrentProcessWin32Process; // rax
  HWND v16; // rdi
  __int64 v17; // rcx
  int v18; // ebp
  LONG x; // eax
  LONG v20; // ecx
  struct tagWND *v21; // rdi
  unsigned int v23; // r9d
  int v24; // r8d
  int v25; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v28; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  struct tagWND *v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  struct tagPOINT v33; // [rsp+80h] [rbp+8h] BYREF
  struct tagPOINT v34; // [rsp+88h] [rbp+10h] BYREF

  v34 = a2;
  v32 = 0LL;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  v6 = 18;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v28),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v14 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v14 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v14 + 340) )
        {
          v6 = *(_DWORD *)(v14 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
          if ( CurrentProcessWin32Process )
            v6 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
        if ( (*(_DWORD *)(v14 + 328) & 4) != 0 && (v6 & 0xF) == 2 && (v6 & 0xF0) == 0x20 )
          v6 |= 0x20000000u;
      }
    }
  }
  v16 = 0LL;
  v17 = gptiCurrent;
  v30 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v30;
  v31 = 0LL;
  if ( v4 )
  {
    v18 = *(_DWORD *)(a3 + 32);
    do
    {
      x = v34.x;
      v33 = v34;
      v20 = v34.x;
      if ( (v18 & 4) != 0 )
      {
        v23 = *(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL);
        if ( (((unsigned __int16)(v6 >> 8) ^ (unsigned __int16)(v23 >> 8)) & 0x1FF) != 0
          || ((v23 & 0xF) != 2 || (v23 & 0x20000000) == 0 ? (v24 = 0) : (v24 = 1),
              (v6 & 0xF) != 2 || (v6 & 0x20000000) == 0 ? (v25 = 0) : (v25 = 1),
              v24 != v25) )
        {
          LogicalToPhysicalDPIPoint(&v33, &v34, v6, 0LL);
          *(_DWORD *)(a3 + 32) &= ~4u;
          x = v34.x;
          v20 = v33.x;
        }
      }
      if ( !*(_QWORD *)(a3 + 56) || v20 != x || v33.y != v34.y )
        *(_QWORD *)(a3 + 56) = &v33;
      v21 = v31;
      v31 = v4;
      HMLockObject(v4);
      if ( v21 )
        HMUnlockObject(v21);
      v16 = xxxDCEWindowHitTest2Internal(v4, v33, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)a3);
      if ( v16 )
        break;
      *(_DWORD *)(a3 + 32) = v18;
      v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
    }
    while ( v4 );
  }
  ThreadUnlock1(v17, v11, v13);
  return v16;
}
