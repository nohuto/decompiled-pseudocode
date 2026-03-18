/*
 * XREFs of ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220
 * Callers:
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     _xxxSleepThreadWithPwnd@16 @ 0xAB35C (_xxxSleepThreadWithPwnd@16.c)
 * Callees:
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _zzzWakeInputIdle@4 @ 0x4584E (_zzzWakeInputIdle@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YGXPAUtagTHREADINFO@@QAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x6EBE2 (-xxxHandleCoreMessagingQueueCompletion@@YGXPAUtagTHREADINFO@@QAU_FILE_IO_COMPLETION_INFORMATION@.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _WakeDIT@4 @ 0x9C504 (_WakeDIT@4.c)
 *     _xxxDesktopThreadWaiter@8 @ 0xA6EF2 (_xxxDesktopThreadWaiter@8.c)
 *     _ClientDeliverUserApc@0 @ 0xAB94C (_ClientDeliverUserApc@0.c)
 *     ??0LeaveEnterCrit@@QAE@XZ @ 0xAEFB8 (--0LeaveEnterCrit@@QAE@XZ.c)
 *     ??1LeaveEnterCrit@@QAE@XZ @ 0xAEFC8 (--1LeaveEnterCrit@@QAE@XZ.c)
 *     ?CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z @ 0xC93F4 (-CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z.c)
 *     _xxxDoSysExpunge@4 @ 0xD2E12 (_xxxDoSysExpunge@4.c)
 *     _xxxComputeInputSinkInfo@0 @ 0x151EE5 (_xxxComputeInputSinkInfo@0.c)
 */

int __userpurge xxxRealSleepThread@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        unsigned int a4,
        int *a5,
        int a6,
        enum SLEEP_STATUS *a7)
{
  int v7; // ebx
  NTSTATUS v8; // edi
  int v9; // eax
  int *v10; // ecx
  int v11; // esi
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // edi
  char v17; // cl
  void *v18; // eax
  int v19; // ecx
  unsigned int v20; // edi
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  LeaveEnterCrit *v23; // ecx
  int v24; // eax
  int v25; // edx
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  int CurrentProcessWin32Process; // edi
  int v30; // eax
  int v31; // ebx
  int v32; // edi
  __int32 v33; // eax
  int v35; // ecx
  __int16 v36; // ax
  unsigned int v37; // edx
  unsigned __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // edx
  unsigned __int64 v41; // rax
  int v42; // ecx
  LONGLONG v43; // kr18_8
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  unsigned int v47; // eax
  struct tagTHREADINFO *v48; // [esp+0h] [ebp-B4h]
  int v49; // [esp+4h] [ebp-B0h]
  _DWORD v50[2]; // [esp+18h] [ebp-9Ch] BYREF
  int v51; // [esp+20h] [ebp-94h] BYREF
  int v52; // [esp+24h] [ebp-90h]
  int v53; // [esp+28h] [ebp-8Ch]
  int v54; // [esp+2Ch] [ebp-88h]
  int v55; // [esp+30h] [ebp-84h]
  _DWORD v56[3]; // [esp+34h] [ebp-80h] BYREF
  int v57; // [esp+44h] [ebp-70h] BYREF
  PVOID Object; // [esp+48h] [ebp-6Ch] BYREF
  struct _LIST_ENTRY *Blink; // [esp+4Ch] [ebp-68h]
  int v60; // [esp+50h] [ebp-64h]
  int v61; // [esp+54h] [ebp-60h]
  __int64 v62; // [esp+58h] [ebp-5Ch] BYREF
  ULONG Count; // [esp+60h] [ebp-54h]
  char v64; // [esp+67h] [ebp-4Dh] BYREF
  unsigned int v65; // [esp+68h] [ebp-4Ch]
  int v66; // [esp+6Ch] [ebp-48h]
  int v67; // [esp+70h] [ebp-44h]
  PLARGE_INTEGER Timeout; // [esp+74h] [ebp-40h]
  int v69; // [esp+7Ch] [ebp-38h]
  _DWORD *v70; // [esp+80h] [ebp-34h]
  int v71; // [esp+84h] [ebp-30h]
  unsigned int v72; // [esp+88h] [ebp-2Ch]
  int v73; // [esp+8Ch] [ebp-28h]
  int v74; // [esp+90h] [ebp-24h]
  char v75; // [esp+97h] [ebp-1Dh]
  CPPEH_RECORD ms_exc; // [esp+9Ch] [ebp-18h]

