/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006CE1C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // r12
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  struct tagBWL *v10; // rax
  struct tagBWL *v11; // r13
  _QWORD *i; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  ULONG64 *v15; // rdx
  __int64 v16; // rdx
  ULONG64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r12
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v32; // rcx
  __int64 CurrentThreadProcess; // rax
  __int128 v34; // [rsp+38h] [rbp-70h] BYREF
  __int64 v35; // [rsp+48h] [rbp-60h]
  __int128 v36; // [rsp+50h] [rbp-58h] BYREF
  __int64 v37; // [rsp+60h] [rbp-48h]

  v1 = a1;
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v32),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( v4 )
  {
    v9 = *(_QWORD *)(v4 + 456);
    if ( v9 )
      v2 = *(_QWORD *)(v9 + 24);
  }
  if ( v2 )
  {
    v10 = BuildHwndList(*(struct tagWND **)(v2 + 112), 2, gptiCurrent);
    v11 = v10;
    if ( v10 )
    {
      for ( i = (_QWORD *)((char *)v10 + 32); *i != 1LL; ++i )
      {
        v13 = (_QWORD *)ValidateHwnd(*i);
        v14 = v13;
        if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
          break;
        if ( v13 && v13[2] == gptiCurrent )
        {
          if ( **(_WORD **)(v13[17] + 8LL) == *(_WORD *)(gpsi + 898LL) )
          {
            v16 = v13[5];
            v15 = *(_DWORD *)(v16 + 252) ? (ULONG64 *)v13[35] : *(ULONG64 **)(v16 + 296);
          }
          else
          {
            v15 = 0LL;
          }
          v36 = 0LL;
          v37 = 0LL;
          v34 = 0LL;
          v35 = 0LL;
          if ( v15 )
          {
            v17 = *v15;
            if ( v17 >= MmUserProbeAddress )
              v17 = MmUserProbeAddress;
            v18 = *(_QWORD *)(v17 + 16);
            LOBYTE(v17) = 1;
            v19 = (__int64 *)HMValidateHandleNoSecure(v18, v17);
            if ( v19 )
            {
              *(_QWORD *)&v36 = *(_QWORD *)(gptiCurrent + 408LL);
              *(_QWORD *)(gptiCurrent + 408LL) = &v36;
              *((_QWORD *)&v36 + 1) = v14;
              HMLockObject(v14);
              v20 = W32GetThreadWin32Thread(KeGetCurrentThread());
              *(_QWORD *)&v34 = *(_QWORD *)(v20 + 408);
              *(_QWORD *)(v20 + 408) = &v34;
              *((_QWORD *)&v34 + 1) = v19;
              HMLockObject(v19);
              while ( v19 && v19 != (__int64 *)v2 )
              {
                v22 = *v19;
                v25 = *((_QWORD *)v1 + 5);
                v26 = *((_DWORD *)v1 + 7);
                while ( --v26 >= 0 )
                {
                  if ( v22 == *(_QWORD *)v25 )
                  {
                    if ( (~*(_BYTE *)(v25 + 32) & 3) != 0 )
                      xxxSendMessage(v14, 647LL, 6LL, 0LL);
                    break;
                  }
                  v25 += 168LL;
                }
                if ( v26 >= 0 )
                  break;
                v19 = (__int64 *)v19[13];
                v24 = *((_QWORD *)&v34 + 1);
                *((_QWORD *)&v34 + 1) = v19;
                if ( v19 )
                  HMLockObject(v19);
                if ( v24 )
                  HMUnlockObject(v24);
                v1 = a1;
              }
              ThreadUnlock1(v22, v21, v23);
              ThreadUnlock1(v28, v27, v29);
              v1 = a1;
            }
          }
        }
      }
      FreeHwndList(v11);
    }
  }
}
