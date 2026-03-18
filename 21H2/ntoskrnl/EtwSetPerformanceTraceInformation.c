/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x1409DEFB8
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403E3480 (wcsnlen.c)
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     EtwpCheckGuidAccess @ 0x140790CA8 (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerControlAccess @ 0x14079435C (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     NtSetIntervalProfile @ 0x1407F88C0 (NtSetIntervalProfile.c)
 *     EtwpUpdateGroupMasks @ 0x140814244 (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateTagFilter @ 0x14081C568 (EtwpUpdateTagFilter.c)
 *     EtwpCheckSystemTraceAccess @ 0x140864164 (EtwpCheckSystemTraceAccess.c)
 *     EtwpEnableStackCaching @ 0x140883718 (EtwpEnableStackCaching.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409DFF60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E101C (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1409E1B94 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdatePmcCounters @ 0x1409E1C60 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1409E1DB8 (EtwpUpdatePmcEvents.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1409E1E64 (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpSetPmcProfileSource @ 0x1409E39EC (EtwpSetPmcProfileSource.c)
 *     EtwpUpdateStackTracing @ 0x1409E5988 (EtwpUpdateStackTracing.c)
 *     EtwpSetSoftRestartInformation @ 0x1409ED7D4 (EtwpSetSoftRestartInformation.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1409EE454 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1409EE518 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1409EE650 (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x1409EE6F8 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3EC0 (EtwpSetCoverageSamplerInformation.c)
 *     KiGetCpuVendor @ 0x140A56B08 (KiGetCpuVendor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(
        unsigned __int8 *Address,
        SIZE_T Length,
        KPROCESSOR_MODE PreviousMode)
{
  unsigned int v4; // r14d
  unsigned __int16 v6; // dx
  KPROCESSOR_MODE v7; // r8
  __int64 v8; // r15
  __int64 result; // rax
  int v10; // ebx
  int v11; // r15d
  unsigned int v12; // r12d
  int v13; // r13d
  int v14; // esi
  unsigned int v15; // edi
  unsigned int v16; // edx
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int *v20; // rcx
  int updated; // eax
  bool v22; // zf
  unsigned int v23; // r14d
  wchar_t *v24; // rax
  wchar_t *v25; // rsi
  ULONG v26; // edx
  wchar_t *v27; // rcx
  unsigned int v28; // r14d
  unsigned int v29; // r14d
  void *v30; // rbx
  unsigned int v31; // edx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r14d
  unsigned int v35; // r14d
  unsigned int v36; // edx
  struct _KTHREAD *v37; // rax
  __int64 v38; // rax
  _WORD *v39; // rax
  void *v40; // rcx
  unsigned int v41; // edx
  char v42; // r14
  struct _KTHREAD *v43; // rax
  __int64 v44; // rax
  unsigned int v46; // edx
  struct _KTHREAD *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // esi
  wchar_t *v50; // rax
  wchar_t *v51; // rdi
  unsigned int v52; // r13d
  unsigned int v53; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v55; // r14
  int CpuVendor; // eax
  unsigned int v57; // r14d
  unsigned int v58; // r14d
  char *v59; // r12
  unsigned int v60; // edx
  struct _KTHREAD *v61; // rax
  __int64 v62; // rax
  unsigned int v63; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v65; // rax
  char v66; // [rsp+30h] [rbp-1B8h]
  unsigned __int8 v67; // [rsp+31h] [rbp-1B7h]
  PVOID P; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned __int8 v70; // [rsp+41h] [rbp-1A7h]
  int v71; // [rsp+44h] [rbp-1A4h]
  int v72; // [rsp+48h] [rbp-1A0h]
  unsigned int v73; // [rsp+4Ch] [rbp-19Ch]
  unsigned int v74; // [rsp+50h] [rbp-198h]
  int v75; // [rsp+54h] [rbp-194h]
  int v76; // [rsp+58h] [rbp-190h]
  int v77; // [rsp+5Ch] [rbp-18Ch]
  int v78; // [rsp+60h] [rbp-188h]
  unsigned int v79; // [rsp+64h] [rbp-184h]
  int v80; // [rsp+68h] [rbp-180h]
  unsigned int v81; // [rsp+6Ch] [rbp-17Ch]
  __int128 v82; // [rsp+70h] [rbp-178h] BYREF
  wchar_t *Src[2]; // [rsp+80h] [rbp-168h]
  _DWORD v84[68]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v85; // [rsp+1A0h] [rbp-48h] BYREF
  int v86; // [rsp+1A8h] [rbp-40h]

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v71 = *(_DWORD *)Address;
  v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( v71 > 17 )
  {
    if ( v71 != 18 )
    {
      switch ( v71 )
      {
        case 19:
          if ( v4 < 0x18 )
            return 3221225476LL;
          v82 = *(_OWORD *)Address;
          Src[0] = *((wchar_t **)Address + 2);
          v63 = WORD4(v82);
          if ( WORD4(v82) == 0xFFFF )
            v63 = *(unsigned __int8 *)(v8 + 4232);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v65 = EtwpAcquireLoggerContextByLoggerId(v8, v63, 1);
          v19 = v65;
          if ( v65 )
          {
            v10 = EtwpCheckLoggerControlAccess(0x80u, v65);
            if ( v10 < 0 )
              goto LABEL_153;
            updated = EtwpUpdateLastBranchTracingConfiguration(v19, &v82);
            goto LABEL_152;
          }
          goto LABEL_37;
        case 20:
          goto LABEL_134;
        case 21:
          if ( PreviousMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
            return 3221225506LL;
          if ( v4 < 0x24 || Address[4] != 2 || v4 > 0x220 )
            return 3221225476LL;
          v52 = v4 - 34 + 280;
          v53 = (v4 - 34) >> 1;
          Pool2 = (wchar_t *)ExAllocatePool2(256LL, v52, 1350005829LL);
          v55 = Pool2;
          P = Pool2;
          if ( !Pool2 )
            return 3221225495LL;
          wcsncpy_s(Pool2 + 140, v53, (const wchar_t *)Address + 17, v53);
          v85 = *((_QWORD *)Address + 2);
          v86 = *((_DWORD *)Address + 6);
          *((_DWORD *)v55 + 2) = *((_DWORD *)Address + 7);
          v67 = Address[32];
          v70 = v67;
          CpuVendor = KiGetCpuVendor();
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
            *v55 = Address[8];
            *((_BYTE *)v55 + 2) = Address[9];
          }
          *((_DWORD *)v55 + 4) = 2097153;
          *((_DWORD *)v55 + 5) = 0;
          memset(v55 + 12, 0, 0x100uLL);
          EtwpGetMicroarchitecturalPmcAffinity(&v85, v55 + 8);
          v10 = ((__int64 (__fastcall *)(__int64, _QWORD, wchar_t *))off_140C020E0[0])(20LL, v52, v55);
          if ( v67 )
            v10 = EtwpAddMicroarchitecturalPmcToRegistry(v55, &v85);
          v27 = v55;
          break;
        case 22:
          v82 = 0LL;
          Src[0] = 0LL;
          memset(&v84[1], 0, 0x108uLL);
          LODWORD(P) = 0;
          if ( PreviousMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
            return 3221225506LL;
          if ( v4 != 20 )
            return 3221225476LL;
          v85 = *((_QWORD *)Address + 1);
          v86 = *((_DWORD *)Address + 4);
          LODWORD(v82) = *((_DWORD *)Address + 1);
          v10 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, PVOID *))off_140C020D8[0])(1LL, 24LL, &v82, &P);
          if ( v10 < 0 )
            return (unsigned int)v10;
          v84[0] = v82;
          EtwpGetMicroarchitecturalPmcAffinity(&v85, &v84[2]);
          v49 = wcsnlen(Src[0], 0xFFuLL);
          v50 = (wchar_t *)ExAllocatePool2(256LL, 2LL * (v49 + 1), 1350005829LL);
          v51 = v50;
          if ( !v50 )
            return 3221225495LL;
          wcsncpy_s(v50, v49 + 1, Src[0], v49);
          v10 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))off_140C020E0[0])(21LL, 272LL, v84);
          EtwpRemoveMicroarchitecturalPmcFromRegistry(v51, v49);
          v27 = v51;
          break;
        case 23:
          if ( v4 < 0x18 )
            return 3221225476LL;
          v82 = *(_OWORD *)Address;
          Src[0] = *((wchar_t **)Address + 2);
          v46 = WORD4(v82);
          if ( WORD4(v82) == 0xFFFF )
            v46 = *(unsigned __int8 *)(v8 + 4232);
          v47 = KeGetCurrentThread();
          --v47->KernelApcDisable;
          v48 = EtwpAcquireLoggerContextByLoggerId(v8, v46, 1);
          v19 = v48;
          if ( !v48 )
            goto LABEL_37;
          v10 = EtwpCheckLoggerControlAccess(0x80u, v48);
          if ( v10 < 0 )
            goto LABEL_153;
          updated = EtwpUpdateProcessorTraceConfiguration(v19, &v82);
          goto LABEL_152;
        case 24:
          goto LABEL_134;
        case 25:
          return (unsigned int)EtwpSetCoverageSamplerInformation(Address, v4, v7);
        default:
          v22 = v71 == 26;
          goto LABEL_95;
      }
      v26 = 1350005829;
      goto LABEL_133;
    }
    return (unsigned int)EtwpSetSoftRestartInformation(Address, v4);
  }
  if ( v71 == 17 )
  {
LABEL_74:
    if ( v4 < 0x10 )
      return 3221225476LL;
    v34 = v4 - 16;
    if ( (v34 & 3) != 0 )
      return 3221225485LL;
    v35 = v34 >> 2;
    if ( (unsigned __int16)v35 > v6 )
      return 3221225485LL;
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      P = (PVOID)*((_QWORD *)Address + 1);
      memmove(&v85, Address + 16, 4LL * (unsigned __int16)v35);
      v36 = (unsigned __int16)P;
      if ( (unsigned __int16)P == 0xFFFF )
        v36 = *(unsigned __int8 *)(v8 + 4232);
      v37 = KeGetCurrentThread();
      --v37->KernelApcDisable;
      v38 = EtwpAcquireLoggerContextByLoggerId(v8, v36, 1);
      v19 = v38;
      if ( !v38 )
        goto LABEL_37;
      v20 = (unsigned int *)v38;
      if ( (*(_DWORD *)(v38 + 12) & 0x2000000) != 0 )
      {
        v10 = EtwpCheckSystemTraceAccess(v38, 0x80u);
        if ( v10 >= 0 )
        {
          v39 = EtwpPoolTagFilter;
          if ( v71 != 10 )
            v39 = &EtwpObjectTypeFilter;
          EtwpUpdateTagFilter(&v85, v35, (__int64)&v39[10 * *(unsigned __int8 *)(v19 + 818)]);
        }
        goto LABEL_153;
      }
      goto LABEL_39;
    }
    return 3221225506LL;
  }
  if ( v71 <= 10 )
  {
    if ( v71 != 10 )
    {
      if ( v71 != 1 )
      {
        if ( v71 == 3 )
        {
          if ( v4 == 8 )
          {
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              v15 = *((_DWORD *)Address + 1);
              v81 = v15;
              KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
              v10 = NtSetIntervalProfile(v15, 0);
              if ( v10 >= 0 )
                EtwpProfileInterval = v15;
              goto LABEL_32;
            }
            return 3221225506LL;
          }
          return 3221225476LL;
        }
        if ( v71 != 5 )
        {
          if ( v71 != 6 )
          {
            if ( v71 == 7 )
            {
              if ( v4 == 16 )
              {
                result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
                v10 = result;
                if ( (int)result < 0 )
                  return result;
                if ( !PsIsCurrentThreadInServerSilo() )
                {
                  v75 = *((_DWORD *)Address + 1);
                  v76 = *((_DWORD *)Address + 2);
                  v77 = *((_DWORD *)Address + 3);
                  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
                  EtwpExecutiveResourceReleaseSampleRate = v75;
                  EtwpExecutiveResourceContentionSampleRate = v76;
                  EtwpExecutiveResourceTimeout = v77;
LABEL_32:
                  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
                  return (unsigned int)v10;
                }
                return 3221225506LL;
              }
              return 3221225476LL;
            }
            return (unsigned int)-1073741822;
          }
          goto LABEL_134;
        }
        if ( ((v4 - 16) & 0xFFFFFFFB) == 0 )
        {
          result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
          v10 = result;
          if ( (int)result < 0 )
            return result;
          if ( !PsIsCurrentThreadInServerSilo() )
          {
            v11 = *((_DWORD *)Address + 1);
            v78 = v11;
            if ( !v11 )
              return 3221225485LL;
            v12 = *((_DWORD *)Address + 2);
            v79 = v12;
            if ( v12 < 0x3E8 )
              return 3221225485LL;
            v13 = *((_DWORD *)Address + 3);
            v80 = v13;
            if ( !v13 )
              return 3221225485LL;
            v14 = EtwpSpinLockHoldThreshold;
            v72 = EtwpSpinLockHoldThreshold;
            if ( v4 == 20 )
            {
              v14 = *((_DWORD *)Address + 4);
              v72 = v14;
              if ( (unsigned int)(v14 - 1) <= 0xF423E )
                return 3221225485LL;
            }
            KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
            EtwpSpinLockHoldThreshold = v14;
            EtwpSpinLockSpinThreshold = v11;
            EtwpSpinLockAcquireSampleRate = v12;
            EtwpSpinLockContentionSampleRate = v13;
            goto LABEL_32;
          }
          return 3221225506LL;
        }
        return 3221225476LL;
      }
      if ( v4 != 48 )
        return 3221225476LL;
      P = (PVOID)*((_QWORD *)Address + 1);
      v82 = *((_OWORD *)Address + 1);
      *(_OWORD *)Src = *((_OWORD *)Address + 2);
      v16 = (unsigned __int16)P;
      if ( (unsigned __int16)P == 0xFFFF )
        v16 = *(unsigned __int8 *)(v8 + 4232);
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      v18 = EtwpAcquireLoggerContextByLoggerId(v8, v16, 1);
      v19 = v18;
      if ( !v18 )
      {
LABEL_37:
        v10 = -1073741162;
LABEL_40:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return (unsigned int)v10;
      }
      v20 = (unsigned int *)v18;
      if ( (*(_DWORD *)(v18 + 12) & 0x2000000) == 0 )
      {
LABEL_39:
        EtwpReleaseLoggerContext(v20, 1);
        v10 = -1073741811;
        goto LABEL_40;
      }
      v10 = EtwpCheckSystemTraceAccess(v18, 0x80u);
      if ( v10 < 0 )
        goto LABEL_153;
      updated = EtwpUpdateGroupMasks((int *)v19, (char *)&v82);
LABEL_152:
      v10 = updated;
      goto LABEL_153;
    }
    goto LABEL_74;
  }
  if ( v71 == 11 )
  {
    v66 = 0;
    if ( v4 < 0x10 )
      return 3221225476LL;
    v28 = v4 - 16;
    if ( (v28 & 3) != 0 )
      return 3221225485LL;
    v29 = v28 >> 2;
    if ( v29 > 1 )
      return 3221225485LL;
    v30 = (void *)*((_QWORD *)Address + 1);
    P = v30;
    if ( v29 )
    {
      if ( *((_DWORD *)Address + 4) != 1316 )
        return 3221225485LL;
      v66 = 1;
    }
    if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
    {
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v31 = (unsigned __int16)v30;
        if ( (unsigned __int16)v30 == 0xFFFF )
          v31 = *(unsigned __int8 *)(v8 + 4232);
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        v33 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v31, 1);
        v19 = v33;
        if ( !v33 )
        {
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return 3221226134LL;
        }
        v10 = EtwpCheckLoggerControlAccess(0x80u, v33);
        if ( v10 >= 0 )
        {
          if ( v66 )
            _InterlockedOr((volatile signed __int32 *)(v19 + 816), 0x400u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v19 + 816), 0xFFFFFBFF);
        }
        goto LABEL_153;
      }
      return 3221225506LL;
    }
    return 3221225569LL;
  }
  if ( v71 == 12 )
  {
    if ( v4 < 0x10 )
      return 3221225476LL;
    result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
    if ( (int)result < 0 )
      return result;
    if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
    {
      if ( PsIsCurrentThreadInServerSilo() )
        return 3221225506LL;
      v23 = (v4 - 16) >> 2;
      if ( v23 > EtwpMaxProfilingSources )
        return 3221225485LL;
      v24 = (wchar_t *)ExAllocatePool2(64LL, 4LL * v23, 1484223557LL);
      v25 = v24;
      P = v24;
      if ( v24 )
      {
        memmove(v24, Address + 16, 4LL * v23);
        v10 = EtwpSetPmcProfileSource(v25, v23);
        v26 = 0;
        v27 = v25;
LABEL_133:
        ExFreePoolWithTag(v27, v26);
        return (unsigned int)v10;
      }
      return 3221225495LL;
    }
    return 3221225569LL;
  }
  if ( v71 <= 13 )
    return (unsigned int)-1073741822;
  if ( v71 > 15 )
  {
    v22 = v71 == 16;
LABEL_95:
    if ( !v22 )
      return (unsigned int)-1073741822;
    if ( v4 != 32 )
      return 3221225476LL;
    v40 = (void *)*((_QWORD *)Address + 1);
    P = v40;
    v74 = *((_DWORD *)Address + 5);
    v73 = *((_DWORD *)Address + 6);
    if ( !Address[16] )
      return 3221225659LL;
    v41 = (unsigned __int16)v40;
    if ( (unsigned __int16)v40 == 0xFFFF )
      v41 = *(unsigned __int8 *)(v8 + 4232);
    v42 = v71 == 26;
    v43 = KeGetCurrentThread();
    --v43->KernelApcDisable;
    v44 = EtwpAcquireLoggerContextByLoggerId(v8, v41, 1);
    v19 = v44;
    if ( !v44 )
      goto LABEL_37;
    v10 = EtwpCheckLoggerControlAccess(0x80u, v44);
    if ( v10 < 0 )
      goto LABEL_153;
    updated = EtwpEnableStackCaching(v19, v74, v73, v42);
    goto LABEL_152;
  }
LABEL_134:
  if ( v4 < 0x10 )
    return 3221225476LL;
  v57 = v4 - 16;
  if ( (v57 & 3) == 0 )
  {
    if ( PsIsCurrentThreadInServerSilo() && (unsigned int)(v71 - 14) <= 1 )
      return 3221225506LL;
    v58 = v57 >> 2;
    v59 = (char *)(Address + 16);
    P = (PVOID)*((_QWORD *)Address + 1);
    v60 = (unsigned __int16)P;
    if ( (unsigned __int16)P == 0xFFFF )
      v60 = *(unsigned __int8 *)(v8 + 4232);
    v61 = KeGetCurrentThread();
    --v61->KernelApcDisable;
    v62 = EtwpAcquireLoggerContextByLoggerId(v8, v60, 1);
    v19 = v62;
    if ( v62 )
    {
      v10 = EtwpCheckLoggerControlAccess(0x80u, v62);
      if ( v10 >= 0 )
      {
        switch ( v71 )
        {
          case 6:
            updated = EtwpUpdateStackTracing(v19, v59, v58);
            goto LABEL_152;
          case 15:
            updated = EtwpUpdatePmcCounters(v19, v59, v58);
            goto LABEL_152;
          case 14:
            updated = EtwpUpdatePmcEvents(v19, v59, v58);
            goto LABEL_152;
        }
        if ( v71 != 20 )
        {
          updated = EtwpUpdateProcessorTraceEvents(v19, v59, v58);
          goto LABEL_152;
        }
        EtwpUpdateLastBranchTracingEvents(v19, v59, v58);
      }
LABEL_153:
      EtwpReleaseLoggerContext((unsigned int *)v19, 1);
      goto LABEL_40;
    }
    goto LABEL_37;
  }
  return 3221225485LL;
}
