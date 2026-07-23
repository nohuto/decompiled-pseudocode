/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x140938730
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403D4240 (wcsnlen.c)
 *     wcsncpy_s @ 0x1403D8590 (wcsncpy_s.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpGetCurrentSiloState @ 0x1405AA954 (EtwpGetCurrentSiloState.c)
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     NtSetIntervalProfile @ 0x140734590 (NtSetIntervalProfile.c)
 *     EtwpUpdateGroupMasks @ 0x1407972F0 (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateTagFilter @ 0x140798B50 (EtwpUpdateTagFilter.c)
 *     EtwpCheckSystemTraceAccess @ 0x140798B78 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateStackTracing @ 0x140935B5C (EtwpUpdateStackTracing.c)
 *     EtwpSetPmcProfileSource @ 0x14093772C (EtwpSetPmcProfileSource.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140939650 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14093A578 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x14093B010 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdatePmcCounters @ 0x14093B0DC (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x14093B210 (EtwpUpdatePmcEvents.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14093B2BC (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x140941690 (EtwpCheckCurrentUserGuidAccess.c)
 *     EtwpEnableStackCaching @ 0x140941E64 (EtwpEnableStackCaching.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140947B0C (EtwpSetCoverageSamplerInformation.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x140948300 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1409483C4 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x14094850C (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x1409485B4 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetSoftRestartInformation @ 0x140949520 (EtwpSetSoftRestartInformation.c)
 *     KiGetCpuVendor @ 0x14099CF68 (KiGetCpuVendor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(char *Address, __int64 Length, KPROCESSOR_MODE AccessMode)
{
  unsigned int v4; // esi
  int v6; // ebx
  __int64 CurrentSiloState; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  int v14; // r15d
  unsigned int v15; // r12d
  int v16; // r13d
  int v17; // r14d
  ULONG v18; // edi
  unsigned int v19; // edx
  struct _KTHREAD *v20; // rax
  unsigned int *v21; // rax
  unsigned int *v22; // rdi
  int updated; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // esi
  wchar_t *v29; // rax
  wchar_t *v30; // r14
  ULONG v31; // edx
  wchar_t *v32; // rcx
  unsigned int v33; // esi
  unsigned int v34; // esi
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // edx
  struct _KTHREAD *v39; // rax
  unsigned int *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // edx
  struct _KTHREAD *v43; // rax
  unsigned int *v44; // rax
  unsigned int v46; // edx
  struct _KTHREAD *v47; // rax
  unsigned int *v48; // rax
  unsigned int v49; // esi
  wchar_t *v50; // rax
  wchar_t *v51; // rdi
  unsigned int v52; // r15d
  unsigned int v53; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v55; // rsi
  char v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rcx
  int CpuVendor; // eax
  unsigned int v60; // esi
  unsigned int v61; // esi
  char *v62; // r15
  unsigned int v63; // edx
  struct _KTHREAD *v64; // rax
  unsigned int *v65; // rax
  unsigned int v66; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v68; // rax
  unsigned int v69; // esi
  unsigned int v70; // esi
  unsigned int v71; // edx
  struct _KTHREAD *v72; // rax
  unsigned int *v73; // rax
  unsigned __int16 *v74; // rax
  char v75; // [rsp+30h] [rbp-1E8h]
  int v76; // [rsp+34h] [rbp-1E4h]
  PVOID P; // [rsp+38h] [rbp-1E0h] BYREF
  int v78; // [rsp+40h] [rbp-1D8h]
  unsigned int v79; // [rsp+44h] [rbp-1D4h]
  unsigned int v80; // [rsp+48h] [rbp-1D0h]
  __int128 v81; // [rsp+50h] [rbp-1C8h] BYREF
  wchar_t *Src; // [rsp+60h] [rbp-1B8h]
  int v83; // [rsp+68h] [rbp-1B0h]
  unsigned int v84; // [rsp+6Ch] [rbp-1ACh]
  int v85; // [rsp+70h] [rbp-1A8h]
  ULONG v86; // [rsp+74h] [rbp-1A4h]
  int v87; // [rsp+78h] [rbp-1A0h]
  int v88; // [rsp+7Ch] [rbp-19Ch]
  int v89; // [rsp+80h] [rbp-198h]
  __int128 v90; // [rsp+88h] [rbp-190h] BYREF
  __int64 v91; // [rsp+98h] [rbp-180h]
  __int128 v92; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-168h]
  __int64 v94; // [rsp+B8h] [rbp-160h]
  __int64 v95; // [rsp+C0h] [rbp-158h]
  __int64 v96; // [rsp+C8h] [rbp-150h]
  __int64 v97; // [rsp+D0h] [rbp-148h]
  __int64 v98; // [rsp+D8h] [rbp-140h]
  _OWORD v99[2]; // [rsp+E0h] [rbp-138h] BYREF
  _DWORD v100[44]; // [rsp+100h] [rbp-118h] BYREF
  __int64 v101; // [rsp+1B0h] [rbp-68h] BYREF
  int v102; // [rsp+1B8h] [rbp-60h]
  __int64 v103; // [rsp+1C0h] [rbp-58h] BYREF
  int v104; // [rsp+1C8h] [rbp-50h]
  _DWORD v105[4]; // [rsp+1D0h] [rbp-48h] BYREF

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v6 = *(_DWORD *)Address;
  v76 = *(_DWORD *)Address;
  CurrentSiloState = EtwpGetCurrentSiloState((__int64)Address, Length);
  v9 = CurrentSiloState;
  if ( v6 > 16 )
  {
    v8 = (unsigned int)(v6 - 17);
    if ( v6 == 17 )
      goto LABEL_144;
    if ( v6 != 18 )
    {
      if ( v6 == 19 )
      {
        if ( v4 < 0x18 )
          return 3221225476LL;
        v92 = *(_OWORD *)Address;
        v93 = *((_QWORD *)Address + 2);
        v66 = WORD4(v92);
        if ( WORD4(v92) == 0xFFFF )
          v66 = *(unsigned __int8 *)(CurrentSiloState + 4208);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v68 = EtwpAcquireLoggerContextByLoggerId(v9, v66, 1);
        v22 = v68;
        if ( !v68 )
          goto LABEL_153;
        v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v68);
        if ( v13 < 0 )
          goto LABEL_79;
        updated = EtwpUpdateLastBranchTracingConfiguration(v22, &v92);
LABEL_78:
        v13 = updated;
        goto LABEL_79;
      }
      v8 = (unsigned int)(v6 - 20);
      switch ( v6 )
      {
        case 20:
          goto LABEL_119;
        case 21:
          if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
            return 3221225506LL;
          if ( v4 < 0x24 || Address[4] != 2 || v4 > 0x220 )
            return 3221225476LL;
          v52 = v4 - 34 + 184;
          v53 = (v4 - 34) >> 1;
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v52, 0x50777445u);
          v55 = PoolWithTag;
          P = PoolWithTag;
          if ( !PoolWithTag )
            return 3221225495LL;
          wcsncpy_s(PoolWithTag + 92, v53, (const wchar_t *)Address + 17, v53);
          v103 = *((_QWORD *)Address + 2);
          v104 = *((_DWORD *)Address + 6);
          *((_DWORD *)v55 + 2) = *((_DWORD *)Address + 7);
          v56 = Address[32];
          CpuVendor = KiGetCpuVendor(v58, v57);
          if ( CpuVendor == 2 )
          {
            *(_BYTE *)v55 = Address[8];
            *((_BYTE *)v55 + 1) = Address[9];
            *((_BYTE *)v55 + 2) = Address[10];
            *((_BYTE *)v55 + 3) = Address[11];
            *((_BYTE *)v55 + 4) = Address[12];
            *((_BYTE *)v55 + 5) = Address[13];
          }
          else if ( CpuVendor == 1 )
          {
            *(_BYTE *)v55 = Address[8];
            *((_BYTE *)v55 + 1) = Address[9];
          }
          EtwpGetMicroarchitecturalPmcAffinity(&v103, v55 + 8);
          v13 = ((__int64 (__fastcall *)(__int64, _QWORD, wchar_t *))off_140C00A70[0])(20LL, v52, v55);
          if ( v56 )
            v13 = EtwpAddMicroarchitecturalPmcToRegistry(v55, &v103);
          v32 = v55;
          break;
        case 22:
          v81 = 0LL;
          Src = 0LL;
          memset(&v100[1], 0, 0xACuLL);
          LODWORD(P) = 0;
          if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
            return 3221225506LL;
          if ( v4 != 20 )
            return 3221225476LL;
          v101 = *((_QWORD *)Address + 1);
          v102 = *((_DWORD *)Address + 4);
          LODWORD(v81) = *((_DWORD *)Address + 1);
          v13 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, PVOID *))off_140C00A68[0])(1LL, 24LL, &v81, &P);
          if ( v13 < 0 )
            return (unsigned int)v13;
          v100[0] = v81;
          EtwpGetMicroarchitecturalPmcAffinity(&v101, &v100[2]);
          v49 = wcsnlen(Src, 0xFFuLL);
          v50 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v49 + 1), 0x50777445u);
          v51 = v50;
          if ( !v50 )
            return 3221225495LL;
          wcsncpy_s(v50, v49 + 1, Src, v49);
          v13 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))off_140C00A70[0])(21LL, 176LL, v100);
          EtwpRemoveMicroarchitecturalPmcFromRegistry(v51, v49);
          v32 = v51;
          break;
        case 23:
          if ( v4 >= 0x18 )
          {
            v90 = *(_OWORD *)Address;
            v91 = *((_QWORD *)Address + 2);
            v46 = WORD4(v90);
            if ( WORD4(v90) == 0xFFFF )
              v46 = *(unsigned __int8 *)(CurrentSiloState + 4208);
            v47 = KeGetCurrentThread();
            --v47->KernelApcDisable;
            v48 = EtwpAcquireLoggerContextByLoggerId(v9, v46, 1);
            v22 = v48;
            if ( v48 )
            {
              v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v48);
              if ( v13 < 0 )
                goto LABEL_79;
              updated = EtwpUpdateProcessorTraceConfiguration(v22, &v90);
              goto LABEL_78;
            }
            goto LABEL_153;
          }
          return 3221225476LL;
        default:
          v8 = (unsigned int)(v6 - 24);
          if ( v6 == 24 )
            goto LABEL_119;
          if ( v6 != 25 )
            return (unsigned int)-1073741822;
          return (unsigned int)EtwpSetCoverageSamplerInformation(Address, v4, AccessMode);
      }
      v31 = 1350005829;
      goto LABEL_118;
    }
    return (unsigned int)EtwpSetSoftRestartInformation(Address, v4);
  }
  if ( v6 == 16 )
  {
    if ( v4 != 32 )
      return 3221225476LL;
    v41 = *((_QWORD *)Address + 1);
    v96 = v41;
    v80 = *((_DWORD *)Address + 5);
    v79 = *((_DWORD *)Address + 6);
    if ( !Address[16] )
      return 3221225659LL;
    v42 = (unsigned __int16)v41;
    if ( (unsigned __int16)v41 == 0xFFFF )
      v42 = *(unsigned __int8 *)(CurrentSiloState + 4208);
    v43 = KeGetCurrentThread();
    --v43->KernelApcDisable;
    v44 = EtwpAcquireLoggerContextByLoggerId(v9, v42, 1);
    v22 = v44;
    if ( !v44 )
      goto LABEL_153;
    v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v44);
    if ( v13 >= 0 )
    {
      updated = EtwpEnableStackCaching(v22, v80, v79);
      goto LABEL_78;
    }
    goto LABEL_79;
  }
  if ( v6 > 7 )
  {
    if ( v6 != 10 )
    {
      if ( v6 == 11 )
      {
        v75 = 0;
        if ( v4 < 0x10 )
          return 3221225476LL;
        v33 = v4 - 16;
        if ( (v33 & 3) != 0 )
          return 3221225485LL;
        v34 = v33 >> 2;
        if ( v34 > 1 )
          return 3221225485LL;
        v35 = *((_QWORD *)Address + 1);
        v95 = v35;
        if ( v34 )
        {
          if ( *((_DWORD *)Address + 4) != 1316 )
            return 3221225485LL;
          v75 = 1;
        }
        if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
        {
          if ( !PsIsCurrentThreadInServerSilo(v37, v36) )
          {
            v38 = (unsigned __int16)v35;
            if ( (unsigned __int16)v35 == 0xFFFF )
              v38 = *(unsigned __int8 *)(v9 + 4208);
            v39 = KeGetCurrentThread();
            --v39->KernelApcDisable;
            v40 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v38, 1);
            v22 = v40;
            if ( v40 )
            {
              v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v40);
              if ( v13 >= 0 )
              {
                if ( v75 )
                  _InterlockedOr((volatile signed __int32 *)v22 + 208, 0x400u);
                else
                  _InterlockedAnd((volatile signed __int32 *)v22 + 208, 0xFFFFFBFF);
              }
              goto LABEL_79;
            }
            goto LABEL_153;
          }
          return 3221225506LL;
        }
      }
      else
      {
        if ( v6 != 12 )
        {
          if ( v6 > 13 )
            goto LABEL_119;
          return (unsigned int)-1073741822;
        }
        if ( v4 < 0x10 )
          return 3221225476LL;
        result = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
        if ( (int)result < 0 )
          return result;
        if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
        {
          if ( PsIsCurrentThreadInServerSilo(v27, v26) )
            return 3221225506LL;
          v28 = (v4 - 16) >> 2;
          if ( v28 > EtwpMaxProfilingSources )
            return 3221225485LL;
          v29 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v28, 0x58777445u);
          v30 = v29;
          P = v29;
          if ( v29 )
          {
            memmove(v29, Address + 16, 4LL * v28);
            v13 = EtwpSetPmcProfileSource(v30, v28);
            v31 = 0;
            v32 = v30;
LABEL_118:
            ExFreePoolWithTag(v32, v31);
            return (unsigned int)v13;
          }
          return 3221225495LL;
        }
      }
      return 3221225569LL;
    }
