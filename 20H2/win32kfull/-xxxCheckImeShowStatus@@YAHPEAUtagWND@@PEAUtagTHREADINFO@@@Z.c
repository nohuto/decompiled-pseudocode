/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00ECF88
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00ECF50 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E25F4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  unsigned int v2; // ebx
  struct tagBWL *v4; // rax
  PRKPROCESS *v5; // rcx
  struct tagBWL *v6; // r13
  unsigned __int64 *i; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v16; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 *v20; // r12
  unsigned __int64 v21; // r14
  __int64 v22; // r9
  __int64 v23; // r8
  ULONG64 *v24; // rbx
  char v25; // r14
  ULONG64 v26; // rsi
  ULONG64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax

  v2 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v4 = BuildHwndList(*(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL), 2, 0LL);
  v6 = v4;
  if ( v4 )
  {
    for ( i = (unsigned __int64 *)((char *)v4 + 32); ; ++i )
    {
      v8 = *i;
      if ( *i == 1 )
        break;
      v9 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v5)
        || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v16),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      v18 = (unsigned __int16)v8;
      v5 = (PRKPROCESS *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v8 < *(_QWORD *)(gpsi + 8LL) )
      {
        v19 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v8 * LODWORD(gSharedInfo[2]);
        v20 = (__int64 *)HMPkheFromPhe(v19);
        v21 = v8 >> 16;
        if ( ((_WORD)v21 == *(_WORD *)(v19 + 26)
           || (_WORD)v21 == 0xFFFF
           || !(_WORD)v21 && PsGetCurrentProcessWow64Process(v5))
          && (*(_BYTE *)(v19 + 25) & 1) == 0
          && *(_BYTE *)(v19 + 24) == 1 )
        {
          v9 = *v20;
        }
      }
      if ( v9 && a1 != (struct tagWND *)v9 )
      {
        v22 = *(_QWORD *)(v9 + 40);
        v23 = v22;
        if ( (*(_WORD *)(v22 + 42) & 0x1000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v18, v22, v22);
          v22 = *(_QWORD *)(v9 + 40);
          v23 = v22;
        }
        if ( (*(_WORD *)(v23 + 42) & 0x1000) == 0 )
        {
          v5 = (PRKPROCESS *)gpsi;
          if ( **(_WORD **)(*(_QWORD *)(v9 + 136) + 8LL) == *(_WORD *)(gpsi + 898LL) )
            v24 = *(_DWORD *)(v23 + 252) ? *(ULONG64 **)(v9 + 280) : *(ULONG64 **)(v23 + 296);
          else
            v24 = 0LL;
          if ( v24 && *(char *)(v22 + 20) >= 0 && (!a2 || a2 == *(struct tagTHREADINFO **)(v9 + 16)) )
          {
            v25 = 0;
            v5 = *(PRKPROCESS **)(*(_QWORD *)(v9 + 16) + 424LL);
            if ( v5 != *(PRKPROCESS **)(gptiCurrent + 424LL) )
            {
              KeAttachProcess(*v5);
              v25 = 1;
            }
            v26 = *v24;
            if ( *v24 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
            {
              if ( v25 )
                KeDetachProcess();
            }
            else
            {
              v5 = (PRKPROCESS *)MmUserProbeAddress;
              v27 = *v24;
              if ( v26 >= MmUserProbeAddress )
                v27 = MmUserProbeAddress;
              if ( (*(_DWORD *)(v27 + 44) & 1) != 0 )
              {
                v28 = HMValidateHandleNoSecure(*(_QWORD *)(v26 + 16), 1);
                if ( v28 )
                  *(_DWORD *)(v26 + 44) &= ~1u;
              }
              else
              {
                v28 = 0LL;
              }
              if ( v25 )
                KeDetachProcess();
              if ( v28 )
              {
                v29 = *(_QWORD *)(v28 + 16);
                if ( v29 )
                {
                  if ( (*(_DWORD *)(v29 + 488) & 1) == 0 )
                    PostMessage(v28, 642, 1, 0);
                }
              }
            }
          }
        }
      }
    }
    FreeHwndList(v6);
    return 1;
  }
  return v2;
}
