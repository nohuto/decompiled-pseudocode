/*
 * XREFs of PerfLogSpinLockRelease @ 0x1405AB678
 * Callers:
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5FEC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1405B6144 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfLogSpinLockRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  char v8; // si
  unsigned __int8 v9; // di
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned __int8 NestingLevel; // dl
  unsigned __int8 CurrentIrql; // al
  char v15; // cl
  char v16; // cl
  unsigned __int8 v17; // si
  __int128 v18; // xmm1
  __int128 v19; // [rsp+30h] [rbp-50h] BYREF
  __int128 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int128 *v23; // [rsp+68h] [rbp-18h] BYREF
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]

  v19 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  result = (__int64)KeGetCurrentPrcb();
  v7 = *(_QWORD *)(result + 33576) + 16LL;
  v8 = *(_BYTE *)(*(_QWORD *)(result + 33576) + 272LL);
  if ( v8 )
  {
    v9 = *(_BYTE *)(*(_QWORD *)(result + 33576) + 272LL);
    while ( 1 )
    {
      result = 32LL * --v9;
      if ( *(_QWORD *)(result + v7 + 8) == a1 )
        break;
      if ( !v9 )
      {
        ++*(_DWORD *)(v7 + 264);
        return result;
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = 32LL * v9 + v7;
    if ( *(_BYTE *)(v7 + 257) )
      goto LABEL_20;
    if ( !EtwpSpinLockHoldThreshold
      || (result = (unsigned int)(a3 - *(_DWORD *)v11), (unsigned int)result <= EtwpSpinLockHoldThreshold) )
    {
      v12 = *(_DWORD *)(v11 + 20);
      if ( v12 < EtwpSpinLockSpinThreshold
        || (result = CurrentPrcb->SynchCounters.SpinLockContentionCount / EtwpSpinLockContentionSampleRate,
            CurrentPrcb->SynchCounters.SpinLockContentionCount % EtwpSpinLockContentionSampleRate) )
      {
        if ( v12 )
          goto LABEL_20;
        result = (CurrentPrcb->SynchCounters.SpinLockAcquireCount - CurrentPrcb->SynchCounters.SpinLockContentionCount)
               / EtwpSpinLockAcquireSampleRate;
        if ( (CurrentPrcb->SynchCounters.SpinLockAcquireCount - CurrentPrcb->SynchCounters.SpinLockContentionCount)
           % EtwpSpinLockAcquireSampleRate )
        {
          goto LABEL_20;
        }
      }
    }
    NestingLevel = CurrentPrcb->NestingLevel;
    *(_BYTE *)(v7 + 257) = 1;
    *(_QWORD *)&v19 = a1;
    *((_QWORD *)&v19 + 1) = a2;
    *((_QWORD *)&v20 + 1) = a3;
    DWORD2(v21) = KeGetCurrentThread()[1].CurrentRunTime;
    BYTE1(v22) = v8;
    CurrentIrql = KeGetCurrentIrql();
    LOBYTE(v22) = CurrentIrql;
    *(_QWORD *)&v20 = *(_QWORD *)v11;
    *(_QWORD *)&v21 = *(_QWORD *)(v11 + 16);
    HIDWORD(v21) = CurrentPrcb->InterruptCount - *(_DWORD *)(v11 + 24);
    v15 = *(_BYTE *)(v11 + 28);
    BYTE2(v22) = v15;
    if ( NestingLevel == 1 )
    {
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v16 = v15 | 0x40;
LABEL_18:
        BYTE2(v22) = v16;
        goto LABEL_19;
      }
    }
    else if ( !NestingLevel )
    {
LABEL_19:
      v25 = 0;
      v23 = &v19;
      v24 = 56;
      result = EtwTraceKernelEvent((int)&v23, 1, 0x20010000u, 1321, 1538);
      *(_BYTE *)(v7 + 257) = 0;
LABEL_20:
      v17 = v8 - 1;
      while ( v9 < v17 )
      {
        result = 32 * ++v9;
        v18 = *(_OWORD *)(result + v7 + 16);
        *(_OWORD *)v11 = *(_OWORD *)(result + v7);
        *(_OWORD *)(v11 + 16) = v18;
        v11 += 32LL;
      }
      --*(_BYTE *)(v7 + 256);
      return result;
    }
    v16 = v15 | 0x80;
    goto LABEL_18;
  }
  return result;
}