LABEL_144:
    if ( v4 >= 0x10 )
    {
      v69 = v4 - 16;
      if ( (v69 & 3) == 0 )
      {
        v70 = v69 >> 2;
        if ( (unsigned __int16)v70 <= 4u )
        {
          if ( !PsIsCurrentThreadInServerSilo(v8, 16LL) )
          {
            v98 = *((_QWORD *)Address + 1);
            memmove(v105, Address + 16, 4LL * (unsigned __int16)v70);
            v71 = (unsigned __int16)v98;
            if ( (unsigned __int16)v98 == 0xFFFF )
              v71 = *(unsigned __int8 *)(v9 + 4208);
            v72 = KeGetCurrentThread();
            --v72->KernelApcDisable;
            v73 = EtwpAcquireLoggerContextByLoggerId(v9, v71, 1);
            v22 = v73;
            if ( v73 )
            {
              if ( (v73[3] & 0x2000000) == 0 )
              {
                EtwpReleaseLoggerContext(v73, 1);
                v13 = -1073741811;
                goto LABEL_156;
              }
              v13 = EtwpCheckSystemTraceAccess((__int64)v73, 0x80u);
              if ( v13 >= 0 )
              {
                v74 = EtwpPoolTagFilter;
                if ( v76 != 10 )
                  v74 = (unsigned __int16 *)&EtwpObjectTypeFilter;
                EtwpUpdateTagFilter(v105, v70, (__int64)&v74[10 * *((unsigned __int8 *)v22 + 834)]);
              }
              goto LABEL_79;
            }
            goto LABEL_153;
          }
          return 3221225506LL;
        }
      }
      return 3221225485LL;
    }
    return 3221225476LL;
  }
  switch ( v6 )
  {
    case 7:
      if ( v4 == 16 )
      {
        result = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
        v13 = result;
        if ( (int)result < 0 )
          return result;
        if ( PsIsCurrentThreadInServerSilo(v25, v24) )
          return 3221225506LL;
        v87 = *((_DWORD *)Address + 1);
        v88 = *((_DWORD *)Address + 2);
        v89 = *((_DWORD *)Address + 3);
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        EtwpExecutiveResourceReleaseSampleRate = v87;
        EtwpExecutiveResourceContentionSampleRate = v88;
        EtwpExecutiveResourceTimeout = v89;
        goto LABEL_28;
      }
      return 3221225476LL;
    case 1:
      if ( v4 != 48 )
        return 3221225476LL;
      v94 = *((_QWORD *)Address + 1);
      v99[0] = *((_OWORD *)Address + 1);
      v99[1] = *((_OWORD *)Address + 2);
      v19 = (unsigned __int16)v94;
      if ( (unsigned __int16)v94 == 0xFFFF )
        v19 = *(unsigned __int8 *)(CurrentSiloState + 4208);
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v21 = EtwpAcquireLoggerContextByLoggerId(v9, v19, 1);
      v22 = v21;
      if ( !v21 )
        goto LABEL_153;
      if ( (v21[3] & 0x2000000) == 0 )
      {
        EtwpReleaseLoggerContext(v21, 1);
        KeLeaveCriticalRegion();
        return 3221225485LL;
      }
      v13 = EtwpCheckSystemTraceAccess((__int64)v21, 0x80u);
      if ( v13 >= 0 )
      {
        updated = EtwpUpdateGroupMasks((int *)v22, (__int64)v99);
        goto LABEL_78;
      }
LABEL_79:
      EtwpReleaseLoggerContext(v22, 1);
LABEL_156:
      KeLeaveCriticalRegion();
      return (unsigned int)v13;
    case 3:
      if ( v4 == 8 )
      {
        if ( PsIsCurrentThreadInServerSilo((unsigned int)(v6 - 3), 16LL) )
          return 3221225506LL;
        v18 = *((_DWORD *)Address + 1);
        v86 = v18;
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        v13 = NtSetIntervalProfile(v18, ProfileTime);
        if ( v13 >= 0 )
          EtwpProfileInterval = v18;
LABEL_28:
        KeReleaseMutex(&EtwpGroupMaskMutex, 0);
        return (unsigned int)v13;
      }
      return 3221225476LL;
  }
  v8 = (unsigned int)(v6 - 5);
  if ( v6 == 5 )
  {
    if ( ((v4 - 16) & 0xFFFFFFFB) == 0 )
    {
      result = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
      v13 = result;
      if ( (int)result < 0 )
        return result;
      if ( PsIsCurrentThreadInServerSilo(v12, v11) )
        return 3221225506LL;
      v14 = *((_DWORD *)Address + 1);
      v83 = v14;
      if ( !v14 )
        return 3221225485LL;
      v15 = *((_DWORD *)Address + 2);
      v84 = v15;
      if ( v15 < 0x3E8 )
        return 3221225485LL;
      v16 = *((_DWORD *)Address + 3);
      v85 = v16;
      if ( !v16 )
        return 3221225485LL;
      v17 = EtwpSpinLockHoldThreshold;
      v78 = EtwpSpinLockHoldThreshold;
      if ( v4 == 20 )
      {
        v17 = *((_DWORD *)Address + 4);
        v78 = v17;
        if ( (unsigned int)(v17 - 1) <= 0xF423E )
          return 3221225485LL;
      }
      KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
      EtwpSpinLockHoldThreshold = v17;
      EtwpSpinLockSpinThreshold = v14;
      EtwpSpinLockAcquireSampleRate = v15;
      EtwpSpinLockContentionSampleRate = v16;
      goto LABEL_28;
    }
    return 3221225476LL;
  }
  if ( v6 != 6 )
    return (unsigned int)-1073741822;