  v7 = a2;
  v66 = a2;
  v62 = 0LL;
  v8 = 0;
  v9 = a2 & 0x8000;
  v61 = v9;
  v56[1] = 0;
  Object = 0;
  Blink = 0;
  v57 = 0;
  v10 = a5;
  if ( !a5 )
  {
    v10 = &v57;
    a5 = &v57;
  }
  *v10 = 0;
  if ( v9 )
  {
    v7 &= ~0x8000u;
    v66 = v7;
  }
  if ( a1 )
  {
    v62 = -10000LL * a1;
    Timeout = (PLARGE_INTEGER)&v62;
  }
  else
  {
    Timeout = 0;
  }
  v11 = _gptiCurrent;
  v67 = _gptiCurrent;
  v56[2] = _gptiCurrent;
  v55 = *(unsigned __int16 *)(*(_DWORD *)(_gptiCurrent + 244) + 10);
  while ( 1 )
  {
    v12 = *(_DWORD *)(v11 + 244);
    if ( (*(_WORD *)(v12 + 4) & (unsigned __int16)v7) != 0 || a4 && (*(_WORD *)(v12 + 6) & (unsigned __int16)v7) != 0 )
    {
      v31 = 1;
      goto LABEL_51;
    }
    if ( *a5 == 2 )
      break;
    if ( !v61 && (*(_BYTE *)(v12 + 6) & 0x40) != 0 )
    {
      do
      {
        xxxReceiveMessage((_DWORD *)v11);
        v35 = *(_DWORD *)(v11 + 244);
        v36 = *(_WORD *)(v35 + 6);
      }
      while ( (v36 & 0x40) != 0 );
      *(_WORD *)(v35 + 4) |= *(_WORD *)(v11 + 484) & v36;
      *(_WORD *)(v11 + 484) = 0;
    }
    v13 = *(_DWORD *)(v11 + 232);
    if ( *(_DWORD *)(v13 + 220) != _gcSysExpunge )
    {
      *(_DWORD *)(v13 + 220) = _gcSysExpunge;
      if ( (gdwSysExpungeMask & *(_DWORD *)(*(_DWORD *)(v11 + 232) + 224)) != 0 )
        xxxDoSysExpunge(v11);
    }
    *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 10) = v7 | (v61 != 0 ? 0 : 64);
    KeClearEvent(*(PRKEVENT *)(_gptiCurrent + 400));
    if ( v8 == 258 )
    {
      UserSetLastError(1460);
      *a5 = 1;
      break;
    }
    if ( v8 == 192 )
    {
      ClientDeliverUserApc();
      v31 = 0;
      goto LABEL_51;
    }
    v14 = *(_DWORD *)(v11 + 244);
    if ( (*(_WORD *)(v14 + 10) & *(_WORD *)(v14 + 4)) != 0 )
      continue;
    if ( v11 == _gTermIO[2] && (v7 & 0x200) != 0 && !Timeout )
    {
      LOBYTE(v14) = 0;
      v8 = xxxDesktopThreadWaiter(v14, v7);
      if ( v8 != -1073741790 )
        continue;
      break;
    }
    v15 = a3;
    if ( a3 )
    {
      if ( (*(_DWORD *)(v11 + 264) & 0x400) != 0 && CheckProcessForeground(v48) < 0 )
        break;
      ms_exc.registration.TryLevel = 0;
      *(_DWORD *)(*(_DWORD *)(v11 + 260) + 4) = 0;
      ms_exc.registration.TryLevel = -2;
      v15 = a3;
    }
    if ( (*(_BYTE *)(v11 + 264) & 2) != 0 )
    {
      if ( v15 )
      {
        zzzWakeInputIdle(v11);
        v15 = a3;
      }
      xxxSleepTask(v15, 0);
      continue;
    }
    if ( a3 )
    {
      if ( v11 == _gptiForeground
        && ((*(_DWORD *)(v11 + 372) | *(_DWORD *)(**(_DWORD **)(v11 + 252) + 8)) & 0x1000) != 0 )
      {
        xxxCallHook(0, 0xBu, (int)v48, v49);
      }
      zzzWakeInputIdle(v11);
    }
    xxxSleepTask(a3, 0);
    Object = *(PVOID *)(v11 + 812);
    v16 = 1;
    Count = 1;
    if ( (unsigned __int8)IsInputThread() && (v7 & 0x200) != 0 )
    {
      v17 = 1;
      Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
      v16 = 2;
      Count = 2;
    }
    else
    {
      v17 = 0;
    }
    v75 = v17;
    v18 = *(void **)(v11 + 792);
    if ( v18 && (v7 & 0xFFFF7DFF) != 0 )
    {
      *(&Object + v16) = v18;
      Count = v16 + 1;
    }
    if ( v17 )
      gfMITWaitingForLLHook = 1;
    v60 = 0;
    while ( 1 )
    {
      v19 = MEMORY[0xFFDF0004];
      v69 = MEMORY[0xFFDF0004];
      v20 = MEMORY[0xFFDF0324];
      v21 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v20 = MEMORY[0xFFDF0324];
          v21 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v11 = v67;
        v7 = v66;
        v19 = v69;
      }
      v22 = (unsigned int)v19 * (unsigned __int64)v21;
      v65 = ((((unsigned int)v19 * (unsigned __int64)v20) << 8) + (v22 >> 24)) >> 32;
      v72 = ((v19 * v20) << 8) + (v22 >> 24);
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v64);
      v8 = KeWaitForMultipleObjects(Count, &Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0);
      v71 = v8;
      LeaveEnterCrit::~LeaveEnterCrit(v23);
      if ( v8 )
        goto LABEL_38;
      v70 = (_DWORD *)_gptiCurrent;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v56[0] = 0;
      v50[0] = 0;
      v50[1] = 0;
      v24 = ZwRemoveIoCompletionEx(*(_DWORD *)(_gptiCurrent + 816), &v51, 1, v56, v50, 0);
      v25 = 0;
      if ( v24 )
      {
        if ( v24 == 258 )
          goto LABEL_38;
      }
      else if ( v52 == 1 )
      {
        ZwAssociateWaitCompletionPacket(v70[207], v70[204], v70[206], 0, 1, 0, 0, 0);
        v25 = 3;
      }
      else
      {
        if ( v52 == 2 )
          goto LABEL_38;
        if ( !v52 && v70[209] )
        {
          xxxHandleCoreMessagingQueueCompletion(1);
          v25 = 4;
        }
      }
      if ( v25 != 4 || (*(_WORD *)(*(_DWORD *)(v11 + 244) + 6) & 8) != 0 && (v7 & 8) != 0 )
      {
LABEL_38:
        v26 = 0;
        goto LABEL_39;
      }
      v26 = 1;
