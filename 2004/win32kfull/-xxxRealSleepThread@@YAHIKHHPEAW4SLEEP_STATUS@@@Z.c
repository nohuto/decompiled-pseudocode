/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0096AE0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     xxxSleepThread2 @ 0x1C0096960 (xxxSleepThread2.c)
 *     xxxInterSendMsgEx @ 0x1C0098820 (xxxInterSendMsgEx.c)
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C000600C (xxxComputeInputSinkInfo.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0007DA0 (IsMulDestroyBrushInternalSupported.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0035504 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxDoSysExpunge @ 0x1C0042A4C (xxxDoSysExpunge.c)
 *     zzzCalcStartCursorHide @ 0x1C0089AF0 (zzzCalcStartCursorHide.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0092F90 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C00BE118 (xxxDesktopThreadWaiter.c)
 *     WakeDIT @ 0x1C0103934 (WakeDIT.c)
 *     ClientDeliverUserApc @ 0x1C011A028 (ClientDeliverUserApc.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0157E84 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0157EAC (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, unsigned int a4, enum SLEEP_STATUS *a5)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v18; // rax
  struct _KEVENT *v19; // rcx
  int v20; // eax
  ULONG v21; // esi
  char v22; // r13
  void *v23; // rcx
  __int64 v24; // r14
  LeaveEnterCrit *v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // r14d
  int v29; // esi
  int v30; // esi
  __int64 v31; // rax
  __int64 v33; // rsi
  struct _KEVENT *v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int16 v37; // dx
  __int64 v38; // rdx
  struct _KEVENT *v39; // rcx
  int v40; // edx
  __int64 v41; // rdx
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-F0h]
  int v43; // [rsp+40h] [rbp-D8h]
  union _LARGE_INTEGER *Timeout; // [rsp+48h] [rbp-D0h]
  enum SLEEP_STATUS *v45; // [rsp+50h] [rbp-C8h]
  _DWORD v46[5]; // [rsp+58h] [rbp-C0h] BYREF
  int v47; // [rsp+6Ch] [rbp-ACh] BYREF
  int v48; // [rsp+70h] [rbp-A8h]
  _BYTE v49[12]; // [rsp+74h] [rbp-A4h] BYREF
  __int64 v50; // [rsp+80h] [rbp-98h]
  PVOID Object[3]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-78h]
  __int64 v53; // [rsp+A8h] [rbp-70h] BYREF
  _OWORD v54[6]; // [rsp+B0h] [rbp-68h] BYREF
  char v55; // [rsp+120h] [rbp+8h] BYREF
  __int16 v56; // [rsp+128h] [rbp+10h]
  int v57; // [rsp+130h] [rbp+18h]
  unsigned int v58; // [rsp+138h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v5 = a3;
  v6 = 0;
  *(_DWORD *)&v49[8] = 0;
  v7 = 0;
  v8 = a1 & 0x8000;
  *(_QWORD *)v49 = (unsigned __int16)a1 & 0x8000;
  v46[4] = 0;
  *(_OWORD *)Object = 0LL;
  v46[0] = 0;
  v9 = (enum SLEEP_STATUS *)v46;
  if ( a5 )
    v9 = a5;
  v45 = v9;
  *(_DWORD *)v9 = 0;
  v10 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v10 = a1;
  if ( a2 )
  {
    *(_QWORD *)&v49[4] = -10000LL * a2;
    Timeout = (union _LARGE_INTEGER *)&v49[4];
  }
  else
  {
    Timeout = 0LL;
  }
  v52 = gptiCurrent;
  v56 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL);
  LOWORD(a5) = v56;
  while ( 1 )
  {
LABEL_8:
    v11 = *(_QWORD *)(gptiCurrent + 440LL);
    if ( (*(_WORD *)(v11 + 4) & (unsigned __int16)v10) != 0 || a4 && (*(_WORD *)(v11 + 6) & (unsigned __int16)v10) != 0 )
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
        v36 = *(_QWORD *)(gptiCurrent + 440LL);
        v37 = *(_WORD *)(v36 + 6);
        if ( (v37 & 0x40) == 0 )
          break;
        xxxReceiveMessage(gptiCurrent);
      }
      *(_WORD *)(v36 + 4) |= v37 & *(_WORD *)(gptiCurrent + 864LL);
      *(_WORD *)(gptiCurrent + 864LL) = 0;
    }
    v12 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( *(_DWORD *)(v12 + 400) != gcSysExpunge )
    {
      *(_DWORD *)(v12 + 400) = gcSysExpunge;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 404LL) & (__int64)WPP_MAIN_CB.Dpc.DpcListEntry.Next) != 0 )
        xxxDoSysExpunge(gptiCurrent);
    }
    v13 = 0;
    if ( !v8 )
      v13 = 64;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = v10 | v13;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 728LL));
    if ( v7 == 258 )
    {
      UserSetLastError(1460LL, v14, v15);
      *(_DWORD *)v9 = 1;
      goto LABEL_57;
    }
    if ( v7 == 192 )
    {
      ClientDeliverUserApc();
      goto LABEL_57;
    }
    v16 = *(_QWORD *)(gptiCurrent + 440LL);
    a4 = v58;
    if ( (*(_WORD *)(v16 + 10) & *(_WORD *)(v16 + 4)) != 0 )
      continue;
    if ( gptiCurrent == gTermIO[2] && (v10 & 0x200) != 0 && !Timeout )
      break;
    if ( v5 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x400) != 0 && (int)CheckProcessForeground(gptiCurrent) < 0 )
        goto LABEL_57;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 8LL) = 0LL;
      if ( gptiCurrent == gptiForeground )
      {
        v35 = *(__int64 **)(gptiCurrent + 456LL);
        v16 = *v35;
        if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*v35 + 16)) & 0x1000) != 0 )
          xxxCallHook(0, 0LL, 0LL, 11);
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) )
        {
          EtwTraceWakeInputIdle(0LL, gptiCurrent);
          v38 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
          v39 = *(struct _KEVENT **)(v38 + 32);
          if ( v39 )
          {
            if ( v39 != (struct _KEVENT *)-1LL )
            {
              KeSetEvent(v39, 1, 0);
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL) = -1LL;
            }
          }
          else
          {
            *(_QWORD *)(v38 + 32) = -1LL;
          }
        }
        goto LABEL_29;
      }
      v18 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( !*(_QWORD *)(v18 + 328) )
      {
        *(_QWORD *)(v18 + 328) = gptiCurrent;
        v18 = *(_QWORD *)(gptiCurrent + 416LL);
      }
      if ( *(_QWORD *)(v18 + 328) == gptiCurrent )
      {
        EtwTraceWakeInputIdle(0LL, gptiCurrent);
        v19 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
        if ( v19 )
        {
          if ( v19 == (struct _KEVENT *)-1LL )
            goto LABEL_29;
          KeSetEvent(v19, 1, 0);
          ObfDereferenceObject(*(PVOID *)(CurrentProcessWin32Process + 16));
        }
        *(_QWORD *)(CurrentProcessWin32Process + 16) = -1LL;
      }
