/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014E7D8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0055454 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014EC64 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct D3DKMT_GETPATHSMODALITY *a2, __int64 a3)
{
  int v3; // eax
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int (__fastcall *v13)(_QWORD); // rax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int updated; // esi
  __int64 v20; // r8
  struct _DEVCAPS *v21; // rdx
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rax
  int v27; // r8d
  int v28; // r8d
  __int64 v29; // rcx
  int v30; // r8d
  __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rcx
  int v36; // r8d
  struct _ERESOURCE *v37; // rcx
  __int64 v38; // rcx
  int v39; // r8d
  __int64 v40; // rcx
  int v41; // r8d
  __int64 v42; // rcx
  struct _ERESOURCE *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // [rsp+40h] [rbp+18h] BYREF

  v3 = (int)qword_1C0256F18;
  if ( qword_1C0256F18 )
    v3 = qword_1C0256F18(a1);
  if ( !v3 || *((_DWORD *)a1 + 5) != 1 )
  {
    v6 = WdLogNewEntry5_WdEvent(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = 5LL;
LABEL_5:
    WdLogEvent5_WdEvent(v6);
    return 0LL;
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdEvent(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = 27906LL;
    goto LABEL_5;
  }
  if ( *((_WORD *)a2 + 10) != 1 )
  {
    v6 = WdLogNewEntry5_WdEvent(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = 27911LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)a1;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02529F8)(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 2576LL) + 240LL),
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 2576LL) + 256LL)) )
  {
    v13 = *(unsigned int (__fastcall **)(_QWORD))(v8 + 2672);
    if ( v13 && v13(*(_QWORD *)(v8 + 1800)) )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 64));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v8 + 64), 4);
      EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
      EngAcquireSemaphore(ghsemHT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 48), 11);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
      EngAcquireSemaphore(ghsemPalette);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 14);
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
      EngAcquireSemaphore(ghsemRFONTList);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 16);
      GreAcquireHmgrSemaphore(v15, v14, v16);
      updated = DrvUpdateDisplayModeInPdev(*((HDEV *)a1 + 5), a2);
      if ( updated )
      {
        v21 = gpGdiDevCaps;
        v22 = *(_DWORD **)(*((_QWORD *)a1 + 5) + 2592LL);
        *((_DWORD *)a1 + 14) = v22[19];
        *((_DWORD *)a1 + 15) = v22[20];
        *((_DWORD *)a1 + 16) = v22[19] + v22[43];
        *((_DWORD *)a1 + 17) = v22[20] + v22[44];
        v45 = *(_QWORD *)a1;
        vGetDeviceCaps((struct PDEVOBJ *)&v45, v21);
      }
      else
      {
        v26 = WdLogNewEntry5_WdEvent(v18, v17, v20);
        *(_QWORD *)(v26 + 24) = 6LL;
        WdLogEvent5_WdEvent(v26);
      }
      GreReleaseHmgrSemaphore(v24, v23, v25);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, v27);
      if ( ghsemRFONTList )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
        PsLeavePriorityRegion(v29);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, v28);
      if ( ghsemPublicPFT )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
        PsLeavePriorityRegion(v31);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (int)ghsemPalette, v30);
      if ( ghsemPalette )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
        PsLeavePriorityRegion(v33);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v32);
      if ( ghsemDwmState )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
        PsLeavePriorityRegion(v35);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 48), v34);
      v37 = *(struct _ERESOURCE **)(v8 + 48);
      if ( v37 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v37);
        PsLeavePriorityRegion(v38);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v36);
      if ( ghsemHT )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
        PsLeavePriorityRegion(v40);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v39);
      if ( ghsemSprite )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
        PsLeavePriorityRegion(v42);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v8 + 64), v41);
      v43 = *(struct _ERESOURCE **)(v8 + 64);
      if ( v43 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v43);
        PsLeavePriorityRegion(v44);
      }
      return updated;
    }
    v12 = WdLogNewEntry5_WdEvent(v10, v9, v11);
    *(_QWORD *)(v12 + 24) = 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdEvent(v10, v9, v11);
    *(_QWORD *)(v12 + 24) = 7LL;
  }
  WdLogEvent5_WdEvent(v12);
  return 0;
}
