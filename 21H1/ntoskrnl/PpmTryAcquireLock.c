/*
 * XREFs of PpmTryAcquireLock @ 0x14037AFB8
 * Callers:
 *     PoLatencySensitivityHint @ 0x14037AE20 (PoLatencySensitivityHint.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

char __fastcall PpmTryAcquireLock(LARGE_INTEGER a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KTHREAD *v7; // rcx
  LARGE_INTEGER v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = 0;
  v9.QuadPart = 0LL;
  v3 = KeWaitForSingleObject(&word_140C23BC8, Executive, 0, 0, &v9);
  v7 = KeGetCurrentThread();
  if ( v3 )
  {
    KiLeaveGuardedRegionUnsafe((__int64)v7, v4, v5, v6);
  }
  else
  {
    v2 = 1;
    PpmPerfPolicyLock = (__int64)v7;
  }
  return v2;
}
