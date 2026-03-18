/*
 * XREFs of FindQMsg @ 0x1C0052180
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0051B80 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00D899C (WPP_RECORDER_SF_qqq.c)
 *     DelQEntry @ 0x1C00F6B9C (DelQEntry.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C012C144 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreeDdeXact @ 0x1C021C620 (FreeDdeXact.c)
 */

__int64 *__fastcall FindQMsg(
        struct tagTHREADINFO *a1,
        struct tagMLIST *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 *v6; // rbx
  __int64 *result; // rax
  unsigned __int64 v11; // rsi
  __int64 *v12; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  __int64 **v20; // rbp
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v27; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // [rsp+38h] [rbp-50h]
  __int64 *v32; // [rsp+40h] [rbp-48h]
  struct tagTHREADINFO *v33; // [rsp+90h] [rbp+8h]

  v33 = a1;
  v6 = *(__int64 **)a2;
  result = 0LL;
  v32 = 0LL;
  if ( *(_QWORD *)a2 )
  {
    while ( 1 )
    {
      v11 = v6[2];
      v12 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(a1)
        || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v27),
            v29 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
            v12 = 0LL,
            v29) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      v17 = (unsigned __int16)v11;
      a1 = (struct tagTHREADINFO *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v11 < *(_QWORD *)(gpsi + 8LL) )
      {
        v18 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v11 * LODWORD(gSharedInfo[2]);
        v19 = v11 >> 16;
        v20 = (__int64 **)HMPkheFromPhe(v18);
        if ( ((_WORD)v19 == *(_WORD *)(v18 + 26)
           || (_WORD)v19 == 0xFFFF
           || !(_WORD)v19 && PsGetCurrentProcessWow64Process(a1))
          && (*(_BYTE *)(v18 + 25) & 1) == 0
          && *(_BYTE *)(v18 + 24) == 1 )
        {
          v12 = *v20;
          if ( *v20 )
            goto LABEL_9;
        }
        else
        {
          v12 = 0LL;
        }
      }
      if ( v6[2] )
      {
        if ( *((_DWORD *)v6 + 6) == 786 )
          CheckRemoveHotkeyBit(v33, a2);
        v21 = *((_QWORD *)v33 + 54);
        if ( *(__int64 **)(v21 + 72) == v6 && *(struct tagTHREADINFO **)(v21 + 64) == v33 )
        {
          EtwTraceInputQueueUnLocked();
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v24 = *((_QWORD *)v33 + 54);
            v31 = *(_QWORD *)(v24 + 64);
            LOBYTE(v24) = 4;
            WPP_RECORDER_SF_qqq(
              gptiCurrent,
              v24,
              18,
              21,
              (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
              *((_QWORD *)v33 + 54),
              gptiCurrent,
              v31);
          }
          *(_QWORD *)(*((_QWORD *)v33 + 54) + 64LL) = 0LL;
        }
        goto LABEL_26;
      }
LABEL_9:
      if ( !a6
        || (!a3 ? (v23 = 0LL) : (v23 = *a3),
            v23 != v6[2]
         || *((_DWORD *)v6 + 6) != -2147482652
         || (LOBYTE(v17) = 11, v30 = HMValidateHandleNoRip(v6[5], v17), !v30 || (*(_DWORD *)(v30 + 64) & 0x200) == 0)) )
      {
        if ( a3 && a3 != v12 && (a3 != (__int64 *)1 || v12) )
        {
          while ( v12 )
          {
            a1 = (struct tagTHREADINFO *)*(unsigned __int8 *)(v12[5] + 31);
            LOBYTE(a1) = (unsigned __int8)a1 & 0xC0;
            if ( (_BYTE)a1 != 64 )
              break;
            v12 = (__int64 *)v12[13];
            if ( a3 == v12 )
            {
              v22 = 1;
              goto LABEL_38;
            }
          }
          v22 = 0;
LABEL_38:
          if ( !v22 )
            goto LABEL_30;
        }
        a1 = (struct tagTHREADINFO *)*((unsigned int *)v6 + 6);
        if ( (unsigned int)((_DWORD)a1 + 2147482655) <= 7 )
          LODWORD(a1) = (unsigned int)a1 & 0x7FFFFFFF;
        if ( a4 )
        {
          if ( a4 <= a5 )
          {
            if ( (unsigned int)a1 >= a4 )
              goto LABEL_29;
            goto LABEL_30;
          }
          if ( (unsigned int)a1 >= a5 && (unsigned int)a1 <= a4 )
            goto LABEL_30;
        }
        else
        {
          if ( a5 == -1 )
            goto LABEL_15;
LABEL_29:
          if ( (unsigned int)a1 > a5 )
          {
LABEL_30:
            v6 = (__int64 *)*v6;
            goto LABEL_31;
          }
        }
LABEL_15:
        if ( !a6 )
          return v6;
        if ( !v32 )
          v32 = v6;
        goto LABEL_30;
      }
      FreeDdeXact(v30);
LABEL_26:
      DelQEntry(a2, v6, 1LL);
      v6 = *(__int64 **)a2;
LABEL_31:
      if ( !v6 )
        return v32;
    }
  }
  return result;
}