LABEL_29:
      v20 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v20 & 4) != 0 )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 12) = v20 & 0xFFFFFFFB;
        zzzCalcStartCursorHide(0LL, 0);
      }
    }
    IsMulDestroyBrushInternalSupported();
    Object[0] = *(PVOID *)(gptiCurrent + 1408LL);
    v21 = 1;
    v43 = 1;
    if ( (unsigned __int8)IsInputThread() && (v10 & 0x200) != 0 )
    {
      v22 = 1;
      Object[1] = *(PVOID *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
      v21 = 2;
      v43 = 2;
    }
    else
    {
      v22 = 0;
    }
    v23 = *(void **)(gptiCurrent + 1376LL);
    if ( v23 && (v10 & 0xFFFF7DFF) != 0 )
    {
      Object[v21++] = v23;
      v43 = v21;
    }
    if ( v22 )
      gfMITWaitingForLLHook = 1;
    v48 = 0;
    while ( 1 )
    {
      v24 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v50 = v24;
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v55);
      v7 = KeWaitForMultipleObjects(v21, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit(v25);
      if ( v7 )
        goto LABEL_44;
      memset(v54, 0, 32);
      v47 = 0;
      v53 = 0LL;
      Alertable[0] = 0;
      v27 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1416LL), v54, 1LL, &v47, &v53, *(_DWORD *)Alertable);
      v28 = 0;
      if ( v27 )
      {
        if ( v27 == 258 )
          goto LABEL_43;
      }
      else if ( DWORD2(v54[0]) == 1 )
      {
        v28 = 3;
        ZwAssociateWaitCompletionPacket(
          *(_QWORD *)(gptiCurrent + 1440LL),
          *(_QWORD *)(gptiCurrent + 1416LL),
          *(_QWORD *)(gptiCurrent + 1432LL),
          0LL,
          1LL,
          0,
          0LL,
          0LL);
      }
      else
      {
        if ( DWORD2(v54[0]) == 2 )
          goto LABEL_43;
        if ( !DWORD2(v54[0]) && *(_QWORD *)(gptiCurrent + 1456LL) )
        {
          v28 = DWORD2(v54[0]) + 4;
          xxxHandleCoreMessagingQueueCompletion(gptiCurrent, (ULONG64 *)v54, DWORD2(v54[0]) + 1);
        }
      }
      if ( v28 != 4
        || (v26 = 3LL,
            LOBYTE(v26) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 8) != 0,
            ((unsigned __int8)v26 & ((v10 & 8) != 0)) != 0) )
      {
LABEL_43:
        v24 = v50;
LABEL_44:
        v29 = 0;
        goto LABEL_45;
      }
      v29 = 1;
      v24 = v50;
