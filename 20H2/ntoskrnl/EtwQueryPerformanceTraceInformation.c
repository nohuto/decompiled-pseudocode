/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x14093A69C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ExUnlockUserBuffer @ 0x14025EE10 (ExUnlockUserBuffer.c)
 *     PsGetProcessId @ 0x140262CB0 (PsGetProcessId.c)
 *     RtlNumberOfSetBits @ 0x140263E60 (RtlNumberOfSetBits.c)
 *     RtlFindSetBits @ 0x140343300 (RtlFindSetBits.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     PsGetNextProcess @ 0x140659AB0 (PsGetNextProcess.c)
 *     ExLockUserBuffer @ 0x14065C658 (ExLockUserBuffer.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14066AA50 (EtwpCheckLoggerControlAccess.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x14066AAA4 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14066AAEC (EtwpReferenceLoggerSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14066F3A0 (SeQuerySecurityDescriptorInfo.c)
 *     EtwpMapEnableFlags @ 0x140712098 (EtwpMapEnableFlags.c)
 *     EtwpCheckSystemTraceAccess @ 0x14078ED10 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUMGLEnabled @ 0x140936B1C (EtwpUMGLEnabled.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x14094A014 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x14094ADA4 (EtwpGetSoftRestartInformation.c)
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
  unsigned int *v15; // rax
  __int64 v16; // r13
  void *v17; // rbx
  char v18; // dl
  unsigned int *p_SizeOfBitMap; // rcx
  unsigned int v20; // edx
  struct _KTHREAD *v21; // rax
  unsigned int *v22; // rax
  unsigned int *v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // r14d
  unsigned int v26; // edx
  struct _KTHREAD *v27; // rax
  unsigned int *v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // r13d
  unsigned int v32; // r14d
  struct _KPROCESS *j; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v35; // rdi
  unsigned int ProcessId; // ecx
  ULONG v37; // ebx
  unsigned int v38; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v40; // rax
  _RTL_BITMAP *v41; // rsi
  unsigned int v42; // eax
  ULONG v43; // ebx
  __int64 i; // r12
  ULONG Length; // [rsp+30h] [rbp-78h] BYREF
  DWORD SecurityInformation; // [rsp+34h] [rbp-74h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  __int64 v50; // [rsp+48h] [rbp-60h] BYREF
  __int64 v51; // [rsp+50h] [rbp-58h]
  int v52; // [rsp+58h] [rbp-50h]
  __int64 v53; // [rsp+60h] [rbp-48h]
  __int64 v54; // [rsp+68h] [rbp-40h]
  __int64 v55; // [rsp+70h] [rbp-38h]
  __int64 v56; // [rsp+78h] [rbp-30h]
  ULONG v57; // [rsp+B8h] [rbp+10h]

  SetBits = 0;
  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  v52 = *(_DWORD *)a1;
  v10 = v52;
  v12 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( v52 > 18 )
  {
    if ( v52 != 25 )
      return (unsigned int)-1073741822;
    LOBYTE(v11) = a3;
    return (unsigned int)EtwpQueryCoverageSamplerInformation(a1, a2, v11, a4);
  }
  if ( v52 == 18 )
    return (unsigned int)EtwpGetSoftRestartInformation(a1, a2, a4);
  if ( v52 > 5 )
  {
    if ( v52 == 6 )
    {
      v37 = 0;
      v57 = 0;
      v51 = a1 + 16;
      if ( a2 < 0x10 )
        return 3221225476LL;
      v56 = *(_QWORD *)(a1 + 8);
      v38 = (unsigned __int16)v56;
      if ( (unsigned __int16)v56 == 0xFFFF )
        v38 = *(unsigned __int8 *)(v12 + 4208);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v40 = EtwpAcquireLoggerContextByLoggerId(v12, v38, 1);
      v41 = (_RTL_BITMAP *)v40;
      ObjectsSecurityDescriptor = v40;
      if ( v40 )
      {
        v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v40);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( (v41[52].SizeOfBitMap & 0x80u) != 0 )
          {
            v37 = RtlNumberOfSetBits(v41 + 61);
            v57 = v37;
          }
          v42 = 4 * v37 + 16;
          *a4 = v42;
          if ( v42 > a2 )
          {
            v8 = -1073741789;
          }
          else
          {
            v43 = 0;
            for ( i = v51; ; *(_DWORD *)(i + 4LL * v43++) = SetBits )
            {
              Length = v43;
              if ( v43 >= v57 )
                break;
              SetBits = RtlFindSetBits(v41 + 61, 1u, SetBits + 1);
              SecurityInformation = SetBits;
            }
          }
        }
        p_SizeOfBitMap = &v41->SizeOfBitMap;
        goto LABEL_78;
      }
      goto LABEL_75;
    }
    if ( v52 == 7 )
    {
      *a4 = 16;
      if ( a2 != 16 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
      *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
      *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
      return v8;
    }
    if ( v52 <= 9 )
    {
      v31 = 0;
      if ( a2 < 8 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v32 = (a2 - 4) >> 2;
        for ( j = 0LL; ; j = v35 )
        {
          NextProcess = (struct _KPROCESS *)PsGetNextProcess(j);
          v35 = NextProcess;
          Object = NextProcess;
          if ( !NextProcess )
            break;
          if ( (HIDWORD(NextProcess[2].Header.WaitListHead.Flink) & 0x1000) == 0
            && (v10 == 9 || EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
          {
            ProcessId = (unsigned int)PsGetProcessId(v35);
            if ( v31 < v32 )
              *(_DWORD *)(a1 + 4LL * v31 + 4) = ProcessId;
            ++v31;
          }
        }
        *a4 = 4 * v31 + 4;
        return v32 < v31 ? 0xC0000023 : 0;
      }
    }
    else
    {
      if ( v52 != 10 )
      {
        if ( v52 == 13 )
        {
          Object = 0LL;
          v50 = 0LL;
          if ( a2 >= 0x28 )
          {
            v25 = a2 - 8;
            result = ExLockUserBuffer(a1 + 8, v25, a3, IoWriteAccess, &v50, (struct _MDL **)&Object);
            if ( (int)result < 0 )
              return result;
            v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned int *))off_140C00A68[0])(
                   20LL,
                   v25,
                   v50,
                   a4);
            if ( v50 )
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
        v55 = *(_QWORD *)(a1 + 8);
        v26 = (unsigned __int16)v55;
        if ( (unsigned __int16)v55 == 0xFFFF )
          v26 = *(unsigned __int8 *)(v12 + 4208);
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        v28 = EtwpAcquireLoggerContextByLoggerId(v12, v26, 1);
        v23 = v28;
        ObjectsSecurityDescriptor = v28;
        if ( v28 )
        {
          if ( (v28[3] & 0x2000000) == 0 )
          {
            EtwpReleaseLoggerContext(v28, 1);
            v8 = -1073741811;
LABEL_80:
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            return v8;
          }
          v8 = EtwpCheckSystemTraceAccess((__int64)v28, 1u);
          if ( (v8 & 0x80000000) == 0 )
          {
            v29 = 5LL * *((unsigned __int8 *)v23 + 834);
            v30 = 4 * EtwpPoolTagFilter[10 * *((unsigned __int8 *)v23 + 834)] + 16;
            *a4 = v30;
            if ( v30 > a2 )
              v8 = -1073741789;
            else
              memmove((void *)(a1 + 16), &EtwpPoolTagFilter[2 * v29 + 2], 4LL * EtwpPoolTagFilter[2 * v29]);
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
  switch ( v52 )
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
      v54 = *(_QWORD *)(a1 + 8);
      v20 = (unsigned __int16)v54;
      if ( (unsigned __int16)v54 == 0xFFFF )
        v20 = *(unsigned __int8 *)(v12 + 4208);
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      v22 = EtwpAcquireLoggerContextByLoggerId(v12, v20, 1);
      v23 = v22;
      ObjectsSecurityDescriptor = v22;
      if ( v22 )
      {
        if ( (v22[3] & 0x2000000) == 0 )
        {
          EtwpReleaseLoggerContext(v22, 1);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return 3221225485LL;
        }
        v24 = 32LL * *((unsigned __int8 *)v22 + 834);
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(v24 + v12 + 4260);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(v24 + v12 + 4276);
        EtwpMapEnableFlags(a1 + 16, 0);
LABEL_51:
        p_SizeOfBitMap = v23;
LABEL_78:
        v18 = 1;
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
        v53 = *(_QWORD *)(a1 + 8);
        SecurityInformation = *(_DWORD *)(a1 + 4);
        v13 = (unsigned __int16)v53;
        if ( (unsigned __int16)v53 == 0xFFFF )
          v13 = *(unsigned __int8 *)(v12 + 4208);
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        v15 = EtwpAcquireLoggerContextByLoggerId(v12, v13, 0);
        v16 = (__int64)v15;
        if ( v15 )
        {
          v17 = (void *)EtwpReferenceLoggerSecurityDescriptor((__int64)v15);
          ObjectsSecurityDescriptor = v17;
          Length = a2 - 16;
          v8 = SeQuerySecurityDescriptorInfo(
                 &SecurityInformation,
                 (PSECURITY_DESCRIPTOR)(a1 + 16),
                 &Length,
                 &ObjectsSecurityDescriptor);
          *a4 = Length + 16;
          EtwpDereferenceLoggerSecurityDescriptor(v16, (__int64)v17);
          v18 = 0;
          p_SizeOfBitMap = (unsigned int *)v16;
LABEL_79:
          EtwpReleaseLoggerContext(p_SizeOfBitMap, v18);
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
