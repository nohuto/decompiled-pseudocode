/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x140643580
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x14064323C (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405EB9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1405EBAA4 (EtwpReferenceGuidEntry.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405EBEB8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405FD448 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseLoggerContext @ 0x140643A38 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140643A84 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAccessCheck @ 0x140643B58 (EtwpAccessCheck.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140643FCC (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpApplyScopeFilters @ 0x140644118 (EtwpApplyScopeFilters.c)
 *     EtwpAccessCheckFromState @ 0x140644284 (EtwpAccessCheckFromState.c)
 *     EtwpIsGuidAllowed @ 0x140644770 (EtwpIsGuidAllowed.c)
 *     EtwpProviderArrivalCallback @ 0x1406AAF5C (EtwpProviderArrivalCallback.c)
 *     EtwpAddGuidEntry @ 0x1406E3BB0 (EtwpAddGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x140940A84 (EtwpCopySchematizedFilters.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  int v34; // r12d
  __int64 v35; // r14
  __int16 v36; // ax
  __int64 v37; // rax
  void (__fastcall *v38)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD); // rdi
  void *v39; // rbx
  unsigned int v40; // r15d
  __int128 *v41; // r12
  char v42; // r13
  unsigned __int16 *v43; // r15
  unsigned __int8 i; // r14
  __int64 v45; // rdi
  int v46; // r12d
  _DWORD *v47; // r9
  _KPROCESS *v48; // rcx
  __int64 v49; // rdx
  unsigned __int8 v50; // bl
  __int64 v51; // r14
  __int64 v52; // rdi
  __int16 v53; // ax
  _DWORD *v54; // r9
  _KPROCESS *v55; // rcx
  __int64 v56; // rdx
  PVOID PoolWithTag; // rax
  ULONGLONG v58; // rax
  __int64 v59; // rax
  _BYTE v60[8]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *GuidEntryByGuid; // [rsp+48h] [rbp-B8h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int128 *v64; // [rsp+60h] [rbp-A0h]
  unsigned int *v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h]
  __int128 v67; // [rsp+80h] [rbp-80h] BYREF
  __int128 v68; // [rsp+90h] [rbp-70h]
  __int128 v69; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v70[3]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71[3]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]

  v64 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  v66 = a3;
  v65 = a5;
  v9 = 0;
  v10 = *(_QWORD *)(v6 + 392);
  v63 = v10;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(v10, a2, 2);
  v11 = (ULONG_PTR)GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(v10, a2, 2LL);
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
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 100));
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
      v37 = *(_QWORD *)(v11 + 400);
      if ( !v37 || !*(_DWORD *)(v37 + 96) )
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
        v33 = EtwpAcquireLoggerContextByLoggerId(v10, *v21, 0LL);
        if ( (unsigned __int8)EtwpIsGuidAllowed(v33, *(_QWORD *)(a1 + 32) + 40LL) )
        {
          ExAcquirePushLockSharedEx(v33 + 704, 0LL);
          if ( *(_QWORD *)(v33 + 792) )
            v34 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
          else
            v34 = -1073741790;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 704), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v33 + 704));
          KeAbPostRelease(v33 + 704);
          if ( v34 >= 0 )
            v9 += 1 << v20;
          EtwpReleaseLoggerContext(v33, 0LL);
          v10 = v63;
        }
        else
        {
          EtwpReleaseLoggerContext(v33, 0LL);
        }
      }
      ++v20;
      v21 += 16;
    }
    while ( v20 < 8u );
    v60[0] = v9;
    LOBYTE(v16) = 2;
    EtwpApplyScopeFilters(a1, 0, v16, 0, (__int64)v60);
    v11 = (ULONG_PTR)GuidEntryByGuid;
    v24 = v9 & v60[0];
    *(_BYTE *)(a1 + 101) = v9 & v60[0];
    v25 = *(_QWORD *)(v11 + 400);
    if ( v25 )
    {
      v42 = 0;
      v43 = (unsigned __int16 *)(v25 + 134);
      for ( i = 0; i < 8u; ++i )
      {
        if ( *(_DWORD *)(v43 - 3) )
        {
          v45 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v43, 0LL);
          if ( (unsigned __int8)EtwpIsGuidAllowed(v45, *(_QWORD *)(a1 + 32) + 40LL) )
          {
            ExAcquirePushLockSharedEx(v45 + 704, 0LL);
            if ( *(_QWORD *)(v45 + 792) )
              v46 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
            else
              v46 = -1073741790;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 704), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v45 + 704));
            KeAbPostRelease(v45 + 704);
            if ( v46 >= 0 )
              v42 += 1 << i;
          }
          EtwpReleaseLoggerContext(v45, 0LL);
        }
        v43 += 16;
      }
      v60[0] = v42;
      LOBYTE(v23) = 1;
      LOBYTE(v22) = 2;
      EtwpApplyScopeFilters(a1, 0, v22, v23, (__int64)v60);
      v11 = (ULONG_PTR)GuidEntryByGuid;
      v10 = v63;
      *(_BYTE *)(a1 + 103) = v42 & v60[0];
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
          v35 = EtwpAcquireLoggerContextByLoggerId(v10, *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + v27 + 134), 0LL);
          v36 = *(_WORD *)(a1 + 98);
          if ( (v36 & 0x20) != 0 || (*(_DWORD *)(v35 + 832) & 0x2000000) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              EtwpProviderArrivalCallback(v35, 0LL, a1);
            }
            else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
            {
              v48 = *(_KPROCESS **)(a1 + 80);
              memset(v70, 0, sizeof(v70));
              KiStackAttachProcess(v48, 0LL, (__int64)v70, v47);
              LOBYTE(v49) = 1;
              EtwpProviderArrivalCallback(v35, v49, a1);
              KiUnstackDetachProcess((__int64)v70, 0);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
            }
          }
          EtwpReleaseLoggerContext(v35, 0LL);
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
      *v65 = 0;
      goto LABEL_23;
    }
    v50 = 0;
    v51 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v50) & *(_BYTE *)(a1 + 103)) != 0 )
      {
        v52 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v51 + 134),
                0LL);
        v53 = *(_WORD *)(a1 + 98);
        if ( (v53 & 0x20) != 0 || (*(_DWORD *)(v52 + 832) & 0x2000000) != 0 )
        {
          if ( (v53 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v52, 0LL, a1);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
          {
            v55 = *(_KPROCESS **)(a1 + 80);
            memset(v71, 0, sizeof(v71));
            KiStackAttachProcess(v55, 0LL, (__int64)v71, v54);
            LOBYTE(v56) = 1;
            EtwpProviderArrivalCallback(v52, v56, a1);
            KiUnstackDetachProcess((__int64)v71, 0);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
          }
        }
        EtwpReleaseLoggerContext(v52, 0LL);
      }
      ++v50;
      v51 += 32LL;
    }
    while ( v50 < 8u );
    v11 = (ULONG_PTR)GuidEntryByGuid;
