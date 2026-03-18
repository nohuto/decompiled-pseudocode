/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1DB4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01E1CDC (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     IsPointerInputMessage @ 0x1C00A3934 (IsPointerInputMessage.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0104B30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01E0E54 (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E1280 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01F004C (DelegateReleasePointerMessage.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v3; // rbp
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v14; // [rsp+70h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3, a2);
    InputTraceLogging::DManip::HandleDelegatedInput(a3);
    if ( a2 == 1 )
    {
      v7 = *((_DWORD *)a3 + 25);
      if ( (v7 & 0x20) != 0 )
      {
        v8 = *((_QWORD *)a3 + 2);
        *((_DWORD *)a3 + 25) = v7 & 0xFFFFFF9F | 0x40;
        v9 = HMValidateHandleNoSecure(v8, 1);
        if ( v9 )
        {
          v10 = *((_DWORD *)a3 + 25);
          if ( (v10 & 0x400) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 25) = v10 & 0xFFFFFBFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v9 + 16), a3);
          goto LABEL_18;
        }
LABEL_9:
        if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage(a3);
          DelQEntry((unsigned int **)(*((_QWORD *)a1 + 53) + 24LL), (unsigned int *)a3, 1);
        }
        v11 = *((_QWORD *)a1 + 53);
        if ( *(struct tagQMSG **)(v11 + 80) == a3 )
        {
          v12 = *((_QWORD *)a1 + 53);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v12) = 5;
            WPP_RECORDER_SF_qq(
              v11,
              v12,
              18,
              12,
              (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
              v11,
              *(_QWORD *)(v11 + 80));
            v12 = *((_QWORD *)a1 + 53);
          }
          *(_QWORD *)(v12 + 80) = 0LL;
        }
      }
    }
    else
    {
      if ( a2 == 2 )
        goto LABEL_9;
      *((_DWORD *)a3 + 25) |= 0x10u;
    }
LABEL_18:
    EtwTraceEndDelegatedInputWorker(a3, a2);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  return (struct tagQMSG *)v3;
}
