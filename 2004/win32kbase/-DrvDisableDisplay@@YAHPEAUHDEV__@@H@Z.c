/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B8F98
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B8358 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00BA548 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0147510 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     GreSuspendDirectDraw @ 0x1C004F950 (GreSuspendDirectDraw.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C005A940 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00BA080 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00BE074 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisableDisplay(HSEMAPHORE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  int v6; // esi
  int v7; // r8d
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // rax
  unsigned int v9; // ebx
  int v10; // r8d
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // r8d
  struct _ERESOURCE *v18; // rcx
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rcx
  PERESOURCE v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  HSEMAPHORE v28; // rax
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  HSEMAPHORE v32; // rdx
  __int64 v33; // r10
  HSEMAPHORE *v34; // [rsp+60h] [rbp-28h] BYREF
  _DWORD v35[4]; // [rsp+68h] [rbp-20h] BYREF

  v3 = (int)a2;
  v34 = a1;
  v5 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = v3;
  WdLogEvent5_WdEvent(v5);
  GreSuspendDirectDraw((HDEV)a1, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  EngAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)a1[8], 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)a1[6], 11);
  v6 = -1073741637;
  if ( (_DWORD)v3 && ((_DWORD)a1[5] & 0x400) == 0 )
  {
    v28 = a1[319];
    v29 = *((_DWORD *)v28 + 15);
    v30 = *((_DWORD *)v28 + 14);
    v35[0] = 0;
    v35[1] = 0;
    v35[2] = v30;
    v35[3] = v29;
    v31 = qword_1C0251290 ? qword_1C0251290() : -1073741637;
    if ( v31 >= 0 )
    {
      v32 = a1[319];
      v33 = (unsigned __int64)(v32 + 6) & -(__int64)(v32 != 0LL);
      if ( ((_DWORD)v32[28] & 1) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)v32 + 6) + 2832LL))(
          v33,
          0LL,
          0LL,
          0LL,
          0LL,
          v35,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
      else
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt)(
          v33,
          0LL,
          0LL,
          0LL,
          0LL,
          v35,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
    }
  }
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v34,
    (struct _SURFOBJ *)((unsigned __int64)(a1[319] + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)a1[319] >> 64)),
    0LL,
    0);
  if ( qword_1C0251850 )
    v6 = qword_1C0251850();
  if ( v6 >= 0 && qword_1C0251858 )
    qword_1C0251858(a1);
  if ( gProtocolType == -1 )
    *((_DWORD *)a1 + 654) = 4;
  v8 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1[341];
  if ( v8 )
    v9 = v8(a1[225], 0LL);
  else
    v9 = 0;
  *((_DWORD *)a1 + 654) = 0;
  if ( v9 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v34, 1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)a1[6], v7);
  v11 = (struct _ERESOURCE *)a1[6];
  if ( v11 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v11);
    PsLeavePriorityRegion(v12);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v10);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v14);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v13);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v16);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (int)a1[8], v15);
  v18 = (struct _ERESOURCE *)a1[8];
  if ( v18 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v18);
    PsLeavePriorityRegion(v19);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v17);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v21);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, v20);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v23);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v22);
  v24 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v25);
  }
  if ( !v9 )
    GreIncrementDisplaySettingsUniqueness();
  v26 = WdLogNewEntry5_WdTrace(v24);
  *(_QWORD *)(v26 + 24) = (int)v9;
  WdLogEvent5_WdTrace(v26);
  return v9;
}
