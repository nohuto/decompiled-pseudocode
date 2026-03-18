/*
 * XREFs of ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C0158B00
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     DeferMessagesOnQueue @ 0x1C0005808 (DeferMessagesOnQueue.c)
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C008FE54 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     PhkFirstGlobalValid @ 0x1C00B384C (PhkFirstGlobalValid.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6EA4 (xxxCallJournalPlaybackHook.c)
 */

__int64 __fastcall xxxGetNextSysMsg(
        struct tagQ **a1,
        struct tagQMSG *a2,
        struct tagQMSG *a3,
        struct CMultiPerObjectLockExclusivePpiPtiQ *a4)
{
  unsigned int v7; // eax
  struct tagQ *v9; // rcx
  struct tagMLIST *v10; // r8
  struct tagQMSG **v11; // rcx
  struct tagQMSG *v12; // rcx
  int v13; // eax
  __int64 v14; // rax

  if ( PhkFirstGlobalValid((__int64)a1, 1) && a1[56] == (struct tagQ *)grpdeskRitInput )
  {
    if ( !a2 )
    {
      v7 = xxxCallJournalPlaybackHook(a3);
      if ( v7 != -1 )
      {
        if ( !v7 )
        {
          WakeSomeone(a1[53], 0LL, *((_DWORD *)a3 + 6), 0LL);
          CInputGlobals::MarkLastInputAsJournalling(gpInputGlobals);
          return 1LL;
        }
        *((_WORD *)a1[55] + 3) &= 0xE3F8u;
        *((_WORD *)a1[55] + 2) &= 0xE3F8u;
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 400LL) = *((_DWORD *)a3 + 6);
        qword_1C033AF08 = InternalSetTimer(0LL, qword_1C033AF08, v7, (__int64)JournalTimer, 32, 276);
      }
    }
    return 0LL;
  }
  v9 = a1[53];
  if ( (*((_DWORD *)v9 + 97) & 0x20) != 0 )
  {
    PostPendingMouseMove(v9);
    v9 = a1[53];
  }
  v10 = (struct tagQ *)((char *)v9 + 24);
  if ( !*((_DWORD *)v9 + 10) )
    return 0LL;
  if ( a2 && (v11 = (struct tagQMSG **)*((_QWORD *)v9 + 10), (unsigned __int64)v11 > 1) )
    v12 = *v11;
  else
    v12 = *(struct tagQMSG **)v10;
  if ( ((_DWORD)a1[153] & 0x2000) == 0 )
    goto LABEL_21;
  if ( v12 )
  {
    do
    {
      v13 = *((_DWORD *)v12 + 25);
      if ( (v13 & 0x20) == 0 )
        break;
      if ( (v13 & 0x10) == 0 )
        break;
      v12 = *(struct tagQMSG **)v12;
    }
    while ( v12 );
LABEL_21:
    if ( v12 )
    {
      v14 = *((_QWORD *)v12 + 13);
      if ( v14 && (struct tagQ **)v14 != a1 && (*(_DWORD *)(v14 + 480) & 0x10000) != 0 )
        v12 = DeferMessagesOnQueue(v10, v12);
      if ( v12 )
      {
        *(_OWORD *)a3 = *(_OWORD *)v12;
        *((_OWORD *)a3 + 1) = *((_OWORD *)v12 + 1);
        *((_OWORD *)a3 + 2) = *((_OWORD *)v12 + 2);
        *((_OWORD *)a3 + 3) = *((_OWORD *)v12 + 3);
        *((_OWORD *)a3 + 4) = *((_OWORD *)v12 + 4);
        *((_OWORD *)a3 + 5) = *((_OWORD *)v12 + 5);
        *((_OWORD *)a3 + 6) = *((_OWORD *)v12 + 6);
        *((_OWORD *)a3 + 7) = *((_OWORD *)v12 + 7);
        *((_OWORD *)a3 + 8) = *((_OWORD *)v12 + 8);
        *((_OWORD *)a3 + 9) = *((_OWORD *)v12 + 9);
      }
    }
  }
  return (__int64)v12;
}
