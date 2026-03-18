/*
 * XREFs of zzzDestroyQueue @ 0x1C006FE70
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RecalculateQueueInfo @ 0x1C001B510 (RecalculateQueueInfo.c)
 *     IsClearDelegationCaptureSupported @ 0x1C002AB68 (IsClearDelegationCaptureSupported.c)
 *     IsFreeMessageListSupported @ 0x1C00303B4 (IsFreeMessageListSupported.c)
 *     FreeMessageList @ 0x1C0030FA0 (FreeMessageList.c)
 *     ClearDelegationCapture @ 0x1C00341E0 (ClearDelegationCapture.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C004399C (ApiSetEditionSystemGenerateMove.c)
 *     SetWakeBit @ 0x1C005025C (SetWakeBit.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C00634F8 (ApiSetEditionUpdateRawMouseMode.c)
 *     HMAssignmentUnlock @ 0x1C0073400 (HMAssignmentUnlock.c)
 *     LockQCursor @ 0x1C0073CB4 (LockQCursor.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00744E0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     Win32FreeToPagedLookasideList @ 0x1C008BD10 (Win32FreeToPagedLookasideList.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C009D594 (WPP_RECORDER_SF_qqq.c)
 *     xxxWindowEvent @ 0x1C00D1D54 (xxxWindowEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

struct tagTHREADINFO *__fastcall zzzDestroyQueue(__int64 a1, __int64 a2)
{
  int v4; // r15d
  int v5; // edx
  __int64 v7; // rbp
  _QWORD *v8; // r11
  _QWORD *v9; // r10
  _QWORD *v10; // r8
  _QWORD *i; // r9
  _QWORD *v12; // rdx
  __int64 v13; // r14
  __int16 v14; // si
  __int64 v15; // r14
  int v16; // esi
  __int64 v17; // r8
  __int64 v18; // xmm1_8
  struct tagTHREADINFO *result; // rax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // esi
  int v23; // eax
  __int128 v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-28h]

  v4 = 0;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v24, a1);
  if ( (*(_DWORD *)(a1 + 392))-- == 1 )
  {
    if ( gpqForeground == a1 )
    {
      v20 = *(_QWORD *)(a1 + 112);
      if ( v20 )
      {
        v21 = 49;
        if ( gdwDeferWinEvent )
          v21 = 51;
        xxxWindowEvent(-2147483645, v20, 0, 6, v21);
      }
    }
    v22 = -1073741637;
    if ( qword_1C0257FF0 )
      v23 = qword_1C0257FF0();
    else
      v23 = -1073741637;
    if ( v23 >= 0 && qword_1C0257FF8 )
      qword_1C0257FF8(a1);
    HMAssignmentUnlock(a1 + 112);
    HMAssignmentUnlock(a1 + 120);
    HMAssignmentUnlock(a1 + 128);
    if ( (int)IsClearDelegationCaptureSupported() >= 0 )
      ClearDelegationCapture();
    HMAssignmentUnlock(a1 + 296);
    LockQCursor(a1, 0LL);
    if ( (int)IsFreeMessageListSupported() >= 0 )
    {
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v24, a1);
      FreeMessageList(a1 + 24);
    }
    result = (struct tagTHREADINFO *)qword_1C0258010;
    if ( qword_1C0258010 )
    {
      result = (struct tagTHREADINFO *)qword_1C0258010();
      v22 = (int)result;
    }
    if ( v22 >= 0 && gpqForeground == a1 )
    {
      result = (struct tagTHREADINFO *)qword_1C0258018;
      if ( qword_1C0258018 )
        result = (struct tagTHREADINFO *)qword_1C0258018(0LL);
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
          (__int64)&WPP_b90bd84c38ec3dda007edf3579337c68_Traceguids,
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
      v10 = (_QWORD *)(*(_QWORD *)(a2 + 448) + 168LL);
      for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
      {
        v12 = i - 92;
        if ( (*(_DWORD *)(i - 32) & 1) == 0 && v12[53] == a1 )
        {
          v13 = *(_QWORD *)(a2 + 440);
          v7 = (__int64)(i - 92);
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
        v15 = (__int64)v8;
      if ( v9 )
        v7 = (__int64)v9;
      if ( qword_1C0257FD0 )
        v16 = qword_1C0257FD0();
      else
        v16 = -1073741637;
      if ( v16 >= 0 )
      {
        if ( v15 )
          SetWakeBit(v15, *(_WORD *)(*(_QWORD *)(a2 + 440) + 6LL) & 6, (__int64)v10);
        if ( v7 )
        {
          SetWakeBit(v7, *(_WORD *)(*(_QWORD *)(a2 + 440) + 6LL) & 1, (__int64)v10);
          SetWakeBit(v7, *(_WORD *)(*(_QWORD *)(a2 + 440) + 6LL) & 0x400, v17);
        }
      }
      v18 = *(_QWORD *)(a1 + 16);
      v24 = *(_OWORD *)a1;
      v25 = v18;
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
