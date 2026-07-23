/*
 * XREFs of SepSetTokenClaims @ 0x14062F74C
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     SepCreateClaimAttributes @ 0x14062F7C8 (SepCreateClaimAttributes.c)
 *     SepCompareClaimAttributes @ 0x1406E8BEC (SepCompareClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x1409217C0 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // bp
  __int64 result; // rax
  unsigned int v4; // r14d
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rsi
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  v2 = 0;
  result = SepCreateClaimAttributes(P);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = P[0];
    if ( !P[0] )
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
      return result;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 216) + 104LL, 0LL);
      v7 = *(_QWORD *)(a1 + 216);
      if ( !*(_QWORD *)(v7 + 112) )
      {
        v2 = 1;
        *(PVOID *)(v7 + 112) = P[0];
        v7 = *(_QWORD *)(a1 + 216);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 104));
      KeAbPostRelease(v7 + 104);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v5 = P[0];
      if ( v2 )
        goto LABEL_13;
    }
    if ( (unsigned __int8)SepCompareClaimAttributes(v5, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL)) )
    {
LABEL_13:
      *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
      if ( !v2 )
        SepDeleteClaimAttributes(v5);
    }
    else
    {
      *(_DWORD *)(a1 + 200) |= 0x8000u;
      *(_QWORD *)(a1 + 1096) = v5;
    }
  }
  return v4;
}
