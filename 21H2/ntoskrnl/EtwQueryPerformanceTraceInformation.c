/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x14093803C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     RtlFindSetBits @ 0x1403625A0 (RtlFindSetBits.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     EtwpMapEnableFlags @ 0x14061F870 (EtwpMapEnableFlags.c)
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140637C40 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140639600 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14065A340 (SeQuerySecurityDescriptorInfo.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     EtwpCheckSystemTraceAccess @ 0x140798B78 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUMGLEnabled @ 0x1409344BC (EtwpUMGLEnabled.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1409479B4 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x140948744 (EtwpGetSoftRestartInformation.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, unsigned int *a4)
{
  unsigned int v5; // r14d
  DWORD SetBits; // r15d
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r13
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rax
  unsigned int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r13
  void *v22; // rbx
  char v23; // dl
  unsigned int *p_SizeOfBitMap; // rcx
  unsigned int v25; // edx
  struct _KTHREAD *v26; // rax
  unsigned int *v27; // rax
  unsigned int *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned int v33; // r14d
  unsigned int v34; // edx
  struct _KTHREAD *v35; // rax
  unsigned int *v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // eax
  unsigned int v39; // r13d
  unsigned int v40; // r14d
  struct _KPROCESS *j; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v43; // rdi
  unsigned int ProcessId; // ecx
  ULONG v45; // ebx
  unsigned int v46; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v48; // rax
  _RTL_BITMAP *v49; // rsi
  unsigned int v50; // eax
  ULONG v51; // ebx
  __int64 i; // r12
  ULONG Length; // [rsp+30h] [rbp-78h] BYREF
  DWORD SecurityInformation; // [rsp+34h] [rbp-74h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  __int64 v58; // [rsp+48h] [rbp-60h] BYREF
  __int64 v59; // [rsp+50h] [rbp-58h]
  int v60; // [rsp+58h] [rbp-50h]
  __int64 v61; // [rsp+60h] [rbp-48h]
  __int64 v62; // [rsp+68h] [rbp-40h]
  __int64 v63; // [rsp+70h] [rbp-38h]
  __int64 v64; // [rsp+78h] [rbp-30h]
  ULONG v65; // [rsp+B8h] [rbp+10h]

  v5 = a2;
  SetBits = 0;
  v8 = 0;
  if ( (unsigned int)a2 < 4 )
    return 3221225485LL;
  v60 = *(_DWORD *)a1;
  v10 = v60;
  v14 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 108);
  if ( v60 > 18 )
  {
    if ( v60 != 25 )
      return (unsigned int)-1073741822;
    LOBYTE(v13) = a3;
    return (unsigned int)EtwpQueryCoverageSamplerInformation(a1, v5, v13, a4);
  }
  if ( v60 == 18 )
    return (unsigned int)EtwpGetSoftRestartInformation(a1, v5, a4);
  if ( v60 > 5 )
  {
    if ( v60 == 6 )
    {
      v45 = 0;
      v65 = 0;
      v59 = a1 + 16;
      if ( v5 < 0x10 )
        return 3221225476LL;
      v64 = *(_QWORD *)(a1 + 8);
      v46 = (unsigned __int16)v64;
      if ( (unsigned __int16)v64 == 0xFFFF )
        v46 = *(unsigned __int8 *)(v14 + 4208);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v48 = EtwpAcquireLoggerContextByLoggerId(v14, v46, 1);
      v49 = (_RTL_BITMAP *)v48;
      ObjectsSecurityDescriptor = v48;
      if ( v48 )
      {
        v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v48);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( (v49[52].SizeOfBitMap & 0x80u) != 0 )
          {
            v45 = RtlNumberOfSetBits(v49 + 61);
            v65 = v45;
          }
          v50 = 4 * v45 + 16;
          *a4 = v50;
          if ( v50 > v5 )
          {
            v8 = -1073741789;
          }
          else
          {
            v51 = 0;
            for ( i = v59; ; *(_DWORD *)(i + 4LL * v51++) = SetBits )
            {
              Length = v51;
              if ( v51 >= v65 )
                break;
              SetBits = RtlFindSetBits(v49 + 61, 1u, SetBits + 1);
              SecurityInformation = SetBits;
            }
          }
        }
        p_SizeOfBitMap = &v49->SizeOfBitMap;
        goto LABEL_78;
      }
      goto LABEL_75;
    }
    if ( v60 == 7 )
    {
      *a4 = 16;
      if ( v5 != 16 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
      *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
      *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
      return v8;
    }
    if ( v60 <= 9 )
    {
      v39 = 0;
      if ( v5 < 8 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo(v12, v11) )
      {
        v40 = (v5 - 4) >> 2;
        for ( j = 0LL; ; j = v43 )
        {
          NextProcess = (struct _KPROCESS *)PsGetNextProcess(j);
          v43 = NextProcess;
          Object = NextProcess;
          if ( !NextProcess )
            break;
          if ( (HIDWORD(NextProcess[2].Header.WaitListHead.Flink) & 0x1000) == 0
            && (v10 == 9 || EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
          {
            ProcessId = (unsigned int)PsGetProcessId(v43);
            if ( v39 < v40 )
              *(_DWORD *)(a1 + 4LL * v39 + 4) = ProcessId;
            ++v39;
          }
        }
        *a4 = 4 * v39 + 4;
        return v40 < v39 ? 0xC0000023 : 0;
      }
    }
    else
    {
      if ( v60 != 10 )
      {
        if ( v60 == 13 )
        {
          Object = 0LL;
          v58 = 0LL;
          if ( v5 >= 0x28 )
          {
            v33 = v5 - 8;
            result = ExLockUserBuffer(a1 + 8, v33, a3, IoWriteAccess, &v58, (struct _MDL **)&Object);
            if ( (int)result < 0 )
              return result;
            v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned int *))off_140C00A68[0])(
                   20LL,
                   v33,
                   v58,
                   a4);
            if ( v58 )
              ExUnlockUserBuffer((struct _MDL *)Object);
            return v8;
          }
          return 3221225476LL;
        }
        return (unsigned int)-1073741822;
      }
      if ( v5 < 0x10 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo(v12, v11) )
      {
        v63 = *(_QWORD *)(a1 + 8);
        v34 = (unsigned __int16)v63;
        if ( (unsigned __int16)v63 == 0xFFFF )
          v34 = *(unsigned __int8 *)(v14 + 4208);
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        v36 = EtwpAcquireLoggerContextByLoggerId(v14, v34, 1);
        v28 = v36;
        ObjectsSecurityDescriptor = v36;
        if ( v36 )
        {
          if ( (v36[3] & 0x2000000) == 0 )
          {
            EtwpReleaseLoggerContext(v36, 1);
            v8 = -1073741811;
LABEL_80:
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
            return v8;
          }
          v8 = EtwpCheckSystemTraceAccess((__int64)v36, 1u);
          if ( (v8 & 0x80000000) == 0 )
          {
            v37 = 5LL * *((unsigned __int8 *)v28 + 834);
            v38 = 4 * EtwpPoolTagFilter[10 * *((unsigned __int8 *)v28 + 834)] + 16;
            *a4 = v38;
            if ( v38 > v5 )
              v8 = -1073741789;
            else
              memmove((void *)(a1 + 16), &EtwpPoolTagFilter[2 * v37 + 2], 4LL * EtwpPoolTagFilter[2 * v37]);
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
  switch ( v60 )
  {
    case 5:
      *a4 = 20;
      if ( ((v5 - 16) & 0xFFFFFFFB) == 0 )
      {
        *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
        *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
        *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
        if ( v5 == 20 )
          *(_DWORD *)(a1 + 16) = EtwpSpinLockHoldThreshold;
        return v8;
      }
      return 3221225476LL;
    case 0:
      *a4 = 8;
      if ( v5 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = 80;
      return v8;
    case 1:
      *a4 = 48;
      if ( v5 != 48 )
        return 3221225476LL;
      v62 = *(_QWORD *)(a1 + 8);
      v25 = (unsigned __int16)v62;
      if ( (unsigned __int16)v62 == 0xFFFF )
        v25 = *(unsigned __int8 *)(v14 + 4208);
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      v27 = EtwpAcquireLoggerContextByLoggerId(v14, v25, 1);
      v28 = v27;
      ObjectsSecurityDescriptor = v27;
      if ( v27 )
      {
        if ( (v27[3] & 0x2000000) == 0 )
        {
          EtwpReleaseLoggerContext(v27, 1);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
          return 3221225485LL;
        }
        v32 = 32LL * *((unsigned __int8 *)v27 + 834);
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(v32 + v14 + 4260);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(v32 + v14 + 4276);
        EtwpMapEnableFlags(a1 + 16, 0);
LABEL_51:
        p_SizeOfBitMap = v28;
LABEL_78:
        v23 = 1;
        goto LABEL_79;
      }
      goto LABEL_75;
    case 2:
      *a4 = 16;
      if ( v5 != 16 )
        return 3221225476LL;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v12, v11) + 108) + 4128LL);
      break;
    case 3:
      *a4 = 8;
      if ( v5 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
      break;
    case 4:
      *a4 = 24;
      if ( v5 >= 0x18 )
      {
        v61 = *(_QWORD *)(a1 + 8);
        SecurityInformation = *(_DWORD *)(a1 + 4);
        v15 = (unsigned __int16)v61;
        if ( (unsigned __int16)v61 == 0xFFFF )
          v15 = *(unsigned __int8 *)(v14 + 4208);
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        v17 = EtwpAcquireLoggerContextByLoggerId(v14, v15, 0);
        v21 = (__int64)v17;
        if ( v17 )
        {
          v22 = (void *)EtwpReferenceLoggerSecurityDescriptor((__int64)v17);
          ObjectsSecurityDescriptor = v22;
          Length = v5 - 16;
          v8 = SeQuerySecurityDescriptorInfo(
                 &SecurityInformation,
                 (PSECURITY_DESCRIPTOR)(a1 + 16),
                 &Length,
                 &ObjectsSecurityDescriptor);
          *a4 = Length + 16;
          EtwpDereferenceLoggerSecurityDescriptor(v21, (__int64)v22);
          v23 = 0;
          p_SizeOfBitMap = (unsigned int *)v21;
LABEL_79:
          EtwpReleaseLoggerContext(p_SizeOfBitMap, v23);
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
