/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x1405F4850
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1405F38C0 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     EtwpIsGuidAllowed @ 0x1405F2794 (EtwpIsGuidAllowed.c)
 *     EtwpAccessCheckFromState @ 0x1405F2814 (EtwpAccessCheckFromState.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405F2D00 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     EtwpAccessCheck @ 0x1405F4798 (EtwpAccessCheck.c)
 *     EtwpApplyScopeFilters @ 0x1405F4D08 (EtwpApplyScopeFilters.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F6130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1405F6224 (EtwpReferenceGuidEntry.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405F6638 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F7508 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x14067F4C8 (EtwpAddGuidEntry.c)
 *     EtwpProviderArrivalCallback @ 0x1406D7120 (EtwpProviderArrivalCallback.c)
 *     EtwpCopySchematizedFilters @ 0x14093C270 (EtwpCopySchematizedFilters.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  __int64 v34; // rdx
  _TOKEN_ACCESS_INFORMATION *v35; // r8
  int v36; // r12d
  unsigned int *v37; // r14
  __int16 v38; // ax
  __int64 v39; // rax
  void (__fastcall *v40)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD); // rdi
  void *v41; // rbx
  unsigned int v42; // r15d
  __int128 *v43; // r12
  char v44; // r13
  unsigned __int16 *v45; // r15
  unsigned __int8 i; // r14
  __int64 v47; // rdi
  __int64 v48; // rdx
  _TOKEN_ACCESS_INFORMATION *v49; // r8
  int v50; // r12d
  _DWORD *v51; // r9
  _KPROCESS *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  _DWORD *v55; // r9
  unsigned __int8 v56; // bl
  __int64 v57; // r14
  unsigned int *v58; // rdi
  __int16 v59; // ax
  _DWORD *v60; // r9
  _KPROCESS *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // r8
  _DWORD *v64; // r9
  PVOID PoolWithTag; // rax
  ULONGLONG v66; // rax
  __int64 v67; // rax
  _BYTE v68[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 GuidEntryByGuid; // [rsp+48h] [rbp-B8h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-B0h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  __int128 *v72; // [rsp+60h] [rbp-A0h]
  unsigned int *v73; // [rsp+68h] [rbp-98h]
  __int64 v74; // [rsp+70h] [rbp-90h]
  __int128 v75; // [rsp+80h] [rbp-80h] BYREF
  __int128 v76; // [rsp+90h] [rbp-70h]
  __int128 v77; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v78[3]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79[3]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v81; // [rsp+120h] [rbp+20h]
  __int64 v82; // [rsp+128h] [rbp+28h]

  v72 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  v74 = a3;
  v73 = a5;
  v9 = 0;
  v10 = *(_QWORD *)(v6 + 392);
  v71 = v10;
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
      v39 = *(_QWORD *)(v11 + 400);
      if ( !v39 || !*(_DWORD *)(v39 + 96) )
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
        if ( EtwpIsGuidAllowed(v33, (const void *)(*(_QWORD *)(a1 + 32) + 40LL)) )
        {
          ExAcquirePushLockSharedEx(v33 + 704, 0LL);
          v35 = *(_TOKEN_ACCESS_INFORMATION **)(v33 + 792);
          if ( v35 )
            v36 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL, v34, v35);
          else
            v36 = -1073741790;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 704), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v33 + 704));
          KeAbPostRelease(v33 + 704);
          if ( v36 >= 0 )
            v9 += 1 << v20;
          EtwpReleaseLoggerContext((unsigned int *)v33, 0);
          v10 = v71;
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
    v68[0] = v9;
    LOBYTE(v16) = 2;
    EtwpApplyScopeFilters(a1, 0, v16, 0, (__int64)v68);
    v11 = GuidEntryByGuid;
    v24 = v9 & v68[0];
    *(_BYTE *)(a1 + 101) = v9 & v68[0];
    v25 = *(_QWORD *)(v11 + 400);
    if ( v25 )
    {
      v44 = 0;
      v45 = (unsigned __int16 *)(v25 + 134);
      for ( i = 0; i < 8u; ++i )
      {
        if ( *(_DWORD *)(v45 - 3) )
        {
          v47 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v45, 0);
          if ( EtwpIsGuidAllowed(v47, (const void *)(*(_QWORD *)(a1 + 32) + 40LL)) )
          {
            ExAcquirePushLockSharedEx(v47 + 704, 0LL);
            v49 = *(_TOKEN_ACCESS_INFORMATION **)(v47 + 792);
            if ( v49 )
              v50 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL, v48, v49);
            else
              v50 = -1073741790;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 704), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v47 + 704));
            KeAbPostRelease(v47 + 704);
            if ( v50 >= 0 )
              v44 += 1 << i;
          }
          EtwpReleaseLoggerContext((unsigned int *)v47, 0);
        }
        v45 += 16;
      }
      v68[0] = v44;
      LOBYTE(v23) = 1;
      LOBYTE(v22) = 2;
      EtwpApplyScopeFilters(a1, 0, v22, v23, (__int64)v68);
      v11 = GuidEntryByGuid;
      v10 = v71;
      *(_BYTE *)(a1 + 103) = v44 & v68[0];
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
          v37 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                                  v10,
                                  *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + v27 + 134),
                                  0);
          v38 = *(_WORD *)(a1 + 98);
          if ( (v38 & 0x20) != 0 || (v37[208] & 0x2000000) != 0 )
          {
            if ( (v38 & 1) != 0 )
            {
              EtwpProviderArrivalCallback(v37, 0LL, a1);
            }
            else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
            {
              v52 = *(_KPROCESS **)(a1 + 80);
              memset(v78, 0, sizeof(v78));
              KiStackAttachProcess(v52, 0LL, (__int64)v78, v51);
              LOBYTE(v53) = 1;
              EtwpProviderArrivalCallback(v37, v53, a1);
              KiUnstackDetachProcess((__int64)v78, 0LL, v54, v55);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
            }
          }
          EtwpReleaseLoggerContext(v37, 0);
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
      *v73 = 0;
      goto LABEL_23;
    }
    v56 = 0;
    v57 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v56) & *(_BYTE *)(a1 + 103)) != 0 )
      {
        v58 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                                EtwpHostSiloState,
                                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v57 + 134),
                                0);
        v59 = *(_WORD *)(a1 + 98);
        if ( (v59 & 0x20) != 0 || (v58[208] & 0x2000000) != 0 )
        {
          if ( (v59 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v58, 0LL, a1);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
          {
            v61 = *(_KPROCESS **)(a1 + 80);
            memset(v79, 0, sizeof(v79));
            KiStackAttachProcess(v61, 0LL, (__int64)v79, v60);
            LOBYTE(v62) = 1;
            EtwpProviderArrivalCallback(v58, v62, a1);
            KiUnstackDetachProcess((__int64)v79, 0LL, v63, v64);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
          }
        }
        EtwpReleaseLoggerContext(v58, 0);
      }
      ++v56;
      v57 += 32LL;
    }
    while ( v56 < 8u );
    v11 = GuidEntryByGuid;
