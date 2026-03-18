/*
 * XREFs of zzzAttachToQueue @ 0x1C0038AB4
 * Callers:
 *     zzzReattachThreads @ 0x1C0038514 (zzzReattachThreads.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     zzzSetDesktop @ 0x1C00B3880 (zzzSetDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C00BD740 (xxxSetThreadDesktop.c)
 *     xxxHardErrorControl @ 0x1C0242CAC (xxxHardErrorControl.c)
 * Callees:
 *     LockCaptureWindow @ 0x1C0036324 (LockCaptureWindow.c)
 *     ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C0038E70 (-CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00390C4 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     LockQCursor @ 0x1C0039650 (LockQCursor.c)
 *     UpdateRawMouseMode @ 0x1C0090198 (UpdateRawMouseMode.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00B440C (WPP_RECORDER_SF_qqq.c)
 *     UnlockCaptureWindow @ 0x1C0102BB0 (UnlockCaptureWindow.c)
 *     IsInsideMenuLoop @ 0x1C0114F30 (IsInsideMenuLoop.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E0640 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

__int64 __fastcall zzzAttachToQueue(struct tagTHREADINFO *a1, struct tagQ *a2, __int64 a3, int a4)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax
  struct tagTHREADINFO *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned int v19; // ecx
  __int64 v20; // rbx
  struct tagQMSG *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // xmm1_8
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // [rsp+38h] [rbp-28h]
  __int128 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]

  v8 = CheckTransferState(a1, a2, 120, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      *((_QWORD *)&v33 + 1) = *(_QWORD *)(*(_QWORD *)(v10 + 424) + 120LL);
      *(_QWORD *)&v33 = v9 + 120;
      HMAssignmentLock(&v33);
      HMAssignmentUnlock(*((_QWORD *)a1 + 53) + 120LL);
      v22 = *((_QWORD *)a1 + 53);
      v23 = *(_QWORD *)(v22 + 296);
      if ( v23 )
      {
        if ( *(struct tagTHREADINFO **)(v23 + 16) == a1 && !*((_QWORD *)a2 + 37) )
        {
          *(_OWORD *)((char *)a2 + 296) = *(_OWORD *)(v22 + 296);
          *(_OWORD *)((char *)a2 + 312) = *(_OWORD *)(v22 + 312);
          *(_OWORD *)((char *)a2 + 328) = *(_OWORD *)(v22 + 328);
          *(_OWORD *)((char *)a2 + 344) = *(_OWORD *)(v22 + 344);
          *(_OWORD *)((char *)a2 + 360) = *(_OWORD *)(v22 + 360);
          *(_QWORD *)(*((_QWORD *)a1 + 53) + 296LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState((struct tagTHREADINFO *)v10, 0);
  }
  v11 = CheckTransferState(a1, a2, 112, a4) - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      *((_QWORD *)&v33 + 1) = *(_QWORD *)(*((_QWORD *)a1 + 53) + 112LL);
      *(_QWORD *)&v33 = (char *)a2 + 112;
      HMAssignmentLock(&v33);
      HMAssignmentUnlock(*((_QWORD *)a1 + 53) + 112LL);
    }
  }
  else
  {
    CancelInputState(v12, 1u);
  }
  v13 = *((_QWORD *)a1 + 53);
  HMAssignmentUnlock(v13 + 136);
  *(_BYTE *)(v13 + 144) = 0;
  HMAssignmentUnlock((char *)a2 + 136);
  *((_BYTE *)a2 + 144) = 0;
  v14 = CheckTransferState(a1, a2, 104, a4) - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      LockCaptureWindow(a2, *(struct tagWND **)(*((_QWORD *)a1 + 53) + 104LL));
      UnlockCaptureWindow(*((_QWORD *)a1 + 53));
      v27 = *((_QWORD *)a2 + 2);
      v33 = *(_OWORD *)a2;
      v34 = v27;
      UpdateRawMouseMode(a2, v28, v29);
      v30 = *((_DWORD *)a2 + 97);
      *((_DWORD *)a2 + 37) = *(_DWORD *)(*((_QWORD *)a1 + 53) + 148LL);
      *((_DWORD *)a2 + 97) = v30 ^ (v30 ^ *(_DWORD *)(*((_QWORD *)a1 + 53) + 388LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v15, 2u);
  }
  v16 = CheckTransferState(a1, a2, 128, a4) - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
      goto LABEL_11;
    *(_QWORD *)&v33 = (char *)a2 + 128;
    v24 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 128LL);
    goto LABEL_25;
  }
  v31 = *((_QWORD *)a2 + 15);
  if ( v31 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v24 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 128LL);
      if ( v24 )
      {
        if ( *(_QWORD *)(v31 + 88) == v24 )
        {
          *(_QWORD *)&v33 = (char *)a2 + 128;
LABEL_25:
          *((_QWORD *)&v33 + 1) = v24;
          HMAssignmentLock(&v33);
          HMAssignmentUnlock(*((_QWORD *)a1 + 53) + 128LL);
        }
      }
    }
  }
LABEL_11:
  v17 = *((_QWORD *)a1 + 53);
  if ( a1 == *(struct tagTHREADINFO **)(v17 + 64) )
  {
    *((_DWORD *)a2 + 97) ^= (*((_DWORD *)a2 + 97) ^ *(_DWORD *)(v17 + 388)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop(a1) )
      *((_DWORD *)a2 + 97) = v25 & 0xFFFFFFBF;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = *((_QWORD *)a1 + 53);
      v32 = *(_QWORD *)(v26 + 64);
      LOBYTE(v26) = 4;
      WPP_RECORDER_SF_qqq(
        gptiCurrent,
        v26,
        18,
        39,
        (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
        *((_QWORD *)a1 + 53),
        gptiCurrent,
        v32);
    }
    *(_QWORD *)(*((_QWORD *)a1 + 53) + 64LL) = 0LL;
  }
  if ( gspwndCursor && a1 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
    LockQCursor(a2, *(_QWORD *)(*((_QWORD *)a1 + 53) + 376LL));
  *((_DWORD *)a2 + 96) += *((_DWORD *)a1 + 188);
  *((_QWORD *)a2 + 11) = a1;
  *((_QWORD *)a2 + 12) = a1;
  result = *((_QWORD *)a1 + 52);
  v19 = *(_DWORD *)(result + 880);
  if ( *((_DWORD *)a2 + 107) < v19 )
  {
    *((_DWORD *)a2 + 108) = 0;
    *((_DWORD *)a2 + 107) = v19;
  }
  v20 = *((_QWORD *)a1 + 53);
  *((_QWORD *)a1 + 53) = a2;
  if ( v20 == a3 )
  {
    --*(_DWORD *)(v20 + 392);
  }
  else
  {
    v21 = *(struct tagQMSG **)(v20 + 24);
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_QWORD *)(v20 + 32) = 0LL;
    *(_DWORD *)(v20 + 40) = 0;
    RedistributeInput(v21, (struct tagQ *)v20, 0LL);
    return zzzDestroyQueue(v20);
  }
  return result;
}
