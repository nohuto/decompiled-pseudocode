/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x14066BC00
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x14066B740 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 *     EtwpAccessCheckFromState @ 0x14066B000 (EtwpAccessCheckFromState.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14066B0C8 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpAccessCheck @ 0x14066BB48 (EtwpAccessCheck.c)
 *     EtwpApplyScopeFilters @ 0x14066DD84 (EtwpApplyScopeFilters.c)
 *     EtwpFindGuidEntryByGuid @ 0x14066E1D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x14066E2C4 (EtwpReferenceGuidEntry.c)
 *     EtwpGetSchematizedFilterSize @ 0x14066E6D8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x14066F5A8 (EtwpUnreferenceGuidEntry.c)
 *     EtwpIsGuidAllowed @ 0x1406EBE2C (EtwpIsGuidAllowed.c)
 *     EtwpProviderArrivalCallback @ 0x1406FAA60 (EtwpProviderArrivalCallback.c)
 *     EtwpCopySchematizedFilters @ 0x14093D4EC (EtwpCopySchematizedFilters.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v6; // rax
  char v9; // r13
  __int64 v10; // r12
  ULONG_PTR v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v13; // rax
  int v14; // ebx
  int SchematizedFilterSize; // eax
  int v16; // r8d
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned __int8 v20; // di
  unsigned __int16 *v21; // rbx
  int v22; // r8d
  int v23; // r9d
  char v24; // al
  __int64 v25; // rcx
  unsigned __int8 v26; // bl
  __int64 v27; // rdi
  __int64 v28; // r12
  unsigned int *v29; // r15
  int v30; // eax
  REGHANDLE v31; // rdi
  __int64 v33; // r15
  __int64 v34; // rdx
  _TOKEN_ACCESS_INFORMATION *v35; // r8
  int v36; // r12d
  __int64 v37; // r9
  unsigned int *v38; // r14
  __int16 v39; // ax
  __int64 v40; // rax
  void (__fastcall *v41)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD); // rdi
  void *v42; // rbx
  unsigned int v43; // r15d
  __int128 *v44; // r12
  char v45; // r13
  unsigned __int16 *v46; // r15
  unsigned __int8 i; // r14
  __int64 v48; // rdi
  __int64 v49; // rdx
  _TOKEN_ACCESS_INFORMATION *v50; // r8
  int v51; // r12d
  _KPROCESS *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r9
  unsigned __int8 v55; // bl
  __int64 v56; // r14
  unsigned int *v57; // rdi
  __int64 v58; // r9
  __int16 v59; // ax
  _KPROCESS *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r9
  PVOID PoolWithTag; // rax
  ULONGLONG v64; // rax
  __int64 v65; // rax
  _BYTE v66[8]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *GuidEntryByGuid; // [rsp+48h] [rbp-B8h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-B0h]
  __int64 v69; // [rsp+58h] [rbp-A8h]
  __int128 *v70; // [rsp+60h] [rbp-A0h]
  unsigned int *v71; // [rsp+68h] [rbp-98h]
  __int64 v72; // [rsp+70h] [rbp-90h]
  __int128 v73; // [rsp+80h] [rbp-80h] BYREF
  __int128 v74; // [rsp+90h] [rbp-70h]
  __int128 v75; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v76[3]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77[3]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v79; // [rsp+120h] [rbp+20h]
  __int64 v80; // [rsp+128h] [rbp+28h]

  v70 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  v72 = a3;
  v71 = a5;
  v9 = 0;
  v10 = *(_QWORD *)(v6 + 392);
  v69 = v10;
  GuidEntryByGuid = (_QWORD *)EtwpFindGuidEntryByGuid(v10, a2, 2LL);
  v11 = (ULONG_PTR)GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    GuidEntryByGuid = EtwpAddGuidEntry(v10, a2, 2);
    v11 = (ULONG_PTR)GuidEntryByGuid;
    if ( !GuidEntryByGuid )
      return (unsigned int)-1073741801;
  }
  *a5 = 120;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11 + 408, 0LL);
  *(_QWORD *)(v11 + 416) = KeGetCurrentThread();
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 408LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 40) )
    goto LABEL_22;
  v14 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(v11 + 72), 0x1000u, 0LL);
  if ( v14 >= 0 )
  {
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
    LODWORD(NumberOfBytes) = SchematizedFilterSize;
    if ( SchematizedFilterSize )
      *a5 += SchematizedFilterSize + 16;
    if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > a4 )
    {
      v14 = -1073741789;
      goto LABEL_23;
    }
    EtwpReferenceGuidEntry(v11);
    v17 = (_QWORD *)(v11 + 56);
    *(_QWORD *)(a1 + 40) = v11;
    v18 = *(_QWORD *)(v11 + 56);
    v19 = (_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v18 + 8) != v11 + 56 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)(v18 + 8) = v19;
    *v17 = v19;
    if ( !*(_DWORD *)(v11 + 96) )
    {
      v40 = *(_QWORD *)(v11 + 400);
      if ( !v40 || !*(_DWORD *)(v40 + 96) )
      {
        *a5 = 0;
LABEL_22:
        v14 = 0;
        goto LABEL_23;
      }
    }
    v20 = 0;
    v21 = (unsigned __int16 *)(v11 + 134);
    do
    {
      if ( *(_DWORD *)(v21 - 3) )
      {
        v33 = EtwpAcquireLoggerContextByLoggerId(v10, *v21, 0);
        if ( (unsigned __int8)EtwpIsGuidAllowed(v33, *(_QWORD *)(a1 + 32) + 40LL) )
        {
          ExAcquirePushLockSharedEx(v33 + 704, 0LL);
          v35 = *(_TOKEN_ACCESS_INFORMATION **)(v33 + 792);
          if ( v35 )
            v36 = EtwpAccessCheckFromState((unsigned int *)(*(_QWORD *)(a1 + 32) + 40LL), v34, v35);
          else
            v36 = -1073741790;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 704), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v33 + 704));
          KeAbPostRelease(v33 + 704);
          if ( v36 >= 0 )
            v9 += 1 << v20;
          EtwpReleaseLoggerContext((unsigned int *)v33, 0);
          v10 = v69;
        }
        else
        {
          EtwpReleaseLoggerContext((unsigned int *)v33, 0);
        }
      }
      ++v20;
      v21 += 16;
    }
    while ( v20 < 8u );
    v66[0] = v9;
    LOBYTE(v16) = 2;
    EtwpApplyScopeFilters(a1, 0, v16, 0, (__int64)v66);
    v11 = (ULONG_PTR)GuidEntryByGuid;
    v24 = v9 & v66[0];
    *(_BYTE *)(a1 + 101) = v9 & v66[0];
    v25 = *(_QWORD *)(v11 + 400);
    if ( v25 )
    {
      v45 = 0;
      v46 = (unsigned __int16 *)(v25 + 134);
      for ( i = 0; i < 8u; ++i )
      {
        if ( *(_DWORD *)(v46 - 3) )
        {
          v48 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v46, 0);
          if ( (unsigned __int8)EtwpIsGuidAllowed(v48, *(_QWORD *)(a1 + 32) + 40LL) )
          {
            ExAcquirePushLockSharedEx(v48 + 704, 0LL);
            v50 = *(_TOKEN_ACCESS_INFORMATION **)(v48 + 792);
            if ( v50 )
              v51 = EtwpAccessCheckFromState((unsigned int *)(*(_QWORD *)(a1 + 32) + 40LL), v49, v50);
            else
              v51 = -1073741790;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v48 + 704), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v48 + 704));
            KeAbPostRelease(v48 + 704);
            if ( v51 >= 0 )
              v45 += 1 << i;
          }
          EtwpReleaseLoggerContext((unsigned int *)v48, 0);
        }
        v46 += 16;
      }
      v66[0] = v45;
      LOBYTE(v23) = 1;
      LOBYTE(v22) = 2;
      EtwpApplyScopeFilters(a1, 0, v22, v23, (__int64)v66);
      v11 = (ULONG_PTR)GuidEntryByGuid;
      v10 = v69;
      *(_BYTE *)(a1 + 103) = v45 & v66[0];
      v24 = *(_BYTE *)(a1 + 101);
    }
    if ( v24 )
    {
      v26 = 0;
      v27 = 0LL;
      do
      {
        if ( ((unsigned __int8)(1 << v26) & *(_BYTE *)(a1 + 101)) != 0 )
        {
          v38 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                                  v10,
                                  *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + v27 + 134),
                                  0);
          v39 = *(_WORD *)(a1 + 98);
          if ( (v39 & 0x20) != 0 || (v38[208] & 0x2000000) != 0 )
          {
            if ( (v39 & 1) != 0 )
            {
              EtwpProviderArrivalCallback(v38, 0LL, a1, v37);
            }
            else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
            {
              v52 = *(_KPROCESS **)(a1 + 80);
              memset(v76, 0, sizeof(v76));
              KiStackAttachProcess(v52, 0LL, (__int64)v76);
              LOBYTE(v53) = 1;
              EtwpProviderArrivalCallback(v38, v53, a1, v54);
              KiUnstackDetachProcess((__int64)v76, 0LL);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
            }
          }
          EtwpReleaseLoggerContext(v38, 0);
        }
        ++v26;
        v27 += 32LL;
      }
      while ( v26 < 8u );
      v11 = (ULONG_PTR)GuidEntryByGuid;
      if ( !*(_BYTE *)(a1 + 103) )
        goto LABEL_19;
    }
    else if ( !*(_BYTE *)(a1 + 103) )
    {
      v14 = 0;
      *v71 = 0;
      goto LABEL_23;
    }
    v55 = 0;
    v56 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v55) & *(_BYTE *)(a1 + 103)) != 0 )
      {
        v57 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                                EtwpHostSiloState,
                                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v56 + 134),
                                0);
        v59 = *(_WORD *)(a1 + 98);
        if ( (v59 & 0x20) != 0 || (v57[208] & 0x2000000) != 0 )
        {
          if ( (v59 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v57, 0LL, a1, v58);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
          {
            v60 = *(_KPROCESS **)(a1 + 80);
            memset(v77, 0, sizeof(v77));
            KiStackAttachProcess(v60, 0LL, (__int64)v77);
            LOBYTE(v61) = 1;
            EtwpProviderArrivalCallback(v57, v61, a1, v62);
            KiUnstackDetachProcess((__int64)v77, 0LL);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
          }
        }
        EtwpReleaseLoggerContext(v57, 0);
      }
      ++v55;
      v56 += 32LL;
    }
    while ( v55 < 8u );
    v11 = (ULONG_PTR)GuidEntryByGuid;