LABEL_19:
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v40 = *(void (__fastcall **)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD))(a1 + 88);
      if ( v40 )
      {
        v41 = 0LL;
        v77 = 0LL;
        v75 = 0LL;
        v76 = 0LL;
        EtwpComputeRegEntryEnableInfo(a1, (__int64)&v75);
        v42 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
          v41 = PoolWithTag;
          if ( PoolWithTag )
          {
            v43 = &v77;
            *(_QWORD *)&v77 = PoolWithTag;
            *((_QWORD *)&v77 + 1) = v42 | 0x8000000000000000uLL;
            EtwpCopySchematizedFilters(PoolWithTag);
          }
          else
          {
            v43 = v72;
          }
        }
        else
        {
          v43 = 0LL;
        }
        v40(&NullGuid, 1LL, BYTE4(v75), v76, *((_QWORD *)&v76 + 1), v43, *(_QWORD *)(a1 + 80));
        if ( v41 )
          ExFreePoolWithTag(v41, 0);
      }
    }
    else
    {
      v28 = v74;
      EtwpComputeRegEntryEnableInfo(a1, v74 + 72);
      v29 = v73;
      *v73 = 120;
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
      v66 = *(_QWORD *)(a1 + 32) + 40LL;
      *(_QWORD *)&UserData.Size = 16LL;
      UserData.Ptr = v66;
      v67 = *(_QWORD *)(a1 + 40);
      v82 = 16LL;
      v81 = v67 + 40;
      EtwWrite(v31, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &UserData);
    }
  }
  return (unsigned int)v14;
}
