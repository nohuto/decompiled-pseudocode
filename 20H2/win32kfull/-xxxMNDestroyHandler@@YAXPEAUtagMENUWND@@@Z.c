/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235818
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNFreePopup @ 0x1C02218F8 (MNFreePopup.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v32; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v34; // rax
  _QWORD *v35; // rax
  _QWORD v36[2]; // [rsp+30h] [rbp-40h] BYREF
  void **v37[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v38; // [rsp+50h] [rbp-20h] BYREF
  __int64 v39; // [rsp+60h] [rbp-10h]

  v39 = 0LL;
  v38 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v36, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v36, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v36[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v36[0] + 24LL) )
    {
      v6 = *(_QWORD *)v36[0];
      if ( *(_QWORD *)(*(_QWORD *)v36[0] + 16LL) )
        v7 = *(_QWORD *)(v6 + 16);
      else
        v7 = *(_QWORD *)(v6 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v38 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v38;
      *((_QWORD *)&v38 + 1) = v7;
      HMLockObject(v7);
      xxxSendMessage(v7, 0x1E4u, 0LL, 0LL);
      ThreadUnlock1(v10, v9, v11);
    }
    if ( *(_QWORD *)(*(_QWORD *)v36[0] + 40LL) )
    {
      if ( *(int *)(*(_QWORD *)v36[0] + 80LL) >= 0 )
      {
        v2 = *(_QWORD *)v36[0];
        if ( *(_DWORD *)(*(_QWORD *)v36[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 40LL)
                                                               + 44LL) )
        {
          v2 = *(_QWORD *)v36[0];
          v4 = 96LL * *(int *)(*(_QWORD *)v36[0] + 80LL);
          *(_DWORD *)(*(_QWORD *)(v4 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 88LL)) + 4LL) &= ~0x80u;
        }
      }
    }
    if ( (**(_DWORD **)v36[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v36[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v36[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v36[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v36[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v36[0] + 8LL) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)v36[0] + 8LL);
      v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v38 = *(_QWORD *)(v13 + 416);
      *(_QWORD *)(v13 + 416) = &v38;
      *((_QWORD *)&v38 + 1) = v12;
      HMLockObject(v12);
      if ( *(_QWORD *)(*(_QWORD *)v36[0] + 40LL) )
        v14 = **(_QWORD **)(*(_QWORD *)v36[0] + 40LL);
      else
        v14 = 0LL;
      xxxSendMessage(
        *(_QWORD *)(*(_QWORD *)v36[0] + 8LL),
        0x125u,
        v14,
        (**(_DWORD **)v36[0] & 4) != 0 ? (struct _LARGE_STRING *)0x20000000 : 0);
      ThreadUnlock1(v16, v15, v17);
    }
    **(_DWORD **)v36[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v36[0] + 16LL) )
    {
      v18 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v36[0] + 16LL), v2, v4, v5);
      v21 = v18;
      if ( v18 )
      {
        *(_QWORD *)(v18 + 8) = 0LL;
        if ( *(_QWORD *)(v18 + 16) && *(_QWORD *)(v18 + 16) != *(_QWORD *)v36[0] )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36[0], *(_QWORD *)v36[0], v19, v20);
        *(_QWORD *)(v21 + 16) = *(_QWORD *)v36[0];
      }
    }
    if ( (**(_DWORD **)v36[0] & 0x10000) != 0 )
    {
      v3 = *(_QWORD *)v36[0];
      **(_DWORD **)(*(_QWORD *)v36[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v37, *(_QWORD *)v36[0]);
      MNFreePopup(v37, v22, v23, v24);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v26 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v3)
    || (CurrentProcess = PsGetCurrentProcess(v28, v27, v29),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v32),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v34 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v34 )
      v26 = *v34;
  }
  if ( v36[0] != gSmartObjNullRef && !--*(_DWORD *)(v36[0] + 8LL) )
  {
    if ( *(_BYTE *)(v36[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v36[0]);
  }
  v35 = *(_QWORD **)(v26 + 1472);
  if ( v35 )
    *(_QWORD *)(v26 + 1472) = *v35;
}