LABEL_19:
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v41 = *(void (__fastcall **)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD))(a1 + 88);
      if ( v41 )
      {
        v42 = 0LL;
        v75 = 0LL;
        v73 = 0LL;
        v74 = 0LL;
        EtwpComputeRegEntryEnableInfo(a1, (__int64)&v73);
        v43 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
          v42 = PoolWithTag;
          if ( PoolWithTag )
          {
            v44 = &v75;
            *(_QWORD *)&v75 = PoolWithTag;
            *((_QWORD *)&v75 + 1) = v43 | 0x8000000000000000uLL;
            EtwpCopySchematizedFilters(PoolWithTag);
          }
          else
          {
            v44 = v70;
          }
        }
        else
        {
          v44 = 0LL;
        }
        v41(&NullGuid, 1LL, BYTE4(v73), v74, *((_QWORD *)&v74 + 1), v44, *(_QWORD *)(a1 + 80));
        if ( v42 )
          ExFreePoolWithTag(v42, 0);
      }
    }
    else
    {
      v28 = v72;
      EtwpComputeRegEntryEnableInfo(a1, v72 + 72);
      v29 = v71;
      *v71 = 120;
      v30 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
      if ( v30 )
      {
        *v29 = v30 + 136;
        *(_DWORD *)(v28 + 132) = 0x80000000;
        *(_DWORD *)(v28 + 128) = v30;
        *(_QWORD *)(v28 + 120) = 136LL;
        EtwpCopySchematizedFilters((void *)(v28 + 136));
        *(_DWORD *)(v28 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(v28 + 116) = 0;
      }
    }
    goto LABEL_22;
  }
LABEL_23:
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(a1 + 32) + 408LL, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v11 + 416) = 0LL;
  ExReleasePushLockEx(v11 + 408, 0LL);
  KeLeaveCriticalRegion();
  EtwpUnreferenceGuidEntry(v11);
  if ( v14 >= 0 )
  {
    v31 = EtwpEventTracingProvRegHandle;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    {
      v64 = *(_QWORD *)(a1 + 32) + 40LL;
      *(_QWORD *)&UserData.Size = 16LL;
      UserData.Ptr = v64;
      v65 = *(_QWORD *)(a1 + 40);
      v80 = 16LL;
      v79 = v65 + 40;
      EtwWrite(v31, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &UserData);
    }
  }
  return (unsigned int)v14;
}
