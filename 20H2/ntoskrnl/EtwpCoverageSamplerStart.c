/*
 * XREFs of EtwpCoverageSamplerStart @ 0x1409499BC
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x14094A16C (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     KeEnterCriticalRegion @ 0x140227360 (KeEnterCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReInitializeRundownProtection @ 0x14037E690 (ExReInitializeRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KeStartProfile @ 0x14051A0EC (KeStartProfile.c)
 *     PsEnumProcesses @ 0x140659378 (PsEnumProcesses.c)
 *     KeSetIntervalProfile @ 0x1407303F4 (KeSetIntervalProfile.c)
 *     MmEnumerateSystemImages @ 0x14078DA30 (MmEnumerateSystemImages.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14078E1F8 (EtwpUpdateGlobalGroupMasks.c)
 *     PsSetLoadImageNotifyRoutine @ 0x140790550 (PsSetLoadImageNotifyRoutine.c)
 *     KeInitializeProfileCallback @ 0x1408BE998 (KeInitializeProfileCallback.c)
 *     EtwpCovSampCaptureContextStart @ 0x140944AE8 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140948930 (EtwpCoverageSamplerAllocateTable.c)
 */

__int64 __fastcall EtwpCoverageSamplerStart(_DWORD *Object)
{
  int v2; // ecx
  unsigned __int64 v3; // rbp
  __int16 v4; // r15
  _QWORD *Table; // rax
  int ImageNotifyRoutine; // edi
  PVOID *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = 0;
  v2 = Object[9];
  LODWORD(v3) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v4 = 0;
  Table = EtwpCoverageSamplerAllocateTable(v2);
  *((_QWORD *)Object + 144) = Table;
  if ( !Table )
  {
    ImageNotifyRoutine = -1073741670;
    goto LABEL_29;
  }
  ++Object[296];
  v7 = (PVOID *)*((_QWORD *)Object + 147);
  if ( *v7 != Object + 292 )
    __fastfail(3u);
  *Table = Object + 292;
  Table[1] = v7;
  *v7 = Table;
  *((_QWORD *)Object + 147) = Table;
  v8 = Object[17];
  v9 = Object[16];
  if ( v8 )
    v9 /= v8;
  v10 = Object[6];
  if ( (v10 & 4) != 0 )
    goto LABEL_16;
  if ( (v10 & 2) != 0 )
    goto LABEL_14;
  LODWORD(v16) = 2;
  if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C00A68[0])(1LL, 24LL, &v16, &v18) < 0
    || !BYTE4(v16) )
  {
    if ( (Object[6] & 1) != 0 )
    {
      ImageNotifyRoutine = -1073741637;
      goto LABEL_29;
    }
LABEL_14:
    LODWORD(v3) = 10 * v9;
    if ( (BYTE4(PerfGlobalGroupMask[0]) & 2) != 0 )
      LODWORD(v3) = EtwpProfileInterval;
    goto LABEL_16;
  }
  v4 = 2;
  v3 = v9 * (unsigned __int64)(unsigned int)EtwCPUSpeedInMHz / 5;
LABEL_16:
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_140C19728 = (__int64)KeGetCurrentThread();
  if ( qword_140C19738 )
  {
    ImageNotifyRoutine = -1073740008;
  }
  else
  {
    ImageNotifyRoutine = EtwpCovSampCaptureContextStart(Object + 6);
    if ( ImageNotifyRoutine >= 0 )
    {
      v11 = qword_140C19748;
      ObfReferenceObject(Object);
      qword_140C19738 = (__int64)Object;
      ExReInitializeRundownProtection((PEX_RUNDOWN_REF)&stru_140C19740);
      Object[287] |= 1u;
      ImageNotifyRoutine = PsSetLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)EtwpCovSampImageNotify);
      if ( ImageNotifyRoutine >= 0 )
      {
        Object[287] |= 2u;
        PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpCovSampEnumerateProcess, (__int64)(Object + 4));
        MmEnumerateSystemImages(
          (__int64 (__fastcall *)(PVOID *, __int64))EtwpCovSampEnumerateDriver,
          (__int64)(Object + 4));
        v12 = EtwpHostSiloState;
        v13 = *(_DWORD *)(EtwpHostSiloState + 4548) | 4;
        *(_DWORD *)(EtwpHostSiloState + 4548) = v13;
        v14 = Object[6];
        if ( (v14 & 8) == 0 )
        {
          *(_DWORD *)(v12 + 4552) |= 4u;
          v14 = Object[6];
        }
        if ( (v14 & 0x10) == 0 )
        {
          *(_DWORD *)(v12 + 4552) |= 0x200u;
          v14 = Object[6];
        }
        if ( (v14 & 0x20) == 0 )
          *(_DWORD *)(v12 + 4548) = v13 | 0x1000;
        EtwpUpdateGlobalGroupMasks(v12, 0, 9u);
        Object[287] |= 4u;
        if ( (Object[6] & 4) == 0 )
        {
          KeInitializeProfileCallback((_DWORD *)(v11 + 16), (__int64)EtwpCovSampProfileInterrupt, v11, v4);
          KeSetIntervalProfile(v3, *(__int16 *)(v11 + 256));
          KeStartProfile(v11 + 16);
          Object[287] |= 8u;
        }
        ImageNotifyRoutine = 0;
      }
    }
  }
LABEL_29:
  if ( (struct _KTHREAD *)qword_140C19728 == KeGetCurrentThread() )
  {
    qword_140C19728 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ImageNotifyRoutine;
}
