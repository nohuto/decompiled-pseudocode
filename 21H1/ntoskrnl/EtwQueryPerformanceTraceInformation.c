/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x1409335CC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     RtlNumberOfSetBits @ 0x1402E13C0 (RtlNumberOfSetBits.c)
 *     RtlFindSetBits @ 0x1402E3D60 (RtlFindSetBits.c)
 *     ExUnlockUserBuffer @ 0x1402F85E0 (ExUnlockUserBuffer.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1405F25A4 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405F2620 (EtwpCheckLoggerControlAccess.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1405F2674 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14061A1F0 (SeQuerySecurityDescriptorInfo.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 *     EtwpMapEnableFlags @ 0x1406EA540 (EtwpMapEnableFlags.c)
 *     EtwpCheckSystemTraceAccess @ 0x140780EB8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUMGLEnabled @ 0x14092FA3C (EtwpUMGLEnabled.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x140942FE0 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x140943D70 (EtwpGetSoftRestartInformation.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        unsigned int *a4)
{
  DWORD SetBits; // r15d
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r13
  unsigned int v13; // edx
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  void *v20; // rbx
  char v21; // dl
  unsigned int *p_SizeOfBitMap; // rcx
  unsigned int v23; // edx
  struct _KTHREAD *v24; // rax
  __int64 v25; // rax
  unsigned int *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned int v31; // r14d
  unsigned int v32; // edx
  struct _KTHREAD *v33; // rax
  unsigned int *v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // r13d
  unsigned int v38; // r14d
  struct _KPROCESS *j; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v41; // rdi
  unsigned int ProcessId; // ecx
  ULONG v43; // ebx
  unsigned int v44; // edx
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BITMAP *v46; // rax
  _RTL_BITMAP *v47; // rsi
  unsigned int v48; // eax
  ULONG v49; // ebx
  __int64 i; // r12
  ULONG Length; // [rsp+30h] [rbp-78h] BYREF
  DWORD SecurityInformation; // [rsp+34h] [rbp-74h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  __int64 v56; // [rsp+48h] [rbp-60h] BYREF
  __int64 v57; // [rsp+50h] [rbp-58h]
  int v58; // [rsp+58h] [rbp-50h]
  __int64 v59; // [rsp+60h] [rbp-48h]
  __int64 v60; // [rsp+68h] [rbp-40h]
  __int64 v61; // [rsp+70h] [rbp-38h]
  __int64 v62; // [rsp+78h] [rbp-30h]
  ULONG v63; // [rsp+B8h] [rbp+10h]

  SetBits = 0;
  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  v58 = *(_DWORD *)a1;
  v10 = v58;
  v12 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( v58 > 18 )
  {
    if ( v58 != 25 )
      return (unsigned int)-1073741822;
    LOBYTE(v11) = a3;
    return (unsigned int)EtwpQueryCoverageSamplerInformation(a1, a2, v11, a4);
  }
  if ( v58 == 18 )
    return (unsigned int)EtwpGetSoftRestartInformation(a1, a2, a4);
  if ( v58 > 5 )
  {
    if ( v58 == 6 )
    {
      v43 = 0;
      v63 = 0;
      v57 = a1 + 16;
      if ( a2 < 0x10 )
        return 3221225476LL;
      v62 = *(_QWORD *)(a1 + 8);
      v44 = (unsigned __int16)v62;
      if ( (unsigned __int16)v62 == 0xFFFF )
        v44 = *(unsigned __int8 *)(v12 + 4208);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v46 = (_RTL_BITMAP *)EtwpAcquireLoggerContextByLoggerId(v12, v44, 1);
      v47 = v46;
      ObjectsSecurityDescriptor = v46;
      if ( v46 )
      {
        v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v46);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( (v47[52].SizeOfBitMap & 0x80u) != 0 )
          {
            v43 = RtlNumberOfSetBits(v47 + 61);
            v63 = v43;
          }
          v48 = 4 * v43 + 16;
          *a4 = v48;
          if ( v48 > a2 )
          {
            v8 = -1073741789;
          }
          else
          {
            v49 = 0;
            for ( i = v57; ; *(_DWORD *)(i + 4LL * v49++) = SetBits )
            {
              Length = v49;
              if ( v49 >= v63 )
                break;
              SetBits = RtlFindSetBits(v47 + 61, 1u, SetBits + 1);
              SecurityInformation = SetBits;
            }
          }
        }
        p_SizeOfBitMap = &v47->SizeOfBitMap;
        goto LABEL_78;
      }
      goto LABEL_75;
    }
    if ( v58 == 7 )
    {
      *a4 = 16;
      if ( a2 != 16 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
      *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
      *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
      return v8;
    }
    if ( v58 <= 9 )
    {
      v37 = 0;
      if ( a2 < 8 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v38 = (a2 - 4) >> 2;
        for ( j = 0LL; ; j = v41 )
        {
          NextProcess = (struct _KPROCESS *)PsGetNextProcess(j);
          v41 = NextProcess;
          Object = NextProcess;
          if ( !NextProcess )
            break;
          if ( (HIDWORD(NextProcess[2].Header.WaitListHead.Flink) & 0x1000) == 0
            && (v10 == 9 || EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
          {
            ProcessId = (unsigned int)PsGetProcessId(v41);
            if ( v37 < v38 )
              *(_DWORD *)(a1 + 4LL * v37 + 4) = ProcessId;
            ++v37;
          }
        }
        *a4 = 4 * v37 + 4;
        return v38 < v37 ? 0xC0000023 : 0;
      }
    }
    else
    {
      if ( v58 != 10 )
      {
        if ( v58 == 13 )
        {
          Object = 0LL;
          v56 = 0LL;
          if ( a2 >= 0x28 )
          {
            v31 = a2 - 8;
            result = ExLockUserBuffer(a1 + 8, v31, a3, IoWriteAccess, &v56, (struct _MDL **)&Object);
            if ( (int)result < 0 )
              return result;
            v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned int *))off_140C00A68[0])(
                   20LL,
                   v31,
                   v56,
                   a4);
            if ( v56 )
              ExUnlockUserBuffer((struct _MDL *)Object);
            return v8;
          }
          return 3221225476LL;
        }
        return (unsigned int)-1073741822;
      }
      if ( a2 < 0x10 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v61 = *(_QWORD *)(a1 + 8);
        v32 = (unsigned __int16)v61;
        if ( (unsigned __int16)v61 == 0xFFFF )
          v32 = *(unsigned __int8 *)(v12 + 4208);
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        v34 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v12, v32, 1);
        v26 = v34;
        ObjectsSecurityDescriptor = v34;
        if ( v34 )
        {
          if ( (v34[3] & 0x2000000) == 0 )
          {
            EtwpReleaseLoggerContext(v34, 1);
            v8 = -1073741811;
LABEL_80:
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
            return v8;
          }
          v8 = EtwpCheckSystemTraceAccess((__int64)v34, 1u);
          if ( (v8 & 0x80000000) == 0 )
          {
            v35 = 5LL * *((unsigned __int8 *)v26 + 834);
            v36 = 4 * EtwpPoolTagFilter[10 * *((unsigned __int8 *)v26 + 834)] + 16;
            *a4 = v36;
            if ( v36 > a2 )
              v8 = -1073741789;
            else
              memmove((void *)(a1 + 16), &EtwpPoolTagFilter[2 * v35 + 2], 4LL * EtwpPoolTagFilter[2 * v35]);
          }
          goto LABEL_51;
        }
LABEL_75:
        v8 = -1073741162;
        goto LABEL_80;
      }
    }
    return 3221225506LL;
  }
  switch ( v58 )
  {
    case 5:
      *a4 = 20;
      if ( ((a2 - 16) & 0xFFFFFFFB) == 0 )
      {
        *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
        *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
        *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
        if ( a2 == 20 )
          *(_DWORD *)(a1 + 16) = EtwpSpinLockHoldThreshold;
        return v8;
      }
      return 3221225476LL;
    case 0:
      *a4 = 8;
      if ( a2 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = 80;
      return v8;
    case 1:
      *a4 = 48;
      if ( a2 != 48 )
        return 3221225476LL;
      v60 = *(_QWORD *)(a1 + 8);
      v23 = (unsigned __int16)v60;
      if ( (unsigned __int16)v60 == 0xFFFF )
        v23 = *(unsigned __int8 *)(v12 + 4208);
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      v25 = EtwpAcquireLoggerContextByLoggerId(v12, v23, 1);
      v26 = (unsigned int *)v25;
      ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v25;
      if ( v25 )
      {
        if ( (*(_DWORD *)(v25 + 12) & 0x2000000) == 0 )
        {
          EtwpReleaseLoggerContext((unsigned int *)v25, 1);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28, v29);
          return 3221225485LL;
        }
        v30 = 32LL * *(unsigned __int8 *)(v25 + 834);
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(v30 + v12 + 4260);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(v30 + v12 + 4276);
        EtwpMapEnableFlags(a1 + 16, 0);
LABEL_51:
        p_SizeOfBitMap = v26;
LABEL_78:
        v21 = 1;
        goto LABEL_79;
      }
      goto LABEL_75;
    case 2:
      *a4 = 16;
      if ( a2 != 16 )
        return 3221225476LL;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 108) + 4128LL);
      break;
    case 3:
      *a4 = 8;
      if ( a2 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
      break;
    case 4:
      *a4 = 24;
      if ( a2 >= 0x18 )
      {
        v59 = *(_QWORD *)(a1 + 8);
        SecurityInformation = *(_DWORD *)(a1 + 4);
        v13 = (unsigned __int16)v59;
        if ( (unsigned __int16)v59 == 0xFFFF )
          v13 = *(unsigned __int8 *)(v12 + 4208);
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        v15 = EtwpAcquireLoggerContextByLoggerId(v12, v13, 0);
        v19 = v15;
        if ( v15 )
        {
          v20 = (void *)EtwpReferenceLoggerSecurityDescriptor(v15);
          ObjectsSecurityDescriptor = v20;
          Length = a2 - 16;
          v8 = SeQuerySecurityDescriptorInfo(
                 &SecurityInformation,
                 (PSECURITY_DESCRIPTOR)(a1 + 16),
                 &Length,
                 &ObjectsSecurityDescriptor);
          *a4 = Length + 16;
          EtwpDereferenceLoggerSecurityDescriptor(v19, (__int64)v20);
          v21 = 0;
          p_SizeOfBitMap = (unsigned int *)v19;
LABEL_79:
          EtwpReleaseLoggerContext(p_SizeOfBitMap, v21);
          goto LABEL_80;
        }
        goto LABEL_75;
      }
      return 3221225476LL;
    default:
      return (unsigned int)-1073741822;
  }
  return v8;
}
