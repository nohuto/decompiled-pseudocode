/*
 * XREFs of SepSetTokenClaims @ 0x1406A9EDC
 * Callers:
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     SepCompareClaimAttributes @ 0x1405E2598 (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x1406A9F58 (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140927818 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1, int a2, int a3, int a4, void *a5)
{
  char v6; // bp
  __int64 result; // rax
  unsigned int v8; // r14d
  PVOID v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rsi
  PVOID P; // [rsp+30h] [rbp-18h] BYREF

  P = 0LL;
  v6 = 0;
  result = SepCreateClaimAttributes((int)&P, a2, a3, a4, a5);
  v8 = result;
  if ( (int)result >= 0 )
  {
    v9 = P;
    if ( !P )
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
      return result;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 216) + 104LL, 0LL);
      v11 = *(_QWORD *)(a1 + 216);
      if ( !*(_QWORD *)(v11 + 112) )
      {
        v6 = 1;
        *(_QWORD *)(v11 + 112) = P;
        v11 = *(_QWORD *)(a1 + 216);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 104));
      KeAbPostRelease(v11 + 104);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v9 = P;
      if ( v6 )
        goto LABEL_13;
    }
    if ( SepCompareClaimAttributes((__int64)v9, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL)) )
    {
LABEL_13:
      *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
      if ( !v6 )
        SepDeleteClaimAttributes(v9);
    }
    else
    {
      *(_DWORD *)(a1 + 200) |= 0x8000u;
      *(_QWORD *)(a1 + 1096) = v9;
    }
  }
  return v8;
}
