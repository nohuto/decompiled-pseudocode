/*
 * XREFs of FindQMsg @ 0x1C00964B0
 * Callers:
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0095EB0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C003109C (HMValidateHandleNoRip.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00B440C (WPP_RECORDER_SF_qqq.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C012A0B4 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreeDdeXact @ 0x1C021D4B0 (FreeDdeXact.c)
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
  __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  __int64 **v19; // rbp
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // [rsp+38h] [rbp-50h]
  __int64 *v31; // [rsp+40h] [rbp-48h]
  struct tagTHREADINFO *v32; // [rsp+90h] [rbp+8h]

  v32 = a1;
  v6 = *(__int64 **)a2;
  result = 0LL;
  v31 = 0LL;
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
            CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
            v28 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
            v12 = 0LL,
            v28) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      a1 = (struct tagTHREADINFO *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v11 < *(_QWORD *)(gpsi + 8LL) )
      {
        v17 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v11 * LODWORD(gSharedInfo[2]);
        v18 = v11 >> 16;
        v19 = (__int64 **)HMPkheFromPhe(v17);
        if ( ((_WORD)v18 == *(_WORD *)(v17 + 26)
           || (_WORD)v18 == 0xFFFF
           || !(_WORD)v18 && PsGetCurrentProcessWow64Process(a1))
          && (*(_BYTE *)(v17 + 25) & 1) == 0
          && *(_BYTE *)(v17 + 24) == 1 )
        {
          v12 = *v19;
          if ( *v19 )
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
          CheckRemoveHotkeyBit(v32, a2);
        v20 = *((_QWORD *)v32 + 53);
        if ( *(__int64 **)(v20 + 72) == v6 && *(struct tagTHREADINFO **)(v20 + 64) == v32 )
        {
          EtwTraceInputQueueUnLocked();
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v23 = *((_QWORD *)v32 + 53);
            v30 = *(_QWORD *)(v23 + 64);
            LOBYTE(v23) = 4;
            WPP_RECORDER_SF_qqq(
              gptiCurrent,
              v23,
              18,
              21,
              (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
              *((_QWORD *)v32 + 53),
              gptiCurrent,
              v30);
          }
          *(_QWORD *)(*((_QWORD *)v32 + 53) + 64LL) = 0LL;
        }
        goto LABEL_26;
      }
LABEL_9:
      if ( !a6
        || (!a3 ? (v22 = 0LL) : (v22 = *a3),
            v22 != v6[2]
         || *((_DWORD *)v6 + 6) != -2147482652
         || (v29 = HMValidateHandleNoRip(v6[5], 11), !v29 || (*(_DWORD *)(v29 + 64) & 0x200) == 0)) )
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
              v21 = 1;
              goto LABEL_38;
            }
          }
          v21 = 0;
LABEL_38:
          if ( !v21 )
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
        if ( !v31 )
          v31 = v6;
        goto LABEL_30;
      }
      FreeDdeXact(v29);
LABEL_26:
      DelQEntry(a2, v6, 1LL);
      v6 = *(__int64 **)a2;
LABEL_31:
      if ( !v6 )
        return v31;
    }
  }
  return result;
}
