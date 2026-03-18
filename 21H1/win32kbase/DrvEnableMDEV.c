/*
 * XREFs of DrvEnableMDEV @ 0x1C00B09B8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeEnableMDEV @ 0x1C00CBEC0 (SafeEnableMDEV.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C004CD60 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkDisplayOnOff @ 0x1C004FEC0 (DrvDxgkDisplayOnOff.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0099794 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     UserNotifyDisplayChange @ 0x1C00ADA60 (UserNotifyDisplayChange.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CB454 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C01FD254 (IsDrvRealizeHalftonePaletteSupported.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rcx
  HDEV v12; // rbp
  unsigned int v13; // r8d
  __int64 v14; // rax
  int v15; // r8d
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // r8d
  struct _ERESOURCE *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  void (__fastcall *v27)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v28; // ecx
  __int64 *v29; // rdx
  _QWORD *v30; // rdi
  void (__fastcall *v31)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v32; // rax
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v34; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)a2;
  v4 = 1;
  v5 = a3;
  v7 = WdLogNewEntry5_WdEvent(a1, a2, a3);
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
      DrvDxgkDisplayOnOff(a1[v11 + 5], v8, v5);
      DrvEnableDisplay(v12);
    }
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v9 + 64), 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 48));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48), 11);
  if ( (_DWORD)v3 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v14 = *(_QWORD *)(v9 + 1808);
  v34 = v14;
  if ( (*(_DWORD *)(v14 + 24) & 0x800) != 0 )
  {
    v27 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 2864);
    if ( v27 )
      v27(*(_QWORD *)(v9 + 1800), &v34, 0LL, 0LL, *(_DWORD *)(v14 + 28));
    else
      v4 = 0;
  }
  else
  {
    v13 = *((_DWORD *)a1 + 5);
    if ( v13 > 1 )
    {
      v28 = 0;
      v29 = a1 + 5;
      while ( 1 )
      {
        v30 = (_QWORD *)*v29;
        if ( (*(_DWORD *)(*v29 + 2172) & 0x100) != 0 )
          break;
        ++v28;
        v29 += 7;
        if ( v28 >= v13 )
          goto LABEL_9;
      }
      v31 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v30[221];
      v32 = v30[226];
      i = v32;
      if ( v31 )
        v31(*(_QWORD *)(v30[3] + 1800LL), &i, 0LL, 0LL, *(_DWORD *)(v32 + 28));
      else
        v4 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 && qword_1C0257248 )
        qword_1C0257248(v30, 1LL);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48), v13);
  v16 = *(struct _ERESOURCE **)(v9 + 48);
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    PsLeavePriorityRegion(v17);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v15);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v19);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v18);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v21);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v9 + 64), v20);
  v23 = *(struct _ERESOURCE **)(v9 + 64);
  if ( v23 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v23);
    PsLeavePriorityRegion(v24);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v22);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v25);
  }
  if ( (_DWORD)v3 )
    GreIncrementDisplaySettingsUniqueness();
  if ( !gProtocolType )
    UserNotifyDisplayChange();
  return v4;
}