LABEL_45:
      if ( v7 == 1 )
        break;
LABEL_46:
      v9 = v45;
LABEL_47:
      if ( v7 != 1 && !v29 )
      {
        v30 = v48;
        goto LABEL_50;
      }
      v21 = v43;
    }
    if ( !v22 )
    {
      v9 = v45;
      *(_DWORD *)v45 = 2;
      *(_QWORD *)&v49[4] = -100000LL;
      goto LABEL_47;
    }
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - v24) >= 0x10 )
      v40 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - v24;
    else
      v40 = 16;
    v26 = -10000LL * v40;
    if ( v26 > Timeout->QuadPart )
    {
      Timeout->QuadPart -= v26;
      *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) = 0;
      xxxComputeInputSinkInfo();
      goto LABEL_46;
    }
    v30 = 1;
    v7 = 258;
    v9 = v45;
LABEL_50:
    if ( v22 )
    {
      gfMITWaitingForLLHook = 0;
      if ( *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) )
      {
        WakeDIT(2LL);
        if ( !v30 )
          KeClearEvent(*(PRKEVENT *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
      }
    }
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) == 0 )
    {
      v31 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( !*(_QWORD *)(v31 + 328) )
      {
        *(_QWORD *)(v31 + 328) = gptiCurrent;
        v31 = *(_QWORD *)(gptiCurrent + 416LL);
      }
      if ( *(_QWORD *)(v31 + 328) != gptiCurrent )
        goto LABEL_55;
      v33 = PsGetCurrentProcessWin32Process(v26);
      EtwTraceSleepInputIdle(0LL, gptiCurrent);
      v34 = *(struct _KEVENT **)(v33 + 16);
      if ( v34 == (struct _KEVENT *)-1LL )
      {
        *(_QWORD *)(v33 + 16) = 0LL;
        v8 = *(_DWORD *)v49;
        v5 = v57;
        a4 = v58;
        continue;
      }
      if ( !v34 )
        goto LABEL_55;
LABEL_119:
      KeClearEvent(v34);
      goto LABEL_55;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) )
      goto LABEL_55;
    EtwTraceSleepInputIdle(0LL, gptiCurrent);
    v41 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
    v34 = *(struct _KEVENT **)(v41 + 32);
    if ( v34 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(v41 + 32) = 0LL;
      goto LABEL_55;
    }
    if ( v34 )
      goto LABEL_119;
LABEL_55:
    v8 = *(_DWORD *)v49;
    v5 = v57;
    a4 = v58;
  }
  v7 = xxxDesktopThreadWaiter(0LL, v10, 0xFFFFF78000000004uLL, v58);
  if ( v7 != -1073741790 )
  {
    a4 = v58;
    goto LABEL_8;
  }
LABEL_57:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = v56;
  if ( v6 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v6;
}
