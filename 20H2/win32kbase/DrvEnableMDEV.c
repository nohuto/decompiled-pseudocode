/*
 * XREFs of DrvEnableMDEV @ 0x1C00160B8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeEnableMDEV @ 0x1C00CB980 (SafeEnableMDEV.c)
 * Callees:
 *     UserNotifyDisplayChange @ 0x1C0016570 (UserNotifyDisplayChange.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00190D4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00BAAC0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00BDF70 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CAE48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C01F5EF4 (IsDrvRealizeHalftonePaletteSupported.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 *a1, int a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v4; // r14d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rcx
  HDEV v12; // rbp
  __int64 v13; // rax
  unsigned int v14; // r8d
  struct _ERESOURCE *v15; // rcx
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  PERESOURCE v20; // rcx
  void (__fastcall *v22)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v23; // ecx
  __int64 *v24; // rdx
  _QWORD *v25; // rdi
  void (__fastcall *v26)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v27; // rax
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v4 = 1;
  v7 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v3;
  WdLogEvent5_WdEvent(v7);
  v9 = *a1;
  v10 = 0;
  for ( i = *a1; v10 < *((_DWORD *)a1 + 5); ++v10 )
  {
    v11 = 7LL * v10;
    v12 = (HDEV)a1[v11 + 5];
    if ( (_DWORD)v3 )
    {
      LOBYTE(v8) = 1;
      DrvDxgkDisplayOnOff(a1[v11 + 5], v8, a3);
      DrvEnableDisplay(v12);
    }
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemPointer()", *(_QWORD *)(v9 + 64), 4LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 48));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48), 11LL);
  if ( (_DWORD)v3 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v13 = *(_QWORD *)(v9 + 1808);
  v29 = v13;
  if ( (*(_DWORD *)(v13 + 24) & 0x800) != 0 )
  {
    v22 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 2864);
    if ( v22 )
      v22(*(_QWORD *)(v9 + 1800), &v29, 0LL, 0LL, *(_DWORD *)(v13 + 28));
    else
      v4 = 0;
  }
  else
  {
    v14 = *((_DWORD *)a1 + 5);
    if ( v14 > 1 )
    {
      v23 = 0;
      v24 = a1 + 5;
      while ( 1 )
      {
        v25 = (_QWORD *)*v24;
        if ( (*(_DWORD *)(*v24 + 2172) & 0x100) != 0 )
          break;
        ++v23;
        v24 += 7;
        if ( v23 >= v14 )
          goto LABEL_9;
      }
      v26 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v25[221];
      v27 = v25[226];
      i = v27;
      if ( v26 )
        v26(*(_QWORD *)(v25[3] + 1800LL), &i, 0LL, 0LL, *(_DWORD *)(v27 + 28));
      else
        v4 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 && qword_1C024F288 )
        qword_1C024F288(v25, 1LL);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48));
  v15 = *(struct _ERESOURCE **)(v9 + 48);
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()", *(_QWORD *)(v9 + 64));
  v16 = *(struct _ERESOURCE **)(v9 + 64);
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v20 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  if ( (_DWORD)v3 )
    GreIncrementDisplaySettingsUniqueness(v20, v17, v18, v19);
  if ( !gProtocolType )
    UserNotifyDisplayChange();
  return v4;
}
