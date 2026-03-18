/*
 * XREFs of zzzDestroyQueue @ 0x1C0051DF0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C00332A8 (ApiSetEditionUpdateRawMouseMode.c)
 *     Win32FreeToPagedLookasideList @ 0x1C003C900 (Win32FreeToPagedLookasideList.c)
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0075D64 (WPP_RECORDER_SF_qqq.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0076B10 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     LockQCursor @ 0x1C0076C10 (LockQCursor.c)
 *     RecalculateQueueInfo @ 0x1C0094C60 (RecalculateQueueInfo.c)
 *     IsFreeMessageListSupported @ 0x1C00A1834 (IsFreeMessageListSupported.c)
 *     FreeMessageList @ 0x1C00A2120 (FreeMessageList.c)
 *     IsClearDelegationCaptureSupported @ 0x1C00A368C (IsClearDelegationCaptureSupported.c)
 *     ClearDelegationCapture @ 0x1C00A4954 (ClearDelegationCapture.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C00B1B5C (ApiSetEditionSystemGenerateMove.c)
 *     SetWakeBit @ 0x1C00BE2CC (SetWakeBit.c)
 *     xxxWindowEvent @ 0x1C00D2694 (xxxWindowEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall zzzDestroyQueue(__int64 a1, __int64 a2))(void)
{
  int v4; // r15d
  int v5; // edx
  _QWORD *v7; // rbp
  _QWORD *v8; // r11
  _QWORD *v9; // r10
  _QWORD **v10; // r8
  _QWORD *i; // r9
  _QWORD *v12; // rdx
  __int64 v13; // r14
  __int16 v14; // si
  _QWORD *v15; // r14
  int v16; // esi
  __int64 v17; // xmm1_8
  __int64 (*result)(void); // rax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // esi
  int v22; // eax
  __int128 v23; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+50h] [rbp-28h]

  v4 = 0;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v23, a1);
  if ( (*(_DWORD *)(a1 + 392))-- == 1 )
  {
    if ( gpqForeground == a1 )
    {
      v19 = *(_QWORD *)(a1 + 112);
      if ( v19 )
      {
        v20 = 49;
        if ( gdwDeferWinEvent )
          v20 = 51;
        xxxWindowEvent(-2147483645, v19, 0, 6, v20);
      }
    }
    v21 = -1073741637;
    if ( qword_1C0250030 )
      v22 = qword_1C0250030();
    else
      v22 = -1073741637;
    if ( v22 >= 0 && qword_1C0250038 )
      qword_1C0250038(a1);
    HMAssignmentUnlock(a1 + 112);
    HMAssignmentUnlock(a1 + 120);
    HMAssignmentUnlock(a1 + 128);
    if ( (int)IsClearDelegationCaptureSupported() >= 0 )
      ClearDelegationCapture(a1);
    HMAssignmentUnlock(a1 + 296);
    LockQCursor(a1, 0LL);
    if ( (int)IsFreeMessageListSupported() >= 0 )
    {
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v23, a1);
      FreeMessageList(a1 + 24);
    }
    result = qword_1C0250050;
    if ( qword_1C0250050 )
    {
      result = (__int64 (*)(void))qword_1C0250050();
      v21 = (int)result;
    }
    if ( v21 >= 0 && gpqForeground == a1 )
    {
      result = (__int64 (*)(void))qword_1C0250058;
      if ( qword_1C0250058 )
        result = (__int64 (*)(void))qword_1C0250058(0LL);
    }
    if ( gpqForegroundPrev == a1 )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == (struct tagQ *)a1 )
    {
      gpqCursor = 0LL;
      v4 = 1;
    }
    if ( *(_DWORD *)(a1 + 396) )
      *(_DWORD *)(a1 + 388) |= 0x4000000u;
    else
      result = Win32FreeToPagedLookasideList((__int64)QLookaside, a1);
    if ( v4 )
      return (__int64 (*)(void))ApiSetEditionSystemGenerateMove(2LL);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 64) == a2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_qqq(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v5,
          19,
          17,
          (__int64)&WPP_15558b1eb0723b696cc38695125fa388_Traceguids,
          a1,
          (char)gptiCurrent,
          *(_QWORD *)(a1 + 64));
      }
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 96) == a2 || *(_QWORD *)(a1 + 88) == a2 )
    {
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      v10 = (_QWORD **)(*(_QWORD *)(a2 + 456) + 168LL);
      for ( i = *v10; i != v10; i = (_QWORD *)*i )
      {
        v12 = i - 93;
        if ( (*(_DWORD *)(i - 32) & 1) == 0 && v12[54] == a1 )
        {
          v13 = *(_QWORD *)(a2 + 448);
          v7 = i - 93;
          v14 = *(_WORD *)(v13 + 6);
          if ( (v14 & 6) != 0 && (*(_BYTE *)(v12[56] + 10LL) & 6) != 0 )
            v8 = i - 93;
          if ( (v14 & 1) != 0 && (*(_BYTE *)(v12[56] + 10LL) & 1) != 0 )
            v9 = i - 93;
          if ( (*(_WORD *)(v13 + 10) & 0x400) != 0 && (*(_WORD *)(v12[56] + 10LL) & 0x400) != 0 )
            v9 = i - 93;
        }
      }
      v15 = v7;
      if ( v8 )
        v15 = v8;
      if ( v9 )
        v7 = v9;
      if ( qword_1C0250010 )
        v16 = qword_1C0250010();
      else
        v16 = -1073741637;
      if ( v16 >= 0 )
      {
        if ( v15 )
          SetWakeBit(v15, *(_WORD *)(*(_QWORD *)(a2 + 448) + 6LL) & 6);
        if ( v7 )
        {
          SetWakeBit(v7, *(_WORD *)(*(_QWORD *)(a2 + 448) + 6LL) & 1);
          SetWakeBit(v7, *(_WORD *)(*(_QWORD *)(a2 + 448) + 6LL) & 0x400);
        }
      }
      v17 = *(_QWORD *)(a1 + 16);
      v23 = *(_OWORD *)a1;
      v24 = v17;
      if ( *(_QWORD *)(a1 + 96) == a2 )
        *(_QWORD *)(a1 + 96) = v7;
      if ( *(_QWORD *)(a1 + 88) == a2 )
      {
        *(_QWORD *)(a1 + 88) = v15;
        ApiSetEditionUpdateRawMouseMode(a1);
      }
    }
    return (__int64 (*)(void))RecalculateQueueInfo();
  }
  return result;
}
