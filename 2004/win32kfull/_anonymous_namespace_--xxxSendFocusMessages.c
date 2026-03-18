/*
 * XREFs of _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034844
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     xxxFocusSetInputContext @ 0x1C0034B4C (xxxFocusSetInputContext.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0034C3C (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0034CC4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00350E4 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0035154 (zzzInputFocusReceivedWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall anonymous_namespace_::xxxSendFocusMessages(__int64 a1, struct tagWND *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct tagTHREADINFO *v9; // rcx
  int v10; // ebp
  __int64 v11; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  _QWORD v17[4]; // [rsp+50h] [rbp-28h] BYREF

  v17[2] = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 424) + 388LL) &= ~0x800u;
  if ( !a2 )
  {
    v13 = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(v13 + 120) )
      *(_DWORD *)(v13 + 388) |= 0x800u;
  }
  v4 = *(_QWORD *)(a1 + 424);
  v5 = *(__int64 **)(v4 + 112);
  v17[0] = *(_QWORD *)(a1 + 408);
  *(_QWORD *)(a1 + 408) = v17;
  v17[1] = v5;
  if ( v5 )
  {
    HMLockObject(v5);
    v4 = *(_QWORD *)(a1 + 424);
  }
  *((_QWORD *)&v15 + 1) = a2;
  *(_QWORD *)&v15 = v4 + 112;
  HMAssignmentLock(&v15);
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 424) == gpqForeground )
    {
      v9 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
      v16 = 0LL;
      v10 = 0;
      v15 = 0LL;
      if ( v9 != (struct tagTHREADINFO *)gptiCurrent )
      {
        LockW32Thread((__int64)v9, &v15);
        v9 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
        v10 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(v9, a2);
      if ( v10 )
        PopAndFreeW32ThreadLock(&v15);
    }
    v7 = *(_QWORD *)(a1 + 424);
    v6 = v7;
    if ( v7 == gpqForeground && a2 == *(struct tagWND **)(v7 + 112) )
    {
      v7 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v7 & 0x80u) == 0LL )
      {
        xxxApplyGlobalInputSettings(v7, v6);
        v6 = *(_QWORD *)(a1 + 424);
      }
    }
    if ( v5 )
    {
      if ( v6 == gpqForeground )
        zzzInputFocusLostWindowEvent(v5, 2LL);
      xxxSendMessage(v5, 8LL, *(_QWORD *)a2, 0LL);
      v7 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v5, 0LL, 0LL);
    }
    if ( a2 == *(struct tagWND **)(*(_QWORD *)(a1 + 424) + 112LL) )
    {
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1LL, 0LL);
      xxxWindowEvent(0x8005u, 0);
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 2) + 1224LL) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
      {
        if ( v5 )
          v14 = *v5;
        else
          v14 = 0LL;
        xxxSendNotifyMessage(a2, 7LL, v14, 0LL, 1);
      }
      else
      {
        if ( v5 )
          v11 = *v5;
        else
          v11 = 0LL;
        xxxSendMessage(a2, 7LL, v11, 0LL);
      }
      v6 = gpqForeground;
      if ( gpqForeground && *(struct tagWND **)(gpqForeground + 112LL) == a2 )
        zzzInputFocusReceivedWindowEvent(2LL);
    }
  }
  else if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 424) == gpqForeground )
      zzzInputFocusLostWindowEvent(v5, 3LL);
    xxxWindowEvent(0x8005u, 0);
    xxxSendMessage(v5, 8LL, 0LL, 0LL);
    v6 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v5, 0LL, 0LL);
  }
  return ThreadUnlock1(v7, v6, v8);
}
