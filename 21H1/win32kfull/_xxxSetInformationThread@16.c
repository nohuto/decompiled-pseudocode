/*
 * XREFs of _xxxSetInformationThread@16 @ 0xC9146
 * Callers:
 *     _NtUserSetInformationThread@16 @ 0xC907E (_NtUserSetInformationThread@16.c)
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 * Callees:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 *     _RtlInitLargeUnicodeString@8 @ 0x1DCA6 (_RtlInitLargeUnicodeString@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 *     _xxxRestoreCsrssThreadDesktop@8 @ 0xC9290 (_xxxRestoreCsrssThreadDesktop@8.c)
 *     _xxxSetCsrssThreadDesktop@8 @ 0xC9346 (_xxxSetCsrssThreadDesktop@8.c)
 *     ?InitiateShutdownW@@YGJPAU_ETHREAD@@PAK@Z @ 0xD3602 (-InitiateShutdownW@@YGJPAU_ETHREAD@@PAK@Z.c)
 *     ?EndShutdown@@YGXJ@Z @ 0xD40DC (-EndShutdown@@YGXJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsExplorerPresent@@YGHPBUtagTHREADINFO@@@Z @ 0x141B45 (-IsExplorerPresent@@YGHPBUtagTHREADINFO@@@Z.c)
 *     _QueueShutdownData@8 @ 0x141FC0 (_QueueShutdownData@8.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YGXHH@Z @ 0x186672 (-TraceLoggingBSDRRaceConditionEvent@@YGXHH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __stdcall xxxSetInformationThread(HANDLE Handle, int a2, unsigned int *a3, int a4)
{
  int v4; // esi
  NTSTATUS v5; // edi
  int ThreadWin32Thread; // edx
  unsigned int v7; // edx
  unsigned int v8; // edi
  int v9; // eax
  void *v10; // esi
  int v12; // eax
  int v13; // edi
  struct tagWND *v14; // eax
  int v15; // edx
  int v16; // eax
  unsigned int v17; // eax
  NTSTATUS v18; // eax
  PVOID v19; // esi
  int v20; // eax
  void *v21; // ecx
  int v22; // ecx
  int i; // eax
  unsigned int v24; // eax
  unsigned int v25; // ecx
  void *v26; // [esp-18h] [ebp-A8h]
  struct _ETHREAD *v27; // [esp+0h] [ebp-90h]
  unsigned int *v28; // [esp+4h] [ebp-8Ch]
  PVOID v29; // [esp+Ch] [ebp-84h]
  PVOID v30; // [esp+10h] [ebp-80h] BYREF
  PVOID Object; // [esp+14h] [ebp-7Ch] BYREF
  union _LARGE_INTEGER Interval; // [esp+18h] [ebp-78h] BYREF
  PVOID *v33; // [esp+20h] [ebp-70h]
  int v34; // [esp+2Ch] [ebp-64h] BYREF
  int v35; // [esp+30h] [ebp-60h]
  int v36; // [esp+34h] [ebp-5Ch]
  _WORD v37[42]; // [esp+38h] [ebp-58h] BYREF

  v4 = 0;
  Object = 0;
  v5 = ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0);
  v29 = Object;
  if ( v5 >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(Object);
    switch ( a2 )
    {
      case 1:
        if ( !ThreadWin32Thread )
          goto LABEL_17;
        if ( a4 == 8 && ((unsigned int)&loc_20000 & *a3) == *a3 )
        {
          v16 = *(_DWORD *)(ThreadWin32Thread + 264);
          if ( *a3 )
            v17 = (unsigned int)&loc_20000 | v16;
          else
            v17 = v16 & 0xFFFDFFFF;
          *(_DWORD *)(ThreadWin32Thread + 264) = v17;
        }
        else
        {
          v5 = -1073741811;
        }
        goto LABEL_8;
      case 5:
        v10 = v29;
        v5 = InitiateShutdownW(v27, v28);
        goto LABEL_9;
      case 6:
        EndShutdown((int)v27);
        goto LABEL_16;
      case 7:
        if ( _grpdeskRitInput )
        {
          v9 = xxxSetCsrssThreadDesktop(_grpdeskRitInput, (int)(a3 + 1));
          goto LABEL_7;
        }
LABEL_17:
        v5 = -1073741816;
        goto LABEL_8;
      case 8:
        v26 = (void *)*a3;
        v30 = 0;
        v18 = ObReferenceObjectByHandle(v26, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v30, 0);
        v19 = v30;
        v5 = v18;
        if ( v18 >= 0 )
        {
          v20 = W32GetThreadWin32Thread(v30);
          if ( v20 && (v21 = *(void **)(v20 + 248)) != 0 )
            v5 = xxxSetCsrssThreadDesktop(v21, (int)(a3 + 1));
          else
            v5 = -1073741816;
          ObfDereferenceObject(v19);
        }
        goto LABEL_8;
      case 9:
        if ( a4 == 16 )
          v7 = a3[3];
        else
          LOBYTE(v7) = 0;
        v8 = a3[1];
        if ( !v8 )
          goto LABEL_6;
        v22 = _grpWinStaList;
        if ( !_grpWinStaList )
          goto LABEL_23;
        while ( !v4 )
        {
          for ( i = *(_DWORD *)(v22 + 8); i; i = *(_DWORD *)(i + 16) )
          {
            if ( i == v8 )
            {
              v4 = i;
              break;
            }
          }
          v22 = *(_DWORD *)(v22 + 4);
          if ( !v22 )
          {
            if ( !v4 )
            {
LABEL_23:
              v5 = -1073741823;
              goto LABEL_8;
            }
            break;
          }
        }
LABEL_6:
        v9 = xxxRestoreCsrssThreadDesktop(a3 + 1, v7);
LABEL_7:
        v5 = v9;
        goto LABEL_8;
      case 10:
        v9 = SetCsrApiPortHandle(*a3);
        goto LABEL_7;
      case 12:
        v12 = ValidateHwnd(*a3);
        if ( !v12 )
          goto LABEL_23;
        v13 = *(_DWORD *)(v12 + 8);
        if ( !v13 || !*(_DWORD *)(v13 + 248) )
          goto LABEL_23;
        ghwndBlocking = *a3;
        PostWinlogonMessage(1031, 0);
        v14 = (struct tagWND *)IsExplorerPresent(v27);
        QueueShutdownData(0xFFFFu, v14);
LABEL_16:
        v5 = 0;
        goto LABEL_8;
      case 13:
        v5 = -1073741790;
        Interval.QuadPart = 0LL;
        v30 = 0;
        break;
      case 14:
        QueueShutdownData(*a3, 0);
        ghwndBlocking = 0;
        _gptiShutdownWaiter = 0;
        goto LABEL_16;
      case 15:
      case 16:
        v30 = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v24 = *a3;
        if ( a2 == 15 )
        {
          if ( v24 )
            *(_DWORD *)(_gpsi + 1836) |= 8u;
          else
            *(_DWORD *)(_gpsi + 1836) &= ~8u;
          RtlLoadStringOrError(629, v37, 40, 0);
          (*(void (__thiscall **)(PVOID))(*(_DWORD *)dword_274060 + 4))(dword_274060);
          EtwTraceConvertibleState(*a3);
        }
        else
        {
          if ( v24 )
            *(_DWORD *)(_gpsi + 1836) |= 0x10u;
          else
            *(_DWORD *)(_gpsi + 1836) &= ~0x10u;
          RtlLoadStringOrError(630, v37, 40, 0);
          (*(void (__thiscall **)(PVOID))(*(_DWORD *)dword_274060 + 4))(dword_274060);
          EtwTraceDockState(*a3);
        }
        RtlInitLargeUnicodeString(&v34, v37);
        Interval.QuadPart = 0x6400000000LL;
        v33 = &v30;
        xxxBroadcastMessageEx(0, 0x1Au, (struct tagWND *)*a3, v25, 6u, (int)&Interval, 1u, 0);
        goto LABEL_16;
      case 17:
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v5 = xxxSetInformationThread((HANDLE)0xFFFFFFFE, 7, (int)&v34, 12);
        if ( v5 < 0 )
          goto LABEL_8;
        PostShellHookMessagesEx(55, 0, 0);
        v9 = xxxSetInformationThread((HANDLE)0xFFFFFFFE, 9, (int)&v34, 12);
        goto LABEL_7;
      default:
        v5 = -1073741821;
        goto LABEL_8;
    }
    while ( !gspwndBSDR )
    {
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      UserSessionSwitchLeaveCrit();
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      EnterCrit(0, 1);
      v15 = (int)v30 + 100;
      v30 = (PVOID)v15;
      if ( v15 >= 10000 )
        goto LABEL_33;
    }
    _gptiShutdownWaiter = _gptiCurrent;
    QueueShutdownData(*a3, (struct tagWND *)1);
    v15 = (int)v30;
    v5 = 0;
LABEL_33:
    if ( v15 > 0 )
      TraceLoggingBSDRRaceConditionEvent((int)v27, (int)v28);
LABEL_8:
    v10 = v29;
LABEL_9:
    ObfDereferenceObject(v10);
  }
  return v5;
}