LABEL_39:
      v70 = (_DWORD *)v26;
      v27 = v8 == 1;
      if ( v8 != 1 )
        goto LABEL_40;
      if ( !v75 )
      {
        *a5 = 2;
        v62 = -100000LL;
        goto LABEL_105;
      }
      v69 = MEMORY[0xFFDF0004];
      v73 = MEMORY[0xFFDF0324];
      v37 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v73 = MEMORY[0xFFDF0324];
          v37 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v11 = v67;
        v7 = v66;
        v8 = v71;
      }
      v38 = (unsigned int)v69 * (unsigned __int64)v37;
      v74 = ((v69 * v73) << 8) + (v38 >> 24);
      if ( (((unsigned int)v69 * (unsigned __int64)(unsigned int)v73) << 8) + (v38 >> 24) - __PAIR64__(v65, v72) >= 0x10 )
      {
        v73 = MEMORY[0xFFDF0004];
        v40 = MEMORY[0xFFDF0324];
        v69 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        {
          do
          {
            _mm_pause();
            v40 = MEMORY[0xFFDF0324];
            v69 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v11 = v67;
          v7 = v66;
          v8 = v71;
        }
        v41 = (unsigned int)v73 * (unsigned __int64)v40;
        v74 = (((unsigned int)v73 * (unsigned __int64)(unsigned int)v69) >> 24) + ((_DWORD)v41 << 8);
        v42 = ((((unsigned int)v73 * (unsigned __int64)(unsigned int)v69) >> 24) + (v41 << 8) - __PAIR64__(v65, v72)) >> 32;
        v39 = v74 - v72;
        v69 = v42;
      }
      else
      {
        v39 = 16;
        v69 = 0;
      }
      v43 = -10000LL * v39;
      v73 = HIDWORD(v43);
      v69 = v43;
      if ( v43 <= Timeout->QuadPart )
        break;
      Timeout->QuadPart -= __PAIR64__(v73, v69);
      gfAppWaitingForLLHookSignal = 0;
      xxxComputeInputSinkInfo();
      v26 = (int)v70;
LABEL_105:
      v27 = v8 == 1;
LABEL_40:
      if ( !v27 && !v26 )
        goto LABEL_42;
    }
    v8 = 258;
    v71 = 258;
    v60 = 1;
