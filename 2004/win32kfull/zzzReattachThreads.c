/*
 * XREFs of zzzReattachThreads @ 0x1C0038514
 * Callers:
 *     zzzAttachThreadInput @ 0x1C00381C0 (zzzAttachThreadInput.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E6DA8 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0033860 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     SetNewForegroundQueue @ 0x1C0033BA0 (SetNewForegroundQueue.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0035154 (zzzInputFocusReceivedWindowEvent.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C003889C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C003893C (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C0038A1C (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C0038AB4 (zzzAttachToQueue.c)
 *     UnpackAffectedThreadList @ 0x1C0038ECC (UnpackAffectedThreadList.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C0038F30 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C003909C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00390C4 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _GetNextQueueWindow @ 0x1C01F47CC (_GetNextQueueWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  int v3; // esi
  int v6; // r12d
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // rsi
  struct _LIST_ENTRY *i; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  struct tagQMSG *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 NextQueueWindow; // rax
  struct tagTHREADINFO *v31; // [rsp+40h] [rbp-38h]
  char v32; // [rsp+98h] [rbp+20h] BYREF

  v3 = a1 & 2;
  v6 = 1;
  v7 = a1 & 1;
  v8 = *(_QWORD *)(gptiCurrent + 424LL);
  v9 = *(_QWORD *)(v8 + 112);
  if ( v9 )
    v31 = *(struct tagTHREADINFO **)(v9 + 16);
  else
    v31 = *(struct tagTHREADINFO **)(v8 + 96);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v32);
  if ( v7 )
    goto LABEL_10;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_11;
  }
  if ( !v3 && !a3 )
  {
LABEL_10:
    UnpackAffectedThreadList();
    if ( v7 )
    {
LABEL_15:
      v10 = 0LL;
      goto LABEL_16;
    }
  }
LABEL_11:
  zzzRecalcThreadAttachment();
  v10 = gpqForeground;
  if ( !gpqForeground )
    v10 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(v10 + 392) == 1 )
    goto LABEL_15;
  ++*(_DWORD *)(v10 + 396);
LABEL_16:
  v11 = 0LL;
  if ( gpqForeground && (v12 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    v11 = *(_QWORD *)(v13 + 648);
    if ( !v11 && !InAffectedThreadList((const struct tagTHREADINFO *)v13) )
      v11 = *(_QWORD *)(v14 + 424);
  }
  else
  {
    v6 = 0;
  }
  v15 = 0LL;
  if ( gpqForegroundPrev )
  {
    v16 = *(_QWORD *)(gpqForegroundPrev + 128LL);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      v15 = *(_QWORD *)(v17 + 648);
      if ( !v15 && !InAffectedThreadList((const struct tagTHREADINFO *)v17) )
        v15 = *(_QWORD *)(v18 + 424);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    if ( RecalcPtiFromListEntry )
    {
      v22 = (struct tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 81);
      if ( v22 == *((struct tagQ **)RecalcPtiFromListEntry + 53) )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 81) = 0LL;
      }
      else if ( v22 )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 81) = 0LL;
        zzzAttachToQueue(RecalcPtiFromListEntry, v22);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v10 )
  {
    v26 = *(_DWORD *)(v10 + 396);
    if ( !v26 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
      v26 = *(_DWORD *)(v10 + 396);
    }
    v27 = *(struct tagQMSG **)(v10 + 24);
    *(_DWORD *)(v10 + 396) = v26 - 1;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
    *(_DWORD *)(v10 + 40) = 0;
    RedistributeInput(v27, (struct tagQ *)v10, v31);
    v28 = *(_DWORD *)(v10 + 392);
    if ( !v28 )
    {
      *(_DWORD *)(v10 + 392) = 1;
LABEL_45:
      zzzDestroyQueue(v10);
      goto LABEL_46;
    }
    v29 = *(_QWORD *)(v10 + 88);
    if ( v29 && v10 != *(_QWORD *)(v29 + 424) )
    {
      *(_DWORD *)(v10 + 392) = v28 + 1;
      zzzDestroyQueue(v10);
    }
    v23 = *(_QWORD *)(v10 + 96);
    if ( v23 && v10 != *(_QWORD *)(v23 + 424) )
    {
      ++*(_DWORD *)(v10 + 392);
      goto LABEL_45;
    }
  }
LABEL_46:
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v11, v23, v25);
    gpqForegroundPrev = v15;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent();
    UnpackAffectedThreadList();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v32);
    zzzEndDeferWinEventNotify();
    if ( !gpqForeground && v6 )
    {
      NextQueueWindow = GetNextQueueWindow(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL) + 112LL),
                          0LL,
                          0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          *(struct tagTHREADINFO **)(NextQueueWindow + 16),
          *(struct tagQ **)(*(_QWORD *)(NextQueueWindow + 16) + 424LL),
          6u,
          0LL,
          0,
          0LL,
          *(_QWORD *)NextQueueWindow,
          0LL);
    }
    GenerateMouseMove(0LL);
  }
  else
  {
    UnpackAffectedThreadList();
    UserAtomicCheck::Detach((UserAtomicCheck *)&v32);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v32);
  }
}
