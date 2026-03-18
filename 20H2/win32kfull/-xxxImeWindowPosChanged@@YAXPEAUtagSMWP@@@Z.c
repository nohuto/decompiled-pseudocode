/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0048D78
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1)
{
  __int64 v1; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v9; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  _QWORD *i; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  ULONG64 *v22; // rdx
  ULONG64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rbx
  __int64 v26; // rax
  struct tagSMWP *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // esi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int128 v36; // [rsp+38h] [rbp-70h] BYREF
  __int64 v37; // [rsp+48h] [rbp-60h]
  __int128 v38; // [rsp+50h] [rbp-58h] BYREF
  __int64 v39; // [rsp+60h] [rbp-48h]

  v1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v9),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
    v12 = *(_QWORD *)(v3 + 464);
    if ( v12 )
      v1 = *(_QWORD *)(v12 + 24);
  }
  if ( v1 )
  {
    v13 = BuildHwndList(*(struct tagWND **)(v1 + 112));
    v14 = v13;
    if ( v13 )
    {
      for ( i = (_QWORD *)(v13 + 32); *i != 1LL; ++i )
      {
        v16 = ValidateHwnd(*i);
        v19 = (_QWORD *)v16;
        v20 = *(unsigned int *)(gptiCurrent + 488LL);
        if ( (v20 & 1) != 0 )
          break;
        if ( v16 && *(_QWORD *)(v16 + 16) == gptiCurrent )
        {
          if ( (v21 = *(_QWORD *)(v16 + 40), (*(_WORD *)(v21 + 42) & 0x1000) != 0)
            && (MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v17, v21, v18),
                v21 = v19[5],
                (*(_WORD *)(v21 + 42) & 0x1000) != 0)
            || **(_WORD **)(v19[17] + 8LL) != *(_WORD *)(gpsi + 898LL) )
          {
            v22 = 0LL;
          }
          else
          {
            v22 = *(_DWORD *)(v21 + 252) ? (ULONG64 *)v19[35] : *(ULONG64 **)(v21 + 296);
          }
          v38 = 0LL;
          v39 = 0LL;
          v36 = 0LL;
          v37 = 0LL;
          if ( v22 )
          {
            v23 = *v22;
            if ( v23 >= MmUserProbeAddress )
              v23 = MmUserProbeAddress;
            v24 = *(_QWORD *)(v23 + 16);
            LOBYTE(v23) = 1;
            v25 = (__int64 *)HMValidateHandleNoSecure(v24, v23);
            if ( v25 )
            {
              *(_QWORD *)&v38 = *(_QWORD *)(gptiCurrent + 416LL);
              *(_QWORD *)(gptiCurrent + 416LL) = &v38;
              *((_QWORD *)&v38 + 1) = v19;
              HMLockObject(v19);
              v26 = W32GetThreadWin32Thread(KeGetCurrentThread());
              *(_QWORD *)&v36 = *(_QWORD *)(v26 + 416);
              *(_QWORD *)(v26 + 416) = &v36;
              *((_QWORD *)&v36 + 1) = v25;
              HMLockObject(v25);
              do
              {
                if ( v25 == (__int64 *)v1 )
                  break;
                v28 = *v25;
                v27 = a1;
                v30 = *((_QWORD *)a1 + 5);
                v31 = *((_DWORD *)a1 + 7);
                while ( --v31 >= 0 )
                {
                  if ( v28 == *(_QWORD *)v30 )
                  {
                    if ( (~*(_BYTE *)(v30 + 32) & 3) != 0 )
                      xxxSendMessage(v19, 647LL, 6LL, 0LL);
                    break;
                  }
                  v30 += 168LL;
                }
                if ( v31 >= 0 )
                  break;
                v25 = (__int64 *)v25[13];
                v32 = *((_QWORD *)&v36 + 1);
                *((_QWORD *)&v36 + 1) = v25;
                if ( v25 )
                  HMLockObject(v25);
                if ( v32 )
                  HMUnlockObject(v32);
              }
              while ( v25 );
              ThreadUnlock1(v28, v27, v29);
              ThreadUnlock1(v34, v33, v35);
            }
          }
        }
      }
      FreeHwndList(v14);
    }
  }
}
