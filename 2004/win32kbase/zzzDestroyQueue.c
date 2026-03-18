/*
 * XREFs of zzzDestroyQueue @ 0x1C0076490
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RecalculateQueueInfo @ 0x1C002B030 (RecalculateQueueInfo.c)
 *     IsFreeMessageListSupported @ 0x1C003EC74 (IsFreeMessageListSupported.c)
 *     FreeMessageList @ 0x1C003FB40 (FreeMessageList.c)
 *     IsClearDelegationCaptureSupported @ 0x1C0041CB8 (IsClearDelegationCaptureSupported.c)
 *     ClearDelegationCapture @ 0x1C0043950 (ClearDelegationCapture.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C005109C (ApiSetEditionSystemGenerateMove.c)
 *     SetWakeBit @ 0x1C005DD1C (SetWakeBit.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C006E3C8 (ApiSetEditionUpdateRawMouseMode.c)
 *     HMAssignmentUnlock @ 0x1C0076340 (HMAssignmentUnlock.c)
 *     Win32FreeToPagedLookasideList @ 0x1C00810E0 (Win32FreeToPagedLookasideList.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00AD0F0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     LockQCursor @ 0x1C00AD250 (LockQCursor.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00B0764 (WPP_RECORDER_SF_qqq.c)
 *     xxxWindowEvent @ 0x1C00D27C4 (xxxWindowEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

struct tagTHREADINFO *__fastcall zzzDestroyQueue(__int64 a1, __int64 a2)
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
  struct tagTHREADINFO *result; // rax
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
    if ( qword_1C0252030 )
      v22 = qword_1C0252030();
    else
      v22 = -1073741637;
    if ( v22 >= 0 && qword_1C0252038 )
      qword_1C0252038(a1);
    HMAssignmentUnlock((__int64 *)(a1 + 112));
    HMAssignmentUnlock((__int64 *)(a1 + 120));
    HMAssignmentUnlock((__int64 *)(a1 + 128));
    if ( (int)IsClearDelegationCaptureSupported() >= 0 )
      ClearDelegationCapture();
    HMAssignmentUnlock((__int64 *)(a1 + 296));
    LockQCursor(a1, 0LL);
    if ( (int)IsFreeMessageListSupported() >= 0 )
    {
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v23, a1);
      FreeMessageList(a1 + 24);
    }
    result = (struct tagTHREADINFO *)qword_1C0252050;
    if ( qword_1C0252050 )
    {
      result = (struct tagTHREADINFO *)qword_1C0252050();
      v21 = (int)result;
    }
    if ( v21 >= 0 && gpqForeground == a1 )
    {
      result = (struct tagTHREADINFO *)qword_1C0252058;
      if ( qword_1C0252058 )
        result = (struct tagTHREADINFO *)qword_1C0252058(0LL);
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
      result = (struct tagTHREADINFO *)Win32FreeToPagedLookasideList(QLookaside, a1);
    if ( v4 )
      return (struct tagTHREADINFO *)ApiSetEditionSystemGenerateMove(2u);
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
      v10 = (_QWORD **)(*(_QWORD *)(a2 + 448) + 168LL);
      for ( i = *v10; i != v10; i = (_QWORD *)*i )
      {
        v12 = i - 92;
        if ( (*(_DWORD *)(i - 32) & 1) == 0 && v12[53] == a1 )
        {
          v13 = *(_QWORD *)(a2 + 440);
          v7 = i - 92;
          v14 = *(_WORD *)(v13 + 6);
          if ( (v14 & 6) != 0 && (*(_BYTE *)(v12[55] + 10LL) & 6) != 0 )
            v8 = i - 92;
          if ( (v14 & 1) != 0 && (*(_BYTE *)(v12[55] + 10LL) & 1) != 0 )
            v9 = i - 92;
          if ( (*(_WORD *)(v13 + 10) & 0x400) != 0 && (*(_WORD *)(v12[55] + 10LL) & 0x400) != 0 )
            v9 = i - 92;
        }
      }
      v15 = v7;
      if ( v8 )
        v15 = v8;
      if ( v9 )
        v7 = v9;
      if ( qword_1C0252010 )
        v16 = qword_1C0252010();
      else
        v16 = -1073741637;
      if ( v16 >= 0 )
      {
        if ( v15 )
          SetWakeBit();
        if ( v7 )
        {
          SetWakeBit();
          SetWakeBit();
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
    return RecalculateQueueInfo();
  }
  return result;
}
