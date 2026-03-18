/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E1280
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00B2FC4 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1DB4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C008FE54 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0096880 (WPP_RECORDER_SF_qiqdd.c)
 *     IsPointerInputMessage @ 0x1C00A3934 (IsPointerInputMessage.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C01071B0 (GetAppCompatFlags2QuadWord.c)
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z @ 0x1C01E09A4 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01E14A0 (-ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C01F25D0 (DelegateCoalescePointerMessage.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagQMSG *MsgInsertionPoint; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // [rsp+30h] [rbp-38h]

  InputTraceLogging::DManip::ReassignMessage(a3);
  v6 = *((_QWORD *)a2 + 53);
  DelQEntry((unsigned int **)(*((_QWORD *)a1 + 53) + 24LL), (unsigned int *)a3, 0);
  v7 = *((_QWORD *)a1 + 53);
  if ( *(struct tagQMSG **)(v7 + 80) == a3 )
  {
    v8 = *((_QWORD *)a1 + 53);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = *(_QWORD *)(v7 + 80);
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_qq(
        v8,
        v7,
        18,
        10,
        (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
        *((_QWORD *)a1 + 53),
        v18);
      v8 = *((_QWORD *)a1 + 53);
    }
    *(_QWORD *)(v8 + 80) = 0LL;
  }
  *((_DWORD *)a3 + 25) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v6, a3);
  v12 = (_QWORD *)(v6 + 24);
  v13 = (__int64)MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v14 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v14 )
      *v14 = a3;
    else
      *v12 = a3;
    *(_QWORD *)a3 = v13;
    *((_QWORD *)a3 + 1) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = a3;
  }
  else
  {
    if ( *v12 )
    {
      **(_QWORD **)(v6 + 32) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v6 + 32);
    }
    else
    {
      *v12 = a3;
    }
    *(_QWORD *)(v6 + 32) = a3;
  }
  v15 = *(_DWORD *)(v6 + 40) + 1;
  *(_DWORD *)(v6 + 40) = v15;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qiqdd(
      v13,
      v10,
      v11,
      0xBu,
      (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
      a3,
      *((_QWORD *)a3 + 17),
      v6 + 24,
      *(_DWORD *)(v6 + 44),
      v15);
  if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord((__int64)a2) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v16 = *((_DWORD *)a3 + 25);
      if ( (v16 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 53) + 136LL) )
        {
          v17 = *((_QWORD *)a3 + 1);
          if ( v17 )
          {
            if ( *(_DWORD *)(v17 + 24) == 512
              && *(_QWORD *)(v17 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v6 + 80) != v17
              && (v16 & 0x100) == 0 )
            {
              DelQEntry((unsigned int **)(v6 + 24), (unsigned int *)v17, 1);
            }
          }
        }
      }
    }
    WakeSomeone((struct tagQ *)v6, a2, *((_DWORD *)a3 + 6), a3);
  }
}
