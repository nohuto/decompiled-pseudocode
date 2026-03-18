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
    if ( (unsigned __int8)SepCompareClaimAttributes(v9, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL)) )
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
