/*
 * XREFs of ldevLoadDriver @ 0x1C00AD2C0
 * Callers:
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00AD02C (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B1794 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C004439C (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C00AB7D8 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ldevUnloadImage @ 0x1C00AD180 (ldevUnloadImage.c)
 *     ldevLoadImage @ 0x1C00AD5A0 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C00AD8D0 (MakeSystemRelativePath.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C00AD9C0 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 *     FreeSystemRelativePath @ 0x1C00AD9E0 (FreeSystemRelativePath.c)
 *     _wcsicmp @ 0x1C00CC494 (_wcsicmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     WinSqmSetString @ 0x1C01450E8 (WinSqmSetString.c)
 */

struct _LDEV *__fastcall ldevLoadDriver(PCWSTR Source, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v4; // r14d
  __int64 v6; // rax
  int v7; // r15d
  int v8; // ebx
  const wchar_t *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _LDEV *Image; // rbx
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rax
  PERESOURCE v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int (__fastcall *v20)(__int64, _QWORD, PCWSTR *); // rax
  PERESOURCE v21; // rcx
  __int64 v22; // rcx
  unsigned int (__fastcall *v23)(__int64, __int64, PFILE_OBJECT, __int64); // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  PCWSTR v30; // [rsp+30h] [rbp-30h] BYREF
  __int64 v31; // [rsp+38h] [rbp-28h]
  PWSTR Buffer; // [rsp+40h] [rbp-20h]
  BOOL v33; // [rsp+48h] [rbp-18h]
  int v34; // [rsp+4Ch] [rbp-14h]
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-10h] BYREF
  int v36; // [rsp+90h] [rbp+30h] BYREF

  v3 = a3;
  v36 = 0;
  v4 = a2;
  v6 = WdLogNewEntry5_WdEvent(Source, a2, a3);
  *(_QWORD *)(v6 + 24) = Source;
  WdLogEvent5_WdEvent(v6);
  if ( !Source || !*Source )
    return 0LL;
  v7 = 0;
  v8 = 0;
  Destination = 0LL;
  if ( v4 == 1 )
  {
    if ( wcsicmp(Source, L"WORKERDD") && wcsicmp(Source, L"TSDDD") )
    {
      if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() && (unsigned int)(v3 - 2) <= 1 )
      {
        if ( gbForceCddRemoteSessionBitmapSupport )
          v3 = 3;
        v7 = 1;
        if ( !(unsigned int)MakeSystemRelativePath(Source, &Destination) )
        {
          v28 = WdLogNewEntry5_WdError(v26, v25, v27);
          WdLogEvent5_WdError(v28);
          return 0LL;
        }
      }
    }
    else
    {
      v8 = 1;
    }
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  if ( v8 )
  {
    Image = ldevBindDisplayStub();
    v14 = 1;
  }
  else
  {
    v30 = Source;
    LODWORD(v31) = v4;
    v9 = L"cdd";
    if ( !v7 )
      LODWORD(v9) = (_DWORD)Source;
    HIDWORD(v31) = v3;
    Image = (struct _LDEV *)ldevLoadImage((_DWORD)v9, 0, (unsigned int)&v36, 1, v7, (__int64)&v30);
    v14 = v36;
  }
  if ( !Image )
    goto LABEL_15;
  if ( v14 )
  {
    v15 = WdLogNewEntry5_WdTrace(v11);
    WdLogEvent5_WdTrace(v15);
LABEL_15:
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v13);
    v16 = ghsemDriverMgmt;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v17);
    }
    goto LABEL_17;
  }
  Buffer = Destination.Buffer;
  v30 = 0LL;
  v33 = v3 == 3;
  v31 = 0LL;
  v34 = 0;
  if ( v4 == 4 )
    WinSqmSetString(v11, v10, Source);
  v20 = *(unsigned int (__fastcall **)(__int64, _QWORD, PCWSTR *))(*((_QWORD *)Image + 2) + 32LL);
  if ( !v20
    || !v20(196865LL, (unsigned int)(16 * (v7 + 1)), &v30)
    || (unsigned int)((_DWORD)v30 - 0x20000) > 0x10101
    || !(unsigned int)ldevFillTable((__int64)Image, (int *)&v30) )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v13);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v29);
    }
LABEL_39:
    ldevUnloadImage((__int64)Image);
    Image = 0LL;
    goto LABEL_31;
  }
  *((_DWORD *)Image + 6) = v4;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v13);
  v21 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v22);
  }
  v23 = *(unsigned int (__fastcall **)(__int64, __int64, PFILE_OBJECT, __int64))(*((_QWORD *)Image + 112) + 616LL);
  if ( !v23 )
    goto LABEL_31;
  if ( !v23(qword_1C0253218, qword_1C0253210, FileObject, qword_1C0253220) )
    goto LABEL_39;
  *((_DWORD *)Image + 15) = 1;
LABEL_31:
  v24 = WdLogNewEntry5_WdTrace(v21);
  WdLogEvent5_WdTrace(v24);
LABEL_17:
  if ( v7 )
    FreeSystemRelativePath(&Destination);
  v18 = WdLogNewEntry5_WdTrace(v16);
  *(_QWORD *)(v18 + 24) = Image;
  WdLogEvent5_WdTrace(v18);
  return Image;
}
