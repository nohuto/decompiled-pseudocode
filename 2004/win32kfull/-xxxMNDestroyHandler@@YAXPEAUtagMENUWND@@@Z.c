/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02366A8
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C02386F0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNFreePopup @ 0x1C0222788 (MNFreePopup.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v26; // rax
  _QWORD *v27; // rax
  _QWORD v28[2]; // [rsp+30h] [rbp-40h] BYREF
  void *const *v29[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h]

  v31 = 0LL;
  v30 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v28, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v28, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v28[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v28[0] + 24LL) )
    {
      v3 = *(_QWORD *)v28[0];
      if ( *(_QWORD *)(*(_QWORD *)v28[0] + 16LL) )
        v4 = *(_QWORD *)(v3 + 16);
      else
        v4 = *(_QWORD *)(v3 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v30 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v30;
      *((_QWORD *)&v30 + 1) = v4;
      HMLockObject(v4);
      xxxSendMessage(v4, 0x1E4u, 0LL, 0LL);
      ThreadUnlock1(v7, v6, v8);
    }
    if ( *(_QWORD *)(*(_QWORD *)v28[0] + 40LL)
      && *(int *)(*(_QWORD *)v28[0] + 80LL) >= 0
      && *(_DWORD *)(*(_QWORD *)v28[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 40LL)
                                                           + 44LL) )
    {
      *(_DWORD *)(*(_QWORD *)(96LL * *(int *)(*(_QWORD *)v28[0] + 80LL)
                            + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 88LL))
                + 4LL) &= ~0x80u;
    }
    if ( (**(_DWORD **)v28[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v28[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v28[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v28[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v28[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v28[0] + 8LL) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)v28[0] + 8LL);
      v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v30 = *(_QWORD *)(v10 + 408);
      *(_QWORD *)(v10 + 408) = &v30;
      *((_QWORD *)&v30 + 1) = v9;
      HMLockObject(v9);
      if ( *(_QWORD *)(*(_QWORD *)v28[0] + 40LL) )
        v11 = **(_QWORD **)(*(_QWORD *)v28[0] + 40LL);
      else
        v11 = 0LL;
      xxxSendMessage(
        *(_QWORD *)(*(_QWORD *)v28[0] + 8LL),
        0x125u,
        v11,
        (**(_DWORD **)v28[0] & 4) != 0 ? (struct _LARGE_STRING *)0x20000000 : 0);
      ThreadUnlock1(v13, v12, v14);
    }
    **(_DWORD **)v28[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v28[0] + 16LL) )
    {
      v15 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v28[0] + 16LL));
      v16 = v15;
      if ( v15 )
      {
        *(_QWORD *)(v15 + 8) = 0LL;
        if ( *(_QWORD *)(v15 + 16) && *(_QWORD *)(v15 + 16) != *(_QWORD *)v28[0] )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28[0], *(_QWORD *)v28[0]);
        *(_QWORD *)(v16 + 16) = *(_QWORD *)v28[0];
      }
    }
    if ( (**(_DWORD **)v28[0] & 0x10000) != 0 )
    {
      v2 = *(_QWORD *)v28[0];
      **(_DWORD **)(*(_QWORD *)v28[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, *(_QWORD *)v28[0]);
      MNFreePopup(v29);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (CurrentProcess = PsGetCurrentProcess(v20, v19, v21),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v24),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v26 )
      v18 = *v26;
  }
  if ( v28[0] != gSmartObjNullRef && !--*(_DWORD *)(v28[0] + 8LL) )
  {
    if ( *(_BYTE *)(v28[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v28[0]);
  }
  v27 = *(_QWORD **)(v18 + 1464);
  if ( v27 )
    *(_QWORD *)(v18 + 1464) = *v27;
}
