/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00527B0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     xxxSleepThread2 @ 0x1C0052630 (xxxSleepThread2.c)
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C0005EAC (xxxComputeInputSinkInfo.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004EC60 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0052ED0 (IsMulDestroyBrushInternalSupported.c)
 *     xxxReceiveMessage @ 0x1C0052EE0 (xxxReceiveMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C007E9C8 (xxxDesktopThreadWaiter.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00C34CC (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C00CC4C0 (zzzCalcStartCursorHide.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     WakeDIT @ 0x1C0104034 (WakeDIT.c)
 *     xxxDoSysExpunge @ 0x1C01146E4 (xxxDoSysExpunge.c)
 *     ClientDeliverUserApc @ 0x1C011B124 (ClientDeliverUserApc.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C012CEAC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C012CED4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, __int64 a4, enum SLEEP_STATUS *a5)
{
  int v5; // r13d
  unsigned int v6; // edi
  NTSTATUS v7; // r12d
  int v8; // esi
  enum SLEEP_STATUS *v9; // r14
  unsigned int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int16 v13; // dx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v18; // rax
  int v19; // eax
  ULONG v20; // esi
  char v21; // r13
  void *v22; // rcx
  __int64 v23; // r14
  LeaveEnterCrit *v24; // rcx
  union _LARGE_INTEGER *v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  int v28; // eax
  int v29; // r14d
  int v30; // esi
  int v31; // esi
  __int64 v32; // rax
  __int64 v34; // rsi
  struct _KEVENT *v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int16 v38; // dx
  int v39; // edx
  __int64 v40; // rdx
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-F0h]
  int v42; // [rsp+40h] [rbp-D8h]
  union _LARGE_INTEGER *Timeout; // [rsp+48h] [rbp-D0h]
  enum SLEEP_STATUS *v44; // [rsp+50h] [rbp-C8h]
  _DWORD v45[5]; // [rsp+58h] [rbp-C0h] BYREF
  int v46; // [rsp+6Ch] [rbp-ACh] BYREF
  int v47; // [rsp+70h] [rbp-A8h]
  _BYTE v48[12]; // [rsp+74h] [rbp-A4h] BYREF
  __int64 v49; // [rsp+80h] [rbp-98h]
  PVOID Object[3]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-78h]
  __int64 v52; // [rsp+A8h] [rbp-70h] BYREF
  _OWORD v53[6]; // [rsp+B0h] [rbp-68h] BYREF
  char v54; // [rsp+120h] [rbp+8h] BYREF
  __int16 v55; // [rsp+128h] [rbp+10h]
  int v56; // [rsp+130h] [rbp+18h]
  unsigned int v57; // [rsp+138h] [rbp+20h]

  v57 = a4;
  v56 = a3;
  v5 = a3;
  v6 = 0;
  *(_DWORD *)&v48[8] = 0;
  v7 = 0;
  v8 = a1 & 0x8000;
  *(_QWORD *)v48 = (unsigned __int16)a1 & 0x8000;
  v45[4] = 0;
  *(_OWORD *)Object = 0LL;
  v45[0] = 0;
  v9 = (enum SLEEP_STATUS *)v45;
  if ( a5 )
    v9 = a5;
  v44 = v9;
  *(_DWORD *)v9 = 0;
  v10 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v10 = a1;
  if ( a2 )
  {
    *(_QWORD *)&v48[4] = -10000LL * a2;
    Timeout = (union _LARGE_INTEGER *)&v48[4];
  }
  else
  {
    Timeout = 0LL;
  }
  v51 = gptiCurrent;
  v55 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL);
  LOWORD(a5) = v55;
  while ( 1 )
  {
LABEL_8:
    v11 = *(_QWORD *)(gptiCurrent + 448LL);
    if ( (*(_WORD *)(v11 + 4) & (unsigned __int16)v10) != 0
      || (_DWORD)a4 && (*(_WORD *)(v11 + 6) & (unsigned __int16)v10) != 0 )
    {
      v6 = 1;
      goto LABEL_57;
    }
    if ( *(_DWORD *)v9 == 2 )
      goto LABEL_57;
    if ( !v8 && (*(_BYTE *)(v11 + 6) & 0x40) != 0 )
    {
      while ( 1 )
      {
        v37 = *(_QWORD *)(gptiCurrent + 448LL);
        v38 = *(_WORD *)(v37 + 6);
        if ( (v38 & 0x40) == 0 )
          break;
        xxxReceiveMessage(gptiCurrent);
      }
      *(_WORD *)(v37 + 4) |= v38 & *(_WORD *)(gptiCurrent + 872LL);
      *(_WORD *)(gptiCurrent + 872LL) = 0;
    }
    v12 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_DWORD *)(v12 + 400) != gcSysExpunge )
    {
      *(_DWORD *)(v12 + 400) = gcSysExpunge;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 404LL) & WPP_MAIN_CB.Dpc.ProcessorHistory) != 0 )
        xxxDoSysExpunge(gptiCurrent);
    }
    v13 = 0;
    if ( !v8 )
      v13 = 64;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = v10 | v13;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
    if ( v7 == 258 )
    {
      UserSetLastError(1460LL);
      *(_DWORD *)v9 = 1;
      goto LABEL_57;
    }
    if ( v7 == 192 )
    {
      ClientDeliverUserApc();
      goto LABEL_57;
    }
    v14 = *(_QWORD *)(gptiCurrent + 448LL);
    v15 = 0xFFFFF78000000320uLL;
    v16 = 0xFFFFF78000000004uLL;
    a4 = v57;
    if ( (*(_WORD *)(v14 + 10) & *(_WORD *)(v14 + 4)) != 0 )
      continue;
    if ( gptiCurrent == gTermIO[2] && (v10 & 0x200) != 0 && !Timeout )
      break;
    if ( v5 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x400) != 0 && (int)CheckProcessForeground(gptiCurrent) < 0 )
        goto LABEL_57;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL) = 0LL;
      if ( gptiCurrent == gptiForeground )
      {
        v36 = *(__int64 **)(gptiCurrent + 464LL);
        v14 = *v36;
        v15 = (unsigned int)(*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*v36 + 16));
        if ( ((*(_WORD *)(gptiCurrent + 680LL) | *(_WORD *)(*v36 + 16)) & 0x1000) != 0 )
          xxxCallHook(0, 0LL, 0LL, 11);
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v15, v16);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
        {
          EtwTraceWakeInputIdle(0LL, gptiCurrent);
          v15 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
          v14 = *(_QWORD *)(v15 + 32);
          if ( v14 )
          {
            if ( v14 != -1 )
            {
              KeSetEvent((PRKEVENT)v14, 1, 0);
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
              v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
              *(_QWORD *)(v14 + 32) = -1LL;
            }
          }
          else
          {
            *(_QWORD *)(v15 + 32) = -1LL;
          }
        }
        goto LABEL_29;
      }
      v18 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( !*(_QWORD *)(v18 + 328) )
      {
        *(_QWORD *)(v18 + 328) = gptiCurrent;
        v18 = *(_QWORD *)(gptiCurrent + 424LL);
      }
      if ( *(_QWORD *)(v18 + 328) == gptiCurrent )
      {
        EtwTraceWakeInputIdle(0LL, gptiCurrent);
        v14 = *(_QWORD *)(CurrentProcessWin32Process + 16);
        if ( v14 )
        {
          if ( v14 == -1 )
            goto LABEL_29;
          KeSetEvent((PRKEVENT)v14, 1, 0);
          ObfDereferenceObject(*(PVOID *)(CurrentProcessWin32Process + 16));
        }
        *(_QWORD *)(CurrentProcessWin32Process + 16) = -1LL;
      }
