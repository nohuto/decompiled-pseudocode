/*
 * XREFs of zzzReattachThreads @ 0x1C00BF898
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1C00BF544 (zzzAttachThreadInput.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E60E8 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     SetNewForegroundQueue @ 0x1C00BF270 (SetNewForegroundQueue.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00BFC20 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00BFCC0 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00BFDA0 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C00BFE38 (zzzAttachToQueue.c)
 *     UnpackAffectedThreadList @ 0x1C00C0250 (UnpackAffectedThreadList.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00C02B4 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00C041C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00C08F4 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00C25C4 (zzzInputFocusReceivedWindowEvent.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00F661C (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F3B5C (_GetNextQueueWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  struct tagTHREADINFO *v3; // rbp
  int v4; // esi
  int v7; // r12d
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // rsi
  struct _LIST_ENTRY *i; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  struct tagQMSG *v29; // rcx
  int v30; // eax
  struct tagTHREADINFO *v31; // rdx
  __int64 v32; // rdx
  __int64 NextQueueWindow; // rax
  struct tagTHREADINFO *v34; // [rsp+40h] [rbp-38h]
  char v35; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a1 & 2;
  v7 = 1;
  v8 = a1 & 1;
  v9 = *(_QWORD *)(gptiCurrent + 432LL);
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
    v34 = *(struct tagTHREADINFO **)(v10 + 16);
  else
    v34 = *(struct tagTHREADINFO **)(v9 + 96);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v35);
  if ( v8 )
    goto LABEL_10;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_11;
  }
  if ( !v4 && !a3 )
  {
LABEL_10:
    UnpackAffectedThreadList();
    if ( v8 )
    {
LABEL_15:
      v11 = 0LL;
      goto LABEL_16;
    }
  }
LABEL_11:
  zzzRecalcThreadAttachment();
  v11 = gpqForeground;
  if ( !gpqForeground )
    v11 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_DWORD *)(v11 + 392) == 1 )
    goto LABEL_15;
  ++*(_DWORD *)(v11 + 396);
LABEL_16:
  v12 = 0LL;
  if ( gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    v12 = *(_QWORD *)(v14 + 656);
    if ( !v12 && !InAffectedThreadList((const struct tagTHREADINFO *)v14) )
      v12 = *(_QWORD *)(v15 + 432);
  }
  else
  {
    v7 = 0;
  }
  v16 = 0LL;
  if ( gpqForegroundPrev )
  {
    v17 = *(_QWORD *)(gpqForegroundPrev + 128LL);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 16);
      v16 = *(_QWORD *)(v18 + 656);
      if ( !v16 && !InAffectedThreadList((const struct tagTHREADINFO *)v18) )
        v16 = *(_QWORD *)(v19 + 432);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry )
    {
      v23 = (struct tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 82);
      if ( v23 == *((struct tagQ **)RecalcPtiFromListEntry + 54) )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 82) = 0LL;
      }
      else if ( v23 )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 82) = 0LL;
        zzzAttachToQueue(RecalcPtiFromListEntry, v23);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v11 )
  {
    v28 = *(_DWORD *)(v11 + 396);
    if ( !v28 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26, v27);
      v28 = *(_DWORD *)(v11 + 396);
    }
    v29 = *(struct tagQMSG **)(v11 + 24);
    *(_DWORD *)(v11 + 396) = v28 - 1;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_DWORD *)(v11 + 40) = 0;
    RedistributeInput(v29, (struct tagQ *)v11, v34);
    v30 = *(_DWORD *)(v11 + 392);
    if ( !v30 )
    {
      *(_DWORD *)(v11 + 392) = 1;
      v31 = v3;
LABEL_45:
      zzzDestroyQueue(v11, v31);
      goto LABEL_46;
    }
    v32 = *(_QWORD *)(v11 + 88);
    if ( v32 && v11 != *(_QWORD *)(v32 + 432) )
    {
      *(_DWORD *)(v11 + 392) = v30 + 1;
      zzzDestroyQueue(v11, v32);
    }
    v31 = *(struct tagTHREADINFO **)(v11 + 96);
    if ( v31 && v11 != *((_QWORD *)v31 + 54) )
    {
      ++*(_DWORD *)(v11 + 392);
      goto LABEL_45;
    }
  }
LABEL_46:
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v12);
    gpqForegroundPrev = v16;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(4LL);
    UnpackAffectedThreadList();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v35);
    zzzEndDeferWinEventNotify();
    if ( !gpqForeground && v7 )
    {
      NextQueueWindow = GetNextQueueWindow(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 112LL),
                          0LL,
                          0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          *(struct tagTHREADINFO **)(NextQueueWindow + 16),
          *(struct tagQ **)(*(_QWORD *)(NextQueueWindow + 16) + 432LL),
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
    UserAtomicCheck::Detach((UserAtomicCheck *)&v35);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v35);
  }
}