LABEL_42:
    if ( v75 )
    {
      gfMITWaitingForLLHook = 0;
      if ( gfAppWaitingForLLHookSignal )
      {
        WakeDIT(2);
        if ( !v60 )
          KeClearEvent((PRKEVENT)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
      }
    }
    if ( (*(_DWORD *)(v11 + 264) & 0x1000) != 0 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v11 + 332) + 16) )
      {
        EtwTraceSleepInputIdle(0, v11);
        v44 = *(_DWORD *)(*(_DWORD *)(v11 + 332) + 16);
        v45 = *(_DWORD *)(v44 + 16);
        if ( v45 == -1 )
        {
          *(_DWORD *)(v44 + 16) = 0;
        }
        else if ( v45 )
        {
          KeClearEvent(*(PRKEVENT *)(v44 + 16));
        }
      }
    }
    else
    {
      v28 = *(_DWORD *)(v11 + 232);
      if ( !*(_DWORD *)(v28 + 184) )
      {
        *(_DWORD *)(v28 + 184) = v11;
        v28 = *(_DWORD *)(v11 + 232);
      }
      if ( *(_DWORD *)(v28 + 184) == v11 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        EtwTraceSleepInputIdle(0, v11);
        v30 = *(_DWORD *)(CurrentProcessWin32Process + 12);
        if ( v30 == -1 )
        {
          *(_DWORD *)(CurrentProcessWin32Process + 12) = 0;
          goto LABEL_49;
        }
        if ( v30 )
        {
          KeClearEvent(*(PRKEVENT *)(CurrentProcessWin32Process + 12));
          v8 = v71;
        }
        else
        {
LABEL_49:
          v8 = v71;
        }
      }
    }
  }
  v31 = 0;
LABEL_51:
  *(_WORD *)(*(_DWORD *)(v11 + 244) + 10) = v55;
  if ( v31 )
  {
    v32 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v46 = MEMORY[0xFFDF0324];
      if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
      {
        v47 = MEMORY[0xFFDF0320];
      }
      else
      {
        do
        {
          _mm_pause();
          v47 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v11 = v67;
        v32 = MEMORY[0xFFDF0004];
        v46 = MEMORY[0xFFDF0324];
      }
      v33 = v32 * (v46 << 8) + (((unsigned int)v32 * (unsigned __int64)v47) >> 24);
    }
    else
    {
      v33 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    _InterlockedExchange((volatile __int32 *)(*(_DWORD *)(v11 + 244) + 12), v33);
  }
  return v31;
}
