/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F2718
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00F26E0 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E32B4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  unsigned int v2; // ebx
  struct tagBWL *v3; // rax
  PRKPROCESS *v4; // rcx
  struct tagBWL *v5; // r13
  unsigned __int64 *i; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 *v14; // r12
  unsigned __int64 v15; // r14
  ULONG64 *v16; // rbx
  __int64 v17; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v21; // rcx
  __int64 CurrentThreadProcess; // rax
  char v23; // r14
  ULONG64 v24; // rsi
  ULONG64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax

  v2 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v3 = BuildHwndList(*(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL), 2, 0LL);
  v5 = v3;
  if ( v3 )
  {
    for ( i = (unsigned __int64 *)((char *)v3 + 32); ; ++i )
    {
      v7 = *i;
      if ( *i == 1 )
        break;
      v8 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v4)
        || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v21),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      v4 = (PRKPROCESS *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(gpsi + 8LL) )
      {
        v13 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v7 * LODWORD(gSharedInfo[2]);
        v14 = (__int64 *)HMPkheFromPhe(v13);
        v15 = v7 >> 16;
        if ( ((_WORD)v15 == *(_WORD *)(v13 + 26)
           || (_WORD)v15 == 0xFFFF
           || !(_WORD)v15 && PsGetCurrentProcessWow64Process(v4))
          && (*(_BYTE *)(v13 + 25) & 1) == 0
          && *(_BYTE *)(v13 + 24) == 1 )
        {
          v8 = *v14;
        }
      }
      if ( v8 && a1 != (struct tagWND *)v8 )
      {
        v4 = (PRKPROCESS *)gpsi;
        if ( **(_WORD **)(*(_QWORD *)(v8 + 136) + 8LL) == *(_WORD *)(gpsi + 898LL) )
        {
          v17 = *(_QWORD *)(v8 + 40);
          v16 = *(_DWORD *)(v17 + 252) ? *(ULONG64 **)(v8 + 280) : *(ULONG64 **)(v17 + 296);
        }
        else
        {
          v16 = 0LL;
        }
        if ( v16 && *(char *)(*(_QWORD *)(v8 + 40) + 20LL) >= 0 && (!a2 || a2 == *(struct tagTHREADINFO **)(v8 + 16)) )
        {
          v23 = 0;
          v4 = *(PRKPROCESS **)(*(_QWORD *)(v8 + 16) + 416LL);
          if ( v4 != *(PRKPROCESS **)(gptiCurrent + 416LL) )
          {
            KeAttachProcess(*v4);
            v23 = 1;
          }
          v24 = *v16;
          if ( *v16 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( v23 )
              KeDetachProcess();
          }
          else
          {
            v4 = (PRKPROCESS *)MmUserProbeAddress;
            v25 = *v16;
            if ( v24 >= MmUserProbeAddress )
              v25 = MmUserProbeAddress;
            if ( (*(_DWORD *)(v25 + 44) & 1) != 0 )
            {
              v26 = HMValidateHandleNoSecure(*(_QWORD *)(v24 + 16), 1);
              if ( v26 )
                *(_DWORD *)(v24 + 44) &= ~1u;
            }
            else
            {
              v26 = 0LL;
            }
            if ( v23 )
              KeDetachProcess();
            if ( v26 )
            {
              v27 = *(_QWORD *)(v26 + 16);
              if ( v27 )
              {
                if ( (*(_DWORD *)(v27 + 480) & 1) == 0 )
                  PostMessage(v26, 642, 1, 0);
              }
            }
          }
        }
      }
    }
    FreeHwndList(v5);
    return 1;
  }
  return v2;
}
