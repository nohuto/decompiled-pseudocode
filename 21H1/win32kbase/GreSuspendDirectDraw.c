/*
 * XREFs of GreSuspendDirectDraw @ 0x1C00B2010
 * Callers:
 *     DrvDisableMDEV @ 0x1C00B0730 (DrvDisableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B0C7C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C00B1110 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     DrvDxgkDisplayOnOff @ 0x1C004FEC0 (DrvDxgkDisplayOnOff.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007B850 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00B2198 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00B4CE8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C00B4FA0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C00B5170 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00B51B0 (GreUnlockDisplayDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, char a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  __int64 i; // rcx
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rdi
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rcx
  _BOOL8 v18; // rdx
  char v19; // [rsp+48h] [rbp+10h] BYREF
  char v20; // [rsp+50h] [rbp+18h] BYREF
  __int64 v21; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v20, v4, v5);
    for ( i = 0LL; ; i = v9 )
    {
      v7 = hdevEnumerate(i);
      v9 = v7;
      if ( !v7 )
        break;
      v21 = v7;
      v10 = *(_DWORD *)(v7 + 40);
      if ( (v10 & 1) != 0
        && (v10 & 0x400) == 0
        && (v10 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v21) )
      {
        GreLockVisRgn(v9, v11, v12);
        GreLockDisplayDevice(v9);
        v19 = 0;
        v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C0252A00)(
                *(_QWORD *)(*(_QWORD *)(v9 + 2576) + 240LL),
                *(unsigned int *)(*(_QWORD *)(v9 + 2576) + 256LL),
                &v19);
        *(_DWORD *)(v9 + 2616) = 1;
        if ( ((a2 & 8) == 0 || v13) && *(_QWORD *)(v9 + 2728) )
        {
          if ( (a2 & 4) != 0 && v19 )
            v14 = 0LL;
          else
            LOBYTE(v14) = 1;
          DrvDxgkDisplayOnOff(v9, v14, 3LL);
          v18 = (a2 & 4) == 0 || !v19;
          (*(void (__fastcall **)(_QWORD, _BOOL8))(v9 + 2728))(*(_QWORD *)(v9 + 1800), v18);
        }
        *(_DWORD *)(v9 + 2616) = 0;
        GreUnlockDisplayDevice(v9);
        GreUnlockVisRgn(v9, v15, v16);
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v8);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v17);
    }
  }
}
