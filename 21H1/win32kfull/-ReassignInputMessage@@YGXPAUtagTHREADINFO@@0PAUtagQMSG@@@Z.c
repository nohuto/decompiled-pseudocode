/*
 * XREFs of ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651
 * Callers:
 *     ?CheckCrossThreadInput@@YGHQAUtagWND@@PAUtagQMSG@@PAH2PAPAU2@@Z @ 0x9C586 (-CheckCrossThreadInput@@YGHQAUtagWND@@PAUtagQMSG@@PAH2PAPAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z @ 0x14DF5D (-_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _WPP_RECORDER_SF_qiqdd@44 @ 0x6C1F6 (_WPP_RECORDER_SF_qiqdd@44.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     _GetAppCompatFlags2QuadWord@4 @ 0xA14BE (_GetAppCompatFlags2QuadWord@4.c)
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 *     ?FindMsgInsertionPoint@@YGPAUtagQMSG@@QAUtagQ@@QAU1@@Z @ 0x14CEA3 (-FindMsgInsertionPoint@@YGPAUtagQMSG@@QAUtagQ@@QAU1@@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0x14D801 (-ReassignMessage@DManip@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     _DelegateCoalescePointerMessage@12 @ 0x15B8F5 (_DelegateCoalescePointerMessage@12.c)
 */

void __userpurge ReassignInputMessage(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *a3,
        struct tagTHREADINFO *a4,
        struct tagQMSG *a5)
{
  int v5; // ebx
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  struct tagQMSG *MsgInsertionPoint; // eax
  int v10; // ecx
  _DWORD *v11; // ebx
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // edx
  const struct tagQMSG *v16; // [esp+0h] [ebp-18h]
  unsigned int v17; // [esp+0h] [ebp-18h]
  struct tagQMSG *v18; // [esp+4h] [ebp-14h]
  struct tagTHREADINFO *v21; // [esp+14h] [ebp-4h]

  v5 = a1;
  InputTraceLogging::DManip::ReassignMessage(v16);
  v6 = *(_DWORD *)(v5 + 236);
  DelQEntry((_DWORD *)(*(_DWORD *)(a2 + 236) + 12), a3, 0);
  v7 = *(_DWORD *)(a2 + 236);
  v21 = *(struct tagTHREADINFO **)(v7 + 44);
  if ( v21 == a3 )
  {
    v8 = *(_DWORD *)(a2 + 236);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = a1;
      if ( LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
      {
        LOBYTE(v7) = 5;
        WPP_RECORDER_SF_qq(
          v8,
          v7,
          0x12u,
          10,
          (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
          *(_DWORD *)(a2 + 236),
          (char)v21);
        v8 = *(_DWORD *)(a2 + 236);
      }
    }
    *(_DWORD *)(v8 + 44) = 0;
  }
  *((_DWORD *)a3 + 16) &= ~0x10u;
  *((_DWORD *)a3 + 1) = 0;
  *(_DWORD *)a3 = 0;
  *((_DWORD *)a3 + 17) = v5;
  MsgInsertionPoint = FindMsgInsertionPoint(v6, (unsigned int *)a3);
  v10 = (int)MsgInsertionPoint;
  v11 = (_DWORD *)(v6 + 12);
  if ( MsgInsertionPoint )
  {
    v12 = (_DWORD *)*((_DWORD *)MsgInsertionPoint + 1);
    if ( v12 )
      *v12 = a3;
    else
      *v11 = a3;
    *(_DWORD *)a3 = v10;
    *((_DWORD *)a3 + 1) = *(_DWORD *)(v10 + 4);
    *(_DWORD *)(v10 + 4) = a3;
  }
  else
  {
    if ( *v11 )
    {
      **(_DWORD **)(v6 + 16) = a3;
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v6 + 16);
    }
    else
    {
      *v11 = a3;
    }
    *(_DWORD *)(v6 + 16) = a3;
  }
  v13 = *(_DWORD *)(v6 + 20) + 1;
  *(_DWORD *)(v6 + 20) = v13;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qiqdd(
      v10,
      11,
      (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
      (char)a3,
      *((_DWORD *)a3 + 24),
      *((_DWORD *)a3 + 25),
      v6 + 12,
      *(_DWORD *)(v6 + 24),
      v13);
  if ( !IsPointerInputMessage(*((_DWORD *)a3 + 3)) || !DelegateCoalescePointerMessage(a3) )
  {
    if ( ((unsigned int)&loc_20000 & ((unsigned __int64)GetAppCompatFlags2QuadWord(a1) >> 32)) != 0
      && *((_DWORD *)a3 + 3) == 512 )
    {
      v14 = *((_DWORD *)a3 + 16);
      if ( (v14 & 0x40) != 0 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 236) + 72) )
        {
          v15 = (_DWORD *)*((_DWORD *)a3 + 1);
          if ( v15 )
          {
            if ( v15[3] == 512 && v15[2] == *((_DWORD *)a3 + 2) && *(_DWORD **)(v6 + 44) != v15 && (v14 & 0x100) == 0 )
              DelQEntry((_DWORD *)(v6 + 12), v15, 1);
          }
        }
      }
    }
    WakeSomeone(a1, (_DWORD *)v6, *((struct tagQ **)a3 + 3), a3, v17, v18);
  }
}
