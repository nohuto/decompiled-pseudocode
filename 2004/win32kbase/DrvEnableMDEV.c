/*
 * XREFs of DrvEnableMDEV @ 0x1C00B96B8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeEnableMDEV @ 0x1C00CC770 (SafeEnableMDEV.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     DrvDxgkDisplayOnOff @ 0x1C004FC20 (DrvDxgkDisplayOnOff.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C005A940 (GreIncrementDisplaySettingsUniqueness.c)
 *     UserNotifyDisplayChange @ 0x1C00BA740 (UserNotifyDisplayChange.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00BE074 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBCE8 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C01F7824 (IsDrvRealizeHalftonePaletteSupported.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rcx
  HDEV v11; // rbp
  unsigned int v12; // r8d
  __int64 v13; // rax
  int v14; // r8d
  struct _ERESOURCE *v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rcx
  int v21; // r8d
  struct _ERESOURCE *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  void (__fastcall *v26)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v27; // ecx
  __int64 *v28; // rdx
  _QWORD *v29; // rdi
  void (__fastcall *v30)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v31; // rax
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)a2;
  v4 = 1;
  v5 = a3;
  v7 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v3;
  WdLogEvent5_WdEvent(v7);
  v8 = *a1;
  v9 = 0;
  for ( i = *a1; v9 < *((_DWORD *)a1 + 5); ++v9 )
  {
    v10 = 7LL * v9;
    v11 = (HDEV)a1[v10 + 5];
    if ( (_DWORD)v3 )
    {
      DrvDxgkDisplayOnOff(a1[v10 + 5], 1u, v5);
      DrvEnableDisplay(v11);
    }
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v8 + 64), 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 48));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 48), 11);
  if ( (_DWORD)v3 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v13 = *(_QWORD *)(v8 + 1808);
  v33 = v13;
  if ( (*(_DWORD *)(v13 + 24) & 0x800) != 0 )
  {
    v26 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v8 + 2864);
    if ( v26 )
      v26(*(_QWORD *)(v8 + 1800), &v33, 0LL, 0LL, *(_DWORD *)(v13 + 28));
    else
      v4 = 0;
  }
  else
  {
    v12 = *((_DWORD *)a1 + 5);
    if ( v12 > 1 )
    {
      v27 = 0;
      v28 = a1 + 5;
      while ( 1 )
      {
        v29 = (_QWORD *)*v28;
        if ( (*(_DWORD *)(*v28 + 2172) & 0x100) != 0 )
          break;
        ++v27;
        v28 += 7;
        if ( v27 >= v12 )
          goto LABEL_9;
      }
      v30 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v29[221];
      v31 = v29[226];
      i = v31;
      if ( v30 )
        v30(*(_QWORD *)(v29[3] + 1800LL), &i, 0LL, 0LL, *(_DWORD *)(v31 + 28));
      else
        v4 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 && qword_1C0251288 )
        qword_1C0251288(v29, 1LL);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 48), v12);
  v15 = *(struct _ERESOURCE **)(v8 + 48);
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    PsLeavePriorityRegion(v16);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v14);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v18);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v17);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v20);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v8 + 64), v19);
  v22 = *(struct _ERESOURCE **)(v8 + 64);
  if ( v22 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v22);
    PsLeavePriorityRegion(v23);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v21);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v24);
  }
  if ( (_DWORD)v3 )
    GreIncrementDisplaySettingsUniqueness();
  if ( !gProtocolType )
    UserNotifyDisplayChange();
  return v4;
}
