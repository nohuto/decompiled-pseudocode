/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x140669A60
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1406697B8 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405F37C8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F494C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F4A40 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1405F4B34 (EtwpReferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x1405F4C98 (EtwpApplyScopeFilters.c)
 *     EtwpAccessCheck @ 0x1405F753C (EtwpAccessCheck.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14066A398 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAccessCheckFromState @ 0x14066A4E4 (EtwpAccessCheckFromState.c)
 *     EtwpIsGuidAllowed @ 0x14066A9D0 (EtwpIsGuidAllowed.c)
 *     EtwpProviderArrivalCallback @ 0x1406AFD98 (EtwpProviderArrivalCallback.c)
 *     EtwpAddGuidEntry @ 0x14071A098 (EtwpAddGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x1409432B4 (EtwpCopySchematizedFilters.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  unsigned __int8 v19; // di
  unsigned __int16 *v20; // rbx
  char v21; // al
  __int64 v22; // rcx
  unsigned __int8 v23; // bl
  __int64 v24; // rdi
  __int64 v25; // r12
  unsigned int *v26; // r15
  int v27; // eax
  REGHANDLE v28; // rdi
  __int64 v30; // r15
  int v31; // r12d
  __int64 v32; // r14
  __int16 v33; // ax
  __int64 v34; // rax
  void (__fastcall *v35)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD); // rdi
  void *v36; // rbx
  unsigned int v37; // r15d
  __int128 *v38; // r12
  char v39; // r13
  unsigned __int16 *v40; // r15
  unsigned __int8 i; // r14
  __int64 v42; // rdi
  int v43; // r12d
  _KPROCESS *v44; // rcx
  __int64 v45; // rdx
  unsigned __int8 v46; // bl
  __int64 v47; // r14
  __int64 v48; // rdi
  __int16 v49; // ax
  _KPROCESS *v50; // rcx
  __int64 v51; // rdx
  PVOID PoolWithTag; // rax
  ULONGLONG v53; // rax
  __int64 v54; // rax
  _BYTE v55[8]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *GuidEntryByGuid; // [rsp+48h] [rbp-B8h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h]
  __int128 *v59; // [rsp+60h] [rbp-A0h]
  unsigned int *v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h]
  __int128 v62; // [rsp+80h] [rbp-80h] BYREF
  __int128 v63; // [rsp+90h] [rbp-70h]
  __int128 v64; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v65[3]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66[3]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]

  v59 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  v61 = a3;
  v60 = a5;
  v9 = 0;
  v10 = *(_QWORD *)(v6 + 392);
  v58 = v10;
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
    v16 = (_QWORD *)(v11 + 56);
    *(_QWORD *)(a1 + 40) = v11;
    v17 = *(_QWORD *)(v11 + 56);
    v18 = (_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v17 + 8) != v11 + 56 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(a1 + 24) = v16;
    *(_QWORD *)(v17 + 8) = v18;
    *v16 = v18;
    if ( !*(_DWORD *)(v11 + 96) )
    {
      v34 = *(_QWORD *)(v11 + 400);
      if ( !v34 || !*(_DWORD *)(v34 + 96) )
      {
        *a5 = 0;
LABEL_22:
        v14 = 0;
        goto LABEL_23;
      }
    }
    v19 = 0;
    v20 = (unsigned __int16 *)(v11 + 134);
    do
    {
      if ( *(_DWORD *)(v20 - 3) )
      {
        v30 = EtwpAcquireLoggerContextByLoggerId(v10, *v20, 0LL);
        if ( (unsigned __int8)EtwpIsGuidAllowed(v30, *(_QWORD *)(a1 + 32) + 40LL) )
        {
          ExAcquirePushLockSharedEx(v30 + 704, 0LL);
          if ( *(_QWORD *)(v30 + 792) )
            v31 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
          else
            v31 = -1073741790;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 704), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v30 + 704));
          KeAbPostRelease(v30 + 704);
          if ( v31 >= 0 )
            v9 += 1 << v19;
          EtwpReleaseLoggerContext(v30, 0LL);
          v10 = v58;
        }
        else
        {
          EtwpReleaseLoggerContext(v30, 0LL);
        }
      }
      ++v19;
      v20 += 16;
    }
    while ( v19 < 8u );
    v55[0] = v9;
    EtwpApplyScopeFilters(a1, 0, 2, 0, v55);
    v11 = (ULONG_PTR)GuidEntryByGuid;
    v21 = v9 & v55[0];
    *(_BYTE *)(a1 + 101) = v9 & v55[0];
    v22 = *(_QWORD *)(v11 + 400);
    if ( v22 )
    {
      v39 = 0;
      v40 = (unsigned __int16 *)(v22 + 134);
      for ( i = 0; i < 8u; ++i )
      {
        if ( *(_DWORD *)(v40 - 3) )
        {
          v42 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v40, 0LL);
          if ( (unsigned __int8)EtwpIsGuidAllowed(v42, *(_QWORD *)(a1 + 32) + 40LL) )
          {
            ExAcquirePushLockSharedEx(v42 + 704, 0LL);
            if ( *(_QWORD *)(v42 + 792) )
              v43 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
            else
              v43 = -1073741790;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 704), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v42 + 704));
            KeAbPostRelease(v42 + 704);
            if ( v43 >= 0 )
              v39 += 1 << i;
          }
          EtwpReleaseLoggerContext(v42, 0LL);
        }
        v40 += 16;
      }
      v55[0] = v39;
      EtwpApplyScopeFilters(a1, 0, 2, 1, v55);
      v11 = (ULONG_PTR)GuidEntryByGuid;
      v10 = v58;
      *(_BYTE *)(a1 + 103) = v39 & v55[0];
      v21 = *(_BYTE *)(a1 + 101);
    }
    if ( v21 )
    {
      v23 = 0;
      v24 = 0LL;
      do
      {
        if ( ((unsigned __int8)(1 << v23) & *(_BYTE *)(a1 + 101)) != 0 )
        {
          v32 = EtwpAcquireLoggerContextByLoggerId(v10, *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + v24 + 134), 0LL);
          v33 = *(_WORD *)(a1 + 98);
          if ( (v33 & 0x20) != 0 || (*(_DWORD *)(v32 + 832) & 0x2000000) != 0 )
          {
            if ( (v33 & 1) != 0 )
            {
              EtwpProviderArrivalCallback(v32, 0LL, a1);
            }
            else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
            {
              v44 = *(_KPROCESS **)(a1 + 80);
              memset(v65, 0, sizeof(v65));
              KiStackAttachProcess(v44, 0, (__int64)v65);
              LOBYTE(v45) = 1;
              EtwpProviderArrivalCallback(v32, v45, a1);
              KiUnstackDetachProcess((__int64)v65, 0);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
            }
          }
          EtwpReleaseLoggerContext(v32, 0LL);
        }
        ++v23;
        v24 += 32LL;
      }
      while ( v23 < 8u );
      v11 = (ULONG_PTR)GuidEntryByGuid;
      if ( !*(_BYTE *)(a1 + 103) )
        goto LABEL_19;
    }
    else if ( !*(_BYTE *)(a1 + 103) )
    {
      v14 = 0;
      *v60 = 0;
      goto LABEL_23;
    }
    v46 = 0;
    v47 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v46) & *(_BYTE *)(a1 + 103)) != 0 )
      {
        v48 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v47 + 134),
                0LL);
        v49 = *(_WORD *)(a1 + 98);
        if ( (v49 & 0x20) != 0 || (*(_DWORD *)(v48 + 832) & 0x2000000) != 0 )
        {
          if ( (v49 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v48, 0LL, a1);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
          {
            v50 = *(_KPROCESS **)(a1 + 80);
            memset(v66, 0, sizeof(v66));
            KiStackAttachProcess(v50, 0, (__int64)v66);
            LOBYTE(v51) = 1;
            EtwpProviderArrivalCallback(v48, v51, a1);
            KiUnstackDetachProcess((__int64)v66, 0);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
          }
        }
        EtwpReleaseLoggerContext(v48, 0LL);
      }
      ++v46;
      v47 += 32LL;
    }
    while ( v46 < 8u );
    v11 = (ULONG_PTR)GuidEntryByGuid;