LABEL_29:
      v19 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v19 & 4) != 0 )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 12) = v19 & 0xFFFFFFFB;
        zzzCalcStartCursorHide(0LL, 0LL);
      }
    }
    IsMulDestroyBrushInternalSupported(v14, v15, v16, a4);
    Object[0] = *(PVOID *)(gptiCurrent + 1416LL);
    v20 = 1;
    v42 = 1;
    if ( (unsigned __int8)IsInputThread() && (v10 & 0x200) != 0 )
    {
      v21 = 1;
      Object[1] = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
      v20 = 2;
      v42 = 2;
    }
    else
    {
      v21 = 0;
    }
    v22 = *(void **)(gptiCurrent + 1384LL);
    if ( v22 && (v10 & 0xFFFF7DFF) != 0 )
    {
      Object[v20++] = v22;
      v42 = v20;
    }
    if ( v21 )
      gfMITWaitingForLLHook = 1;
    v47 = 0;
    while ( 1 )
    {
      v23 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v49 = v23;
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v54);
      v7 = KeWaitForMultipleObjects(v20, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit(v24);
      if ( v7 )
        goto LABEL_44;
      memset(v53, 0, 32);
      v46 = 0;
      v52 = 0LL;
      Alertable[0] = 0;
      v28 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1424LL), v53, 1LL, &v46, &v52, *(_DWORD *)Alertable);
      v29 = 0;
      if ( v28 )
      {
        if ( v28 == 258 )
          goto LABEL_43;
      }
      else if ( DWORD2(v53[0]) == 1 )
      {
        v29 = 3;
        ZwAssociateWaitCompletionPacket(
          *(_QWORD *)(gptiCurrent + 1448LL),
          *(_QWORD *)(gptiCurrent + 1424LL),
          *(_QWORD *)(gptiCurrent + 1440LL),
          0LL,
          1LL,
          0,
          0LL,
          0LL);
      }
      else
      {
        if ( DWORD2(v53[0]) == 2 )
          goto LABEL_43;
        if ( !DWORD2(v53[0]) && *(_QWORD *)(gptiCurrent + 1464LL) )
        {
          v29 = DWORD2(v53[0]) + 4;
          xxxHandleCoreMessagingQueueCompletion(gptiCurrent, (ULONG64 *)v53, DWORD2(v53[0]) + 1);
        }
      }
      if ( v29 != 4
        || (v26 = 3LL,
            LOBYTE(v26) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 8) != 0,
            ((unsigned __int8)v26 & ((v10 & 8) != 0)) != 0) )
      {
LABEL_43:
        v23 = v49;
LABEL_44:
        v30 = 0;
        goto LABEL_45;
      }
      v30 = 1;
      v23 = v49;
