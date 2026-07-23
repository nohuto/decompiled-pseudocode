/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x140638390
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x14063804C (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     EtwpProviderArrivalCallback @ 0x14060964C (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAccessCheck @ 0x140638968 (EtwpAccessCheck.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140638DDC (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpApplyScopeFilters @ 0x140638F28 (EtwpApplyScopeFilters.c)
 *     EtwpAccessCheckFromState @ 0x140639094 (EtwpAccessCheckFromState.c)
 *     EtwpIsGuidAllowed @ 0x140639580 (EtwpIsGuidAllowed.c)
 *     EtwpAddGuidEntry @ 0x1406BAE90 (EtwpAddGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406DB110 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1406DB204 (EtwpReferenceGuidEntry.c)
 *     EtwpGetSchematizedFilterSize @ 0x1406DB618 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x140940C54 (EtwpCopySchematizedFilters.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
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
  _KPROCESS *v47; // rcx
  unsigned __int8 v48; // bl
  __int64 v49; // r14
  __int64 v50; // rdi
  __int16 v51; // ax
  _KPROCESS *v52; // rcx
  PVOID PoolWithTag; // rax
  ULONGLONG v54; // rax
  __int64 v55; // rax
  _BYTE v56[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 GuidEntryByGuid; // [rsp+48h] [rbp-B8h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  __int128 *v60; // [rsp+60h] [rbp-A0h]
  unsigned int *v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int128 v63; // [rsp+80h] [rbp-80h] BYREF
  __int128 v64; // [rsp+90h] [rbp-70h]
  __int128 v65; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v66[3]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67[3]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]

  v60 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  v62 = a3;
  v61 = a5;
  v9 = 0;
  v10 = *(_QWORD *)(v6 + 392);
  v59 = v10;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(v10, a2, 2LL);
  v11 = GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    GuidEntryByGuid = EtwpAddGuidEntry(v10, a2, 2LL);
    v11 = GuidEntryByGuid;
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
          v10 = v59;
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
    v56[0] = v9;
    LOBYTE(v16) = 2;
    EtwpApplyScopeFilters(a1, 0, v16, 0, (__int64)v56);
    v11 = GuidEntryByGuid;
    v24 = v9 & v56[0];
    *(_BYTE *)(a1 + 101) = v9 & v56[0];
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
      v56[0] = v42;
      LOBYTE(v23) = 1;
      LOBYTE(v22) = 2;
      EtwpApplyScopeFilters(a1, 0, v22, v23, (__int64)v56);
      v11 = GuidEntryByGuid;
      v10 = v59;
      *(_BYTE *)(a1 + 103) = v42 & v56[0];
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
              EtwpProviderArrivalCallback(v35, 0, a1);
            }
            else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
            {
              v47 = *(_KPROCESS **)(a1 + 80);
              memset(v66, 0, sizeof(v66));
              KiStackAttachProcess(v47, 0, (__int64)v66);
              EtwpProviderArrivalCallback(v35, 1, a1);
              KiUnstackDetachProcess((__int64)v66, 0LL);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
            }
          }
          EtwpReleaseLoggerContext(v35, 0LL);
        }
        ++v26;
        v27 += 32LL;
      }
      while ( v26 < 8u );
      v11 = GuidEntryByGuid;
      if ( !*(_BYTE *)(a1 + 103) )
        goto LABEL_19;
    }
    else if ( !*(_BYTE *)(a1 + 103) )
    {
      v14 = 0;
      *v61 = 0;
      goto LABEL_23;
    }
    v48 = 0;
    v49 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v48) & *(_BYTE *)(a1 + 103)) != 0 )
      {
        v50 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v49 + 134),
                0LL);
        v51 = *(_WORD *)(a1 + 98);
        if ( (v51 & 0x20) != 0 || (*(_DWORD *)(v50 + 832) & 0x2000000) != 0 )
        {
          if ( (v51 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v50, 0, a1);
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
          {
            v52 = *(_KPROCESS **)(a1 + 80);
            memset(v67, 0, sizeof(v67));
            KiStackAttachProcess(v52, 0, (__int64)v67);
            EtwpProviderArrivalCallback(v50, 1, a1);
            KiUnstackDetachProcess((__int64)v67, 0LL);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
          }
        }
        EtwpReleaseLoggerContext(v50, 0LL);
      }
      ++v48;
      v49 += 32LL;
    }
    while ( v48 < 8u );
    v11 = GuidEntryByGuid;
LABEL_19:
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v38 = *(void (__fastcall **)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD))(a1 + 88);
      if ( v38 )
      {
        v39 = 0LL;
        v65 = 0LL;
        v63 = 0LL;
        v64 = 0LL;
        EtwpComputeRegEntryEnableInfo(a1, &v63);
        v40 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
          v39 = PoolWithTag;
          if ( PoolWithTag )
          {
            v41 = &v65;
            *(_QWORD *)&v65 = PoolWithTag;
            *((_QWORD *)&v65 + 1) = v40 | 0x8000000000000000uLL;
            EtwpCopySchematizedFilters(PoolWithTag);
          }
          else
          {
            v41 = v60;
          }
        }
        else
        {
          v41 = 0LL;
        }
        v38(&NullGuid, 1LL, BYTE4(v63), v64, *((_QWORD *)&v64 + 1), v41, *(_QWORD *)(a1 + 80));
        if ( v39 )
          ExFreePoolWithTag(v39, 0);
      }
    }
    else
    {
      v28 = v62;
      EtwpComputeRegEntryEnableInfo(a1, v62 + 72);
      v29 = v61;
      *v61 = 120;
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
  EtwpUnreferenceGuidEntry((PVOID)v11);
  if ( v14 >= 0 )
  {
    v31 = EtwpEventTracingProvRegHandle;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    {
      v54 = *(_QWORD *)(a1 + 32) + 40LL;
      *(_QWORD *)&UserData.Size = 16LL;
      UserData.Ptr = v54;
      v55 = *(_QWORD *)(a1 + 40);
      v70 = 16LL;
      v69 = v55 + 40;
      EtwWrite(v31, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &UserData);
    }
  }
  return (unsigned int)v14;
}