LABEL_19:
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v35 = *(void (__fastcall **)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD))(a1 + 88);
      if ( v35 )
      {
        v36 = 0LL;
        v64 = 0LL;
        v62 = 0LL;
        v63 = 0LL;
        EtwpComputeRegEntryEnableInfo(a1, &v62);
        v37 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
          v36 = PoolWithTag;
          if ( PoolWithTag )
          {
            v38 = &v64;
            *(_QWORD *)&v64 = PoolWithTag;
            *((_QWORD *)&v64 + 1) = v37 | 0x8000000000000000uLL;
            EtwpCopySchematizedFilters(PoolWithTag);
          }
          else
          {
            v38 = v59;
          }
        }
        else
        {
          v38 = 0LL;
        }
        v35(&NullGuid, 1LL, BYTE4(v62), v63, *((_QWORD *)&v63 + 1), v38, *(_QWORD *)(a1 + 80));
        if ( v36 )
          ExFreePoolWithTag(v36, 0);
      }
    }
    else
    {
      v25 = v61;
      EtwpComputeRegEntryEnableInfo(a1, v61 + 72);
      v26 = v60;
      *v60 = 120;
      v27 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 100));
      if ( v27 )
      {
        *v26 = v27 + 136;
        *(_DWORD *)(v25 + 132) = 0x80000000;
        *(_DWORD *)(v25 + 128) = v27;
        *(_QWORD *)(v25 + 120) = 136LL;
        EtwpCopySchematizedFilters((void *)(v25 + 136));
        *(_DWORD *)(v25 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(v25 + 116) = 0;
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
    v28 = EtwpEventTracingProvRegHandle;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    {
      v53 = *(_QWORD *)(a1 + 32) + 40LL;
      *(_QWORD *)&UserData.Size = 16LL;
      UserData.Ptr = v53;
      v54 = *(_QWORD *)(a1 + 40);
      v69 = 16LL;
      v68 = v54 + 40;
      EtwWrite(v28, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &UserData);
    }
  }
  return (unsigned int)v14;
}
