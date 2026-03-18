/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E10F4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01E101C (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     IsPointerInputMessage @ 0x1C004CFC4 (IsPointerInputMessage.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     DelQEntry @ 0x1C00F6B9C (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6CF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01E0194 (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E05C0 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01EF3DC (DelegateReleasePointerMessage.c)
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
          DelQEntry((_QWORD *)(*((_QWORD *)a1 + 54) + 24LL), a3, 1);
        }
        v11 = *((_QWORD *)a1 + 54);
        if ( *(struct tagQMSG **)(v11 + 80) == a3 )
        {
          v12 = *((_QWORD *)a1 + 54);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_qq(
              v11,
              5u,
              0x12u,
              0xCu,
              (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
              v11,
              *(_QWORD *)(v11 + 80));
            v12 = *((_QWORD *)a1 + 54);
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
