/*
 * XREFs of GreSuspendDirectDraw @ 0x1C004F950
 * Callers:
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C004F858 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B8F98 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C00B9430 (DrvDisableMDEV.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C004FAD8 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x1C004FC20 (DrvDxgkDisplayOnOff.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00A52B8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 *     hdevEnumerate @ 0x1C00A6690 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C00A7D10 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00A7D50 (GreUnlockDisplayDevice.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, char a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rdi
  int v8; // eax
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BOOL8 v12; // rdx
  char v13; // [rsp+48h] [rbp+10h] BYREF
  char v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
    for ( i = 0LL; ; i = v7 )
    {
      v5 = hdevEnumerate(i);
      v7 = v5;
      if ( !v5 )
        break;
      v15 = v5;
      v8 = *(_DWORD *)(v5 + 40);
      if ( (v8 & 1) != 0
        && (v8 & 0x400) == 0
        && (v8 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v15) )
      {
        GreLockVisRgn(v7);
        GreLockDisplayDevice(v7);
        v13 = 0;
        v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C024C9E0)(
               *(_QWORD *)(*(_QWORD *)(v7 + 2576) + 240LL),
               *(unsigned int *)(*(_QWORD *)(v7 + 2576) + 256LL),
               &v13);
        *(_DWORD *)(v7 + 2616) = 1;
        if ( ((a2 & 8) == 0 || v9) && *(_QWORD *)(v7 + 2728) )
        {
          if ( (a2 & 4) != 0 && v13 )
            v10 = 0LL;
          else
            LOBYTE(v10) = 1;
          DrvDxgkDisplayOnOff(v7, v10, 3LL);
          v12 = (a2 & 4) == 0 || !v13;
          (*(void (__fastcall **)(_QWORD, _BOOL8))(v7 + 2728))(*(_QWORD *)(v7 + 1800), v12);
        }
        *(_DWORD *)(v7 + 2616) = 0;
        GreUnlockDisplayDevice(v7);
        GreUnlockVisRgn(v7);
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v6);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v11);
    }
  }
}
