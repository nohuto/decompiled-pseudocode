/*
 * XREFs of GreSuspendDirectDraw @ 0x1C0011120
 * Callers:
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C00108C4 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0015994 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0015E30 (DrvDisableMDEV.c)
 * Callees:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00112A8 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     hdevEnumerate @ 0x1C0011850 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C0011AC0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C0011B00 (GreUnlockDisplayDevice.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0060CA8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00BDF70 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, char a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  char v8; // al
  __int64 v9; // rdx
  _BOOL8 v10; // rdx
  char v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
    for ( i = 0LL; ; i = v6 )
    {
      v5 = hdevEnumerate(i);
      v6 = v5;
      if ( !v5 )
        break;
      v13 = v5;
      v7 = *(_DWORD *)(v5 + 40);
      if ( (v7 & 1) != 0
        && (v7 & 0x400) == 0
        && (v7 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v13) )
      {
        GreLockVisRgn(v6);
        GreLockDisplayDevice(v6);
        v11 = 0;
        v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C024A9E0)(
               *(_QWORD *)(*(_QWORD *)(v6 + 2576) + 240LL),
               *(unsigned int *)(*(_QWORD *)(v6 + 2576) + 256LL),
               &v11);
        *(_DWORD *)(v6 + 2616) = 1;
        if ( ((a2 & 8) == 0 || v8) && *(_QWORD *)(v6 + 2728) )
        {
          if ( (a2 & 4) != 0 && v11 )
            v9 = 0LL;
          else
            LOBYTE(v9) = 1;
          DrvDxgkDisplayOnOff(v6, v9, 3LL);
          v10 = (a2 & 4) == 0 || !v11;
          (*(void (__fastcall **)(_QWORD, _BOOL8))(v6 + 2728))(*(_QWORD *)(v6 + 1800), v10);
        }
        *(_DWORD *)(v6 + 2616) = 0;
        GreUnlockDisplayDevice(v6);
        GreUnlockVisRgn(v6);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
}