LABEL_119:
  if ( v4 < 0x10 )
    return 3221225476LL;
  v60 = v4 - 16;
  if ( (v60 & 3) == 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo(v8, 16LL) || (unsigned int)(v6 - 14) > 1 )
    {
      v61 = v60 >> 2;
      v62 = Address + 16;
      v97 = *((_QWORD *)Address + 1);
      v63 = (unsigned __int16)v97;
      if ( (unsigned __int16)v97 == 0xFFFF )
        v63 = *(unsigned __int8 *)(v9 + 4208);
      v64 = KeGetCurrentThread();
      --v64->KernelApcDisable;
      v65 = EtwpAcquireLoggerContextByLoggerId(v9, v63, 1);
      v22 = v65;
      if ( v65 )
      {
        v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v65);
        if ( v13 < 0 )
          goto LABEL_79;
        switch ( v76 )
        {
          case 6:
            updated = EtwpUpdateStackTracing((_RTL_BITMAP *)v22, (__int64)v62, v61);
            break;
          case 15:
            updated = EtwpUpdatePmcCounters(v22, v62, v61);
            break;
          case 14:
            updated = EtwpUpdatePmcEvents(v22, v62, v61);
            break;
          case 20:
            EtwpUpdateLastBranchTracingEvents(v22, v62, v61);
            goto LABEL_79;
          default:
            updated = EtwpUpdateProcessorTraceEvents(v22, v62, v61);
            break;
        }
        goto LABEL_78;
      }
LABEL_153:
      v13 = -1073741162;
      goto LABEL_156;
    }
    return 3221225506LL;
  }
  return 3221225485LL;
}
