/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x140933CC0
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403CFC90 (wcsnlen.c)
 *     wcsncpy_s @ 0x1403D3FE0 (wcsncpy_s.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpGetCurrentSiloState @ 0x1405A4B64 (EtwpGetCurrentSiloState.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405F2620 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     NtSetIntervalProfile @ 0x1407203D0 (NtSetIntervalProfile.c)
 *     EtwpUpdateGroupMasks @ 0x14077FE0C (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateTagFilter @ 0x140780E90 (EtwpUpdateTagFilter.c)
 *     EtwpCheckSystemTraceAccess @ 0x140780EB8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateStackTracing @ 0x1409310DC (EtwpUpdateStackTracing.c)
 *     EtwpSetPmcProfileSource @ 0x140932CBC (EtwpSetPmcProfileSource.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140934BE0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x140935B08 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1409365A0 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdatePmcCounters @ 0x14093666C (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1409367A0 (EtwpUpdatePmcEvents.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14093684C (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x14093CCB4 (EtwpCheckCurrentUserGuidAccess.c)
 *     EtwpEnableStackCaching @ 0x14093D484 (EtwpEnableStackCaching.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140943138 (EtwpSetCoverageSamplerInformation.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x14094392C (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1409439F0 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x140943B38 (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x140943BE0 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetSoftRestartInformation @ 0x140944B54 (EtwpSetSoftRestartInformation.c)
 *     KiGetCpuVendor @ 0x1409975A4 (KiGetCpuVendor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(char *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  unsigned int v4; // esi
  int v6; // ebx
  __int64 CurrentSiloState; // rax
  __int64 v8; // r14
  __int64 result; // rax
  int v10; // ebx
  int v11; // r15d
  unsigned int v12; // r12d
  int v13; // r13d
  int v14; // r14d
  ULONG v15; // edi
  unsigned int v16; // edx
  struct _KTHREAD *v17; // rax
  unsigned int *v18; // rax
  __int64 v19; // rdi
  int updated; // eax
  unsigned int v21; // esi
  wchar_t *v22; // rax
  wchar_t *v23; // r14
  ULONG v24; // edx
  wchar_t *v25; // rcx
  unsigned int v26; // esi
  unsigned int v27; // esi
  __int64 v28; // rbx
  unsigned int v29; // edx
  struct _KTHREAD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // edx
  struct _KTHREAD *v34; // rax
  __int64 v35; // rax
  unsigned int v37; // edx
  struct _KTHREAD *v38; // rax
  __int64 v39; // rax
  unsigned int v40; // esi
  wchar_t *v41; // rax
  wchar_t *v42; // rdi
  unsigned int v43; // r15d
  unsigned int v44; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v46; // rsi
  char v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rcx
  int CpuVendor; // eax
  unsigned int v51; // esi
  unsigned int v52; // esi
  char *v53; // r15
  unsigned int v54; // edx
  struct _KTHREAD *v55; // rax
  __int64 v56; // rax
  unsigned int v57; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v59; // rax
  unsigned int v60; // esi
  unsigned int v61; // esi
  unsigned int v62; // edx
  struct _KTHREAD *v63; // rax
  unsigned int *v64; // rax
  unsigned __int16 *v65; // rax
  char v66; // [rsp+30h] [rbp-1E8h]
  int v67; // [rsp+34h] [rbp-1E4h]
  PVOID P; // [rsp+38h] [rbp-1E0h] BYREF
  int v69; // [rsp+40h] [rbp-1D8h]
  unsigned int v70; // [rsp+44h] [rbp-1D4h]
  unsigned int v71; // [rsp+48h] [rbp-1D0h]
  __int128 v72; // [rsp+50h] [rbp-1C8h] BYREF
  wchar_t *Src; // [rsp+60h] [rbp-1B8h]
  int v74; // [rsp+68h] [rbp-1B0h]
  unsigned int v75; // [rsp+6Ch] [rbp-1ACh]
  int v76; // [rsp+70h] [rbp-1A8h]
  ULONG v77; // [rsp+74h] [rbp-1A4h]
  int v78; // [rsp+78h] [rbp-1A0h]
  int v79; // [rsp+7Ch] [rbp-19Ch]
  int v80; // [rsp+80h] [rbp-198h]
  __int128 v81; // [rsp+88h] [rbp-190h] BYREF
  __int64 v82; // [rsp+98h] [rbp-180h]
  __int128 v83; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-168h]
  __int64 v85; // [rsp+B8h] [rbp-160h]
  __int64 v86; // [rsp+C0h] [rbp-158h]
  __int64 v87; // [rsp+C8h] [rbp-150h]
  __int64 v88; // [rsp+D0h] [rbp-148h]
  __int64 v89; // [rsp+D8h] [rbp-140h]
  _OWORD v90[2]; // [rsp+E0h] [rbp-138h] BYREF
  _DWORD v91[44]; // [rsp+100h] [rbp-118h] BYREF
  __int64 v92; // [rsp+1B0h] [rbp-68h] BYREF
  int v93; // [rsp+1B8h] [rbp-60h]
  __int64 v94; // [rsp+1C0h] [rbp-58h] BYREF
  int v95; // [rsp+1C8h] [rbp-50h]
  _DWORD v96[4]; // [rsp+1D0h] [rbp-48h] BYREF

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v6 = *(_DWORD *)Address;
  v67 = *(_DWORD *)Address;
  CurrentSiloState = EtwpGetCurrentSiloState();
  v8 = CurrentSiloState;
  if ( v6 > 16 )
  {
    if ( v6 == 17 )
      goto LABEL_144;
    if ( v6 != 18 )
    {
      switch ( v6 )
      {
        case 19:
          if ( v4 < 0x18 )
            return 3221225476LL;
          v83 = *(_OWORD *)Address;
          v84 = *((_QWORD *)Address + 2);
          v57 = WORD4(v83);
          if ( WORD4(v83) == 0xFFFF )
            v57 = *(unsigned __int8 *)(CurrentSiloState + 4208);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v59 = EtwpAcquireLoggerContextByLoggerId(v8, v57, 1);
          v19 = v59;
          if ( !v59 )
            goto LABEL_153;
          v10 = EtwpCheckLoggerControlAccess(0x80u, v59);
          if ( v10 < 0 )
            goto LABEL_79;
          updated = EtwpUpdateLastBranchTracingConfiguration(v19, &v83);
LABEL_78:
          v10 = updated;
          goto LABEL_79;
        case 20:
          goto LABEL_119;
        case 21:
          if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
            return 3221225506LL;
          if ( v4 < 0x24 || Address[4] != 2 || v4 > 0x220 )
            return 3221225476LL;
          v43 = v4 - 34 + 184;
          v44 = (v4 - 34) >> 1;
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v43, 0x50777445u);
          v46 = PoolWithTag;
          P = PoolWithTag;
          if ( !PoolWithTag )
            return 3221225495LL;
          wcsncpy_s(PoolWithTag + 92, v44, (const wchar_t *)Address + 17, v44);
          v94 = *((_QWORD *)Address + 2);
          v95 = *((_DWORD *)Address + 6);
          *((_DWORD *)v46 + 2) = *((_DWORD *)Address + 7);
          v47 = Address[32];
          CpuVendor = KiGetCpuVendor(v49, v48);
          if ( CpuVendor == 2 )
          {
            *(_BYTE *)v46 = Address[8];
            *((_BYTE *)v46 + 1) = Address[9];
            *((_BYTE *)v46 + 2) = Address[10];
            *((_BYTE *)v46 + 3) = Address[11];
            *((_BYTE *)v46 + 4) = Address[12];
            *((_BYTE *)v46 + 5) = Address[13];
          }
          else if ( CpuVendor == 1 )
          {
            *(_BYTE *)v46 = Address[8];
            *((_BYTE *)v46 + 1) = Address[9];
          }
          EtwpGetMicroarchitecturalPmcAffinity(&v94, v46 + 8);
          v10 = ((__int64 (__fastcall *)(__int64, _QWORD, wchar_t *))off_140C00A70[0])(20LL, v43, v46);
          if ( v47 )
            v10 = EtwpAddMicroarchitecturalPmcToRegistry(v46, &v94);
          v25 = v46;
          break;
        case 22:
          v72 = 0LL;
          Src = 0LL;
          memset(&v91[1], 0, 0xACuLL);
          LODWORD(P) = 0;
          if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
            return 3221225506LL;
          if ( v4 != 20 )
            return 3221225476LL;
          v92 = *((_QWORD *)Address + 1);
          v93 = *((_DWORD *)Address + 4);
          LODWORD(v72) = *((_DWORD *)Address + 1);
          v10 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, PVOID *))off_140C00A68[0])(1LL, 24LL, &v72, &P);
          if ( v10 < 0 )
            return (unsigned int)v10;
          v91[0] = v72;
          EtwpGetMicroarchitecturalPmcAffinity(&v92, &v91[2]);
          v40 = wcsnlen(Src, 0xFFuLL);
          v41 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v40 + 1), 0x50777445u);
          v42 = v41;
          if ( !v41 )
            return 3221225495LL;
          wcsncpy_s(v41, v40 + 1, Src, v40);
          v10 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))off_140C00A70[0])(21LL, 176LL, v91);
          EtwpRemoveMicroarchitecturalPmcFromRegistry(v42, v40);
          v25 = v42;
          break;
        case 23:
          if ( v4 >= 0x18 )
          {
            v81 = *(_OWORD *)Address;
            v82 = *((_QWORD *)Address + 2);
            v37 = WORD4(v81);
            if ( WORD4(v81) == 0xFFFF )
              v37 = *(unsigned __int8 *)(CurrentSiloState + 4208);
            v38 = KeGetCurrentThread();
            --v38->KernelApcDisable;
            v39 = EtwpAcquireLoggerContextByLoggerId(v8, v37, 1);
            v19 = v39;
            if ( v39 )
            {
              v10 = EtwpCheckLoggerControlAccess(0x80u, v39);
              if ( v10 < 0 )
                goto LABEL_79;
              updated = EtwpUpdateProcessorTraceConfiguration(v19, &v81);
              goto LABEL_78;
            }
            goto LABEL_153;
          }
          return 3221225476LL;
        case 24:
          goto LABEL_119;
        case 25:
          return (unsigned int)EtwpSetCoverageSamplerInformation(Address, v4, AccessMode);
        default:
          return (unsigned int)-1073741822;
      }
      v24 = 1350005829;
      goto LABEL_118;
    }
    return (unsigned int)EtwpSetSoftRestartInformation(Address, v4);
  }
  if ( v6 == 16 )
  {
    if ( v4 != 32 )
      return 3221225476LL;
    v32 = *((_QWORD *)Address + 1);
    v87 = v32;
    v71 = *((_DWORD *)Address + 5);
    v70 = *((_DWORD *)Address + 6);
    if ( !Address[16] )
      return 3221225659LL;
    v33 = (unsigned __int16)v32;
    if ( (unsigned __int16)v32 == 0xFFFF )
      v33 = *(unsigned __int8 *)(CurrentSiloState + 4208);
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
    v35 = EtwpAcquireLoggerContextByLoggerId(v8, v33, 1);
    v19 = v35;
    if ( !v35 )
      goto LABEL_153;
    v10 = EtwpCheckLoggerControlAccess(0x80u, v35);
    if ( v10 >= 0 )
    {
      updated = EtwpEnableStackCaching(v19, v71, v70);
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
        v66 = 0;
        if ( v4 < 0x10 )
          return 3221225476LL;
        v26 = v4 - 16;
        if ( (v26 & 3) != 0 )
          return 3221225485LL;
        v27 = v26 >> 2;
        if ( v27 > 1 )
          return 3221225485LL;
        v28 = *((_QWORD *)Address + 1);
        v86 = v28;
        if ( v27 )
        {
          if ( *((_DWORD *)Address + 4) != 1316 )
            return 3221225485LL;
          v66 = 1;
        }
        if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
        {
          if ( !PsIsCurrentThreadInServerSilo() )
          {
            v29 = (unsigned __int16)v28;
            if ( (unsigned __int16)v28 == 0xFFFF )
              v29 = *(unsigned __int8 *)(v8 + 4208);
            v30 = KeGetCurrentThread();
            --v30->KernelApcDisable;
            v31 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v29, 1);
            v19 = v31;
            if ( v31 )
            {
              v10 = EtwpCheckLoggerControlAccess(0x80u, v31);
              if ( v10 >= 0 )
              {
                if ( v66 )
                  _InterlockedOr((volatile signed __int32 *)(v19 + 832), 0x400u);
                else
                  _InterlockedAnd((volatile signed __int32 *)(v19 + 832), 0xFFFFFBFF);
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
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v21 = (v4 - 16) >> 2;
          if ( v21 > EtwpMaxProfilingSources )
            return 3221225485LL;
          v22 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v21, 0x58777445u);
          v23 = v22;
          P = v22;
          if ( v22 )
          {
            memmove(v22, Address + 16, 4LL * v21);
            v10 = EtwpSetPmcProfileSource(v23, v21);
            v24 = 0;
            v25 = v23;
LABEL_118:
            ExFreePoolWithTag(v25, v24);
            return (unsigned int)v10;
          }
          return 3221225495LL;
        }
      }
      return 3221225569LL;
    }
LABEL_144:
    if ( v4 >= 0x10 )
    {
      v60 = v4 - 16;
      if ( (v60 & 3) == 0 )
      {
        v61 = v60 >> 2;
        if ( (unsigned __int16)v61 <= 4u )
        {
          if ( !PsIsCurrentThreadInServerSilo() )
          {
            v89 = *((_QWORD *)Address + 1);
            memmove(v96, Address + 16, 4LL * (unsigned __int16)v61);
            v62 = (unsigned __int16)v89;
            if ( (unsigned __int16)v89 == 0xFFFF )
              v62 = *(unsigned __int8 *)(v8 + 4208);
            v63 = KeGetCurrentThread();
            --v63->KernelApcDisable;
            v64 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v8, v62, 1);
            v19 = (__int64)v64;
            if ( v64 )
            {
              if ( (v64[3] & 0x2000000) == 0 )
              {
                EtwpReleaseLoggerContext(v64, 1);
                v10 = -1073741811;
                goto LABEL_156;
              }
              v10 = EtwpCheckSystemTraceAccess((__int64)v64, 0x80u);
              if ( v10 >= 0 )
              {
                v65 = EtwpPoolTagFilter;
                if ( v67 != 10 )
                  v65 = (unsigned __int16 *)&EtwpObjectTypeFilter;
                EtwpUpdateTagFilter(v96, v61, (__int64)&v65[10 * *(unsigned __int8 *)(v19 + 834)]);
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
        v10 = result;
        if ( (int)result < 0 )
          return result;
        if ( PsIsCurrentThreadInServerSilo() )
          return 3221225506LL;
        v78 = *((_DWORD *)Address + 1);
        v79 = *((_DWORD *)Address + 2);
        v80 = *((_DWORD *)Address + 3);
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        EtwpExecutiveResourceReleaseSampleRate = v78;
        EtwpExecutiveResourceContentionSampleRate = v79;
        EtwpExecutiveResourceTimeout = v80;
        goto LABEL_28;
      }
      return 3221225476LL;
    case 1:
      if ( v4 != 48 )
        return 3221225476LL;
      v85 = *((_QWORD *)Address + 1);
      v90[0] = *((_OWORD *)Address + 1);
      v90[1] = *((_OWORD *)Address + 2);
      v16 = (unsigned __int16)v85;
      if ( (unsigned __int16)v85 == 0xFFFF )
        v16 = *(unsigned __int8 *)(CurrentSiloState + 4208);
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      v18 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v8, v16, 1);
      v19 = (__int64)v18;
      if ( !v18 )
        goto LABEL_153;
      if ( (v18[3] & 0x2000000) == 0 )
      {
        EtwpReleaseLoggerContext(v18, 1);
        KeLeaveCriticalRegion();
        return 3221225485LL;
      }
      v10 = EtwpCheckSystemTraceAccess((__int64)v18, 0x80u);
      if ( v10 >= 0 )
      {
        updated = EtwpUpdateGroupMasks((int *)v19, (__int64)v90);
        goto LABEL_78;
      }
LABEL_79:
      EtwpReleaseLoggerContext((unsigned int *)v19, 1);
LABEL_156:
      KeLeaveCriticalRegion();
      return (unsigned int)v10;
    case 3:
      if ( v4 == 8 )
      {
        if ( PsIsCurrentThreadInServerSilo() )
          return 3221225506LL;
        v15 = *((_DWORD *)Address + 1);
        v77 = v15;
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        v10 = NtSetIntervalProfile(v15, ProfileTime);
        if ( v10 >= 0 )
          EtwpProfileInterval = v15;
LABEL_28:
        KeReleaseMutex(&EtwpGroupMaskMutex, 0);
        return (unsigned int)v10;
      }
      return 3221225476LL;
    case 5:
      if ( ((v4 - 16) & 0xFFFFFFFB) == 0 )
      {
        result = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
        v10 = result;
        if ( (int)result < 0 )
          return result;
        if ( PsIsCurrentThreadInServerSilo() )
          return 3221225506LL;
        v11 = *((_DWORD *)Address + 1);
        v74 = v11;
        if ( !v11 )
          return 3221225485LL;
        v12 = *((_DWORD *)Address + 2);
        v75 = v12;
        if ( v12 < 0x3E8 )
          return 3221225485LL;
        v13 = *((_DWORD *)Address + 3);
        v76 = v13;
        if ( !v13 )
          return 3221225485LL;
        v14 = EtwpSpinLockHoldThreshold;
        v69 = EtwpSpinLockHoldThreshold;
        if ( v4 == 20 )
        {
          v14 = *((_DWORD *)Address + 4);
          v69 = v14;
          if ( (unsigned int)(v14 - 1) <= 0xF423E )
            return 3221225485LL;
        }
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        EtwpSpinLockHoldThreshold = v14;
        EtwpSpinLockSpinThreshold = v11;
        EtwpSpinLockAcquireSampleRate = v12;
        EtwpSpinLockContentionSampleRate = v13;
        goto LABEL_28;
      }
      return 3221225476LL;
  }
  if ( v6 != 6 )
    return (unsigned int)-1073741822;
LABEL_119:
  if ( v4 < 0x10 )
    return 3221225476LL;
  v51 = v4 - 16;
  if ( (v51 & 3) == 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo() || (unsigned int)(v6 - 14) > 1 )
    {
      v52 = v51 >> 2;
      v53 = Address + 16;
      v88 = *((_QWORD *)Address + 1);
      v54 = (unsigned __int16)v88;
      if ( (unsigned __int16)v88 == 0xFFFF )
        v54 = *(unsigned __int8 *)(v8 + 4208);
      v55 = KeGetCurrentThread();
      --v55->KernelApcDisable;
      v56 = EtwpAcquireLoggerContextByLoggerId(v8, v54, 1);
      v19 = v56;
      if ( v56 )
      {
        v10 = EtwpCheckLoggerControlAccess(0x80u, v56);
        if ( v10 < 0 )
          goto LABEL_79;
        switch ( v67 )
        {
          case 6:
            updated = EtwpUpdateStackTracing((_RTL_BITMAP *)v19, (__int64)v53, v52);
            break;
          case 15:
            updated = EtwpUpdatePmcCounters(v19, v53, v52);
            break;
          case 14:
            updated = EtwpUpdatePmcEvents(v19, v53, v52);
            break;
          case 20:
            EtwpUpdateLastBranchTracingEvents(v19, v53, v52);
            goto LABEL_79;
          default:
            updated = EtwpUpdateProcessorTraceEvents(v19, v53, v52);
            break;
        }
        goto LABEL_78;
      }
LABEL_153:
      v10 = -1073741162;
      goto LABEL_156;
    }
    return 3221225506LL;
  }
  return 3221225485LL;
}