LABEL_45:
      if ( v7 == 1 )
        break;
LABEL_46:
      v9 = v44;
LABEL_47:
      if ( v7 != 1 && !v30 )
      {
        v31 = v47;
        goto LABEL_50;
      }
      v20 = v42;
    }
    if ( !v21 )
    {
      v9 = v44;
      *(_DWORD *)v44 = 2;
      *(_QWORD *)&v48[4] = -100000LL;
      goto LABEL_47;
    }
    v27 = 0xFFFFF78000000320uLL;
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - v23) >= 0x10 )
      v39 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - v23;
    else
      v39 = 16;
    v26 = -10000LL * v39;
    v25 = Timeout;
    if ( v26 > Timeout->QuadPart )
    {
      Timeout->QuadPart -= v26;
      WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0;
      xxxComputeInputSinkInfo();
      goto LABEL_46;
    }
    v31 = 1;
    v7 = 258;
    v9 = v44;
LABEL_50:
    if ( v21 )
    {
      gfMITWaitingForLLHook = 0;
      if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
      {
        WakeDIT(2LL);
        if ( !v31 )
          KeClearEvent((PRKEVENT)WPP_MAIN_CB.Dpc.DpcListEntry.Next);
      }
    }
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) == 0 )
    {
      v32 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( !*(_QWORD *)(v32 + 328) )
      {
        *(_QWORD *)(v32 + 328) = gptiCurrent;
        v32 = *(_QWORD *)(gptiCurrent + 424LL);
      }
      if ( *(_QWORD *)(v32 + 328) != gptiCurrent )
        goto LABEL_55;
      v34 = PsGetCurrentProcessWin32Process(v26, v25, v27);
      EtwTraceSleepInputIdle(0LL, gptiCurrent);
      v35 = *(struct _KEVENT **)(v34 + 16);
      if ( v35 == (struct _KEVENT *)-1LL )
      {
        *(_QWORD *)(v34 + 16) = 0LL;
        v8 = *(_DWORD *)v48;
        v5 = v56;
        LODWORD(a4) = v57;
        continue;
      }
      if ( !v35 )
        goto LABEL_55;
LABEL_119:
      KeClearEvent(v35);
      goto LABEL_55;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
      goto LABEL_55;
    EtwTraceSleepInputIdle(0LL, gptiCurrent);
    v40 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
    v35 = *(struct _KEVENT **)(v40 + 32);
    if ( v35 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(v40 + 32) = 0LL;
      goto LABEL_55;
    }
    if ( v35 )
      goto LABEL_119;
LABEL_55:
    v8 = *(_DWORD *)v48;
    v5 = v56;
    LODWORD(a4) = v57;
  }
  v7 = xxxDesktopThreadWaiter(0LL, v10, 0xFFFFF78000000004uLL, v57);
  if ( v7 != -1073741790 )
  {
    LODWORD(a4) = v57;
    goto LABEL_8;
  }
LABEL_57:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = v55;
  if ( v6 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v6;
}