LABEL_19:
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v38 = *(void (__fastcall **)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD))(a1 + 88);
      if ( v38 )
      {
        v39 = 0LL;
        v69 = 0LL;
        v67 = 0LL;
        v68 = 0LL;
        EtwpComputeRegEntryEnableInfo(a1, &v67);
        v40 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
          v39 = PoolWithTag;
          if ( PoolWithTag )
          {
            v41 = &v69;
            *(_QWORD *)&v69 = PoolWithTag;
            *((_QWORD *)&v69 + 1) = v40 | 0x8000000000000000uLL;
            EtwpCopySchematizedFilters(PoolWithTag);
          }
          else
          {
            v41 = v64;
          }
        }
        else
        {
          v41 = 0LL;
        }
        v38(&NullGuid, 1LL, BYTE4(v67), v68, *((_QWORD *)&v68 + 1), v41, *(_QWORD *)(a1 + 80));
        if ( v39 )
          ExFreePoolWithTag(v39, 0);
      }
    }
    else
    {
      v28 = v66;
      EtwpComputeRegEntryEnableInfo(a1, v66 + 72);
      v29 = v65;
      *v65 = 120;
      v30 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 100));
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
  EtwpUnreferenceGuidEntry((__int64 *)v11);
  if ( v14 >= 0 )
  {
    v31 = EtwpEventTracingProvRegHandle;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    {
      v58 = *(_QWORD *)(a1 + 32) + 40LL;
      *(_QWORD *)&UserData.Size = 16LL;
      UserData.Ptr = v58;
      v59 = *(_QWORD *)(a1 + 40);
      v74 = 16LL;
      v73 = v59 + 40;
      EtwWrite(v31, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &UserData);
    }
  }
  return (unsigned int)v14;
}
