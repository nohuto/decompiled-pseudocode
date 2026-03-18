/*
 * XREFs of _zzzReattachThreads@12 @ 0xC795C
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _zzzAttachThreadInput@12 @ 0xC76E4 (_zzzAttachThreadInput@12.c)
 *     _zzzInitTask@48 @ 0x142324 (_zzzInitTask@48.c)
 *     ?zzzJournalAttach@@YGHPAUtagTHREADINFO@@H@Z @ 0x1526E3 (-zzzJournalAttach@@YGHPAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     _zzzInputFocusReceivedWindowEvent@4 @ 0x177FE (_zzzInputFocusReceivedWindowEvent@4.c)
 *     _SetNewForegroundQueue@4 @ 0x18960 (_SetNewForegroundQueue@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     ?InAffectedThreadList@@YGPAUPTI_LIST@@PBUtagTHREADINFO@@@Z @ 0xA2540 (-InAffectedThreadList@@YGPAUPTI_LIST@@PBUtagTHREADINFO@@@Z.c)
 *     ?Detach@UserAtomicCheck@@QAEXXZ @ 0xAAF2E (-Detach@UserAtomicCheck@@QAEXXZ.c)
 *     ?zzzRecalcThreadAttachment@@YGXXZ @ 0xC7C48 (-zzzRecalcThreadAttachment@@YGXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YGPAU_LIST_ENTRY@@XZ @ 0xC7CB4 (-GetRecalcHeadPtiListEntry@@YGPAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YGPAUtagTHREADINFO@@PAU_LIST_ENTRY@@@Z @ 0xC7D7A (-GetRecalcPtiFromListEntry@@YGPAUtagTHREADINFO@@PAU_LIST_ENTRY@@@Z.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 *     _UnpackAffectedThreadList@0 @ 0xC843C (_UnpackAffectedThreadList@0.c)
 *     ?PackAffectedThreadList@@YGXPBUtagTHREADINFO@@0@Z @ 0xC8478 (-PackAffectedThreadList@@YGXPBUtagTHREADINFO@@0@Z.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, int a2, int a3)
{
  struct tagTHREADINFO *v3; // ebx
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  struct tagQMSG *v8; // eax
  _DWORD *v9; // esi
  int v10; // ecx
  struct _LIST_ENTRY *v11; // ecx
  int v12; // ecx
  int v13; // ecx
  struct _LIST_ENTRY *v14; // ecx
  int v15; // ecx
  struct _LIST_ENTRY *i; // edi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  unsigned int *NextQueueWindow; // eax
  int v24; // [esp-4h] [ebp-34h]
  const struct tagTHREADINFO *v25; // [esp+0h] [ebp-30h]
  const struct tagTHREADINFO *v26; // [esp+4h] [ebp-2Ch]
  int Flink; // [esp+10h] [ebp-20h]
  struct _LIST_ENTRY *v28; // [esp+14h] [ebp-1Ch]
  struct tagQMSG *v29; // [esp+18h] [ebp-18h]
  int v31; // [esp+20h] [ebp-10h]
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // [esp+24h] [ebp-Ch]
  _BYTE v33[8]; // [esp+28h] [ebp-8h] BYREF

  v3 = 0;
  v4 = a1 & 1;
  v5 = a1 & 2;
  v6 = *(_DWORD *)(_gptiCurrent + 236);
  v7 = *(_DWORD *)(v6 + 60);
  if ( v7 )
    v8 = *(struct tagQMSG **)(v7 + 8);
  else
    v8 = *(struct tagQMSG **)(v6 + 52);
  v29 = v8;
  ++_gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v33);
  if ( v4 )
    goto LABEL_10;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(v25, v26);
    goto LABEL_11;
  }
  if ( !v5 && !a3 )
  {
LABEL_10:
    UnpackAffectedThreadList();
    if ( v4 )
    {
LABEL_15:
      v9 = 0;
      goto LABEL_16;
    }
  }
LABEL_11:
  zzzRecalcThreadAttachment();
  v9 = (_DWORD *)_gpqForeground;
  if ( !_gpqForeground )
    v9 = *(_DWORD **)(_gptiCurrent + 236);
  if ( v9[72] == 1 )
    goto LABEL_15;
  ++v9[73];
LABEL_16:
  Flink = 0;
  if ( _gpqForeground && (v10 = *(_DWORD *)(_gpqForeground + 64)) != 0 )
  {
    v11 = *(struct _LIST_ENTRY **)(v10 + 8);
    v31 = 1;
    Flink = (int)v11[45].Flink;
    if ( !Flink && !InAffectedThreadList(v11) )
      Flink = *(_DWORD *)(v12 + 236);
  }
  else
  {
    v31 = 0;
  }
  v28 = 0;
  if ( _gpqForegroundPrev )
  {
    v13 = *(_DWORD *)(_gpqForegroundPrev + 68);
    if ( v13 )
    {
      v14 = *(struct _LIST_ENTRY **)(v13 + 8);
      v28 = v14[45].Flink;
      if ( !v28 && !InAffectedThreadList(v14) )
        v28 = *(struct _LIST_ENTRY **)(v15 + 236);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry((struct _LIST_ENTRY *)v25);
    v3 = RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry )
    {
      v18 = *((_DWORD *)RecalcPtiFromListEntry + 90);
      if ( v18 == *((_DWORD *)RecalcPtiFromListEntry + 59) )
      {
        *((_DWORD *)RecalcPtiFromListEntry + 90) = 0;
      }
      else if ( v18 )
      {
        *((_DWORD *)RecalcPtiFromListEntry + 90) = 0;
        zzzAttachToQueue(RecalcPtiFromListEntry, v18, v9, Flink == v18);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v9 )
  {
    v19 = v9[73];
    if ( !v19 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v19 = v9[73];
    }
    v9[3] = 0;
    v9[4] = 0;
    v9[5] = 0;
    v9[73] = v19 - 1;
    RedistributeInput(v29, v25, v26);
    v20 = v9[72];
    if ( v20 )
    {
      v21 = v9[12];
      if ( v21 && v9 != *(_DWORD **)(v21 + 236) )
      {
        v24 = v9[12];
        v9[72] = v20 + 1;
        zzzDestroyQueue(v9, v24);
      }
      v22 = v9[13];
      if ( v22 && v9 != *(_DWORD **)(v22 + 236) )
      {
        ++v9[72];
        zzzDestroyQueue(v9, v22);
      }
    }
    else
    {
      v9[72] = 1;
      zzzDestroyQueue(v9, v3);
    }
  }
  if ( *(_DWORD *)(_gptiCurrent + 248) == _grpdeskRitInput )
  {
    SetNewForegroundQueue(Flink);
    _gpqForegroundPrev = v28;
    if ( _gpqForeground && *(_DWORD *)(_gpqForeground + 60) )
      zzzInputFocusReceivedWindowEvent((void *)4);
    UnpackAffectedThreadList();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
    zzzEndDeferWinEventNotify();
    if ( !_gpqForeground && v31 )
    {
      NextQueueWindow = (unsigned int *)_GetNextQueueWindow(
                                          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 4) + 12)
                                                    + 60),
                                          0,
                                          0);
      if ( NextQueueWindow )
        PostEventMessage((struct tagTHREADINFO *)6, 0, 0, 0, *NextQueueWindow, (unsigned int)v25, (int)v26);
    }
    GenerateMouseMove(0);
  }
  else
  {
    UnpackAffectedThreadList();
    UserAtomicCheck::Detach((UserAtomicCheck *)v33);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
  }
}
