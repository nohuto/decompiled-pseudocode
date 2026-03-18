/*
 * XREFs of SmKmCleanup @ 0x14092D784
 * Callers:
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140597A40 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall SmKmCleanup(__int64 a1)
{
  struct _PRIVILEGE_SET **v2; // rdi
  __int64 v3; // r15
  struct _PRIVILEGE_SET *v4; // rsi
  volatile signed __int64 *p_Attributes; // rbx
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r14

  v2 = (struct _PRIVILEGE_SET **)a1;
  v3 = 32LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      p_Attributes = (volatile signed __int64 *)&v4->Privilege[0].Attributes;
      v6 = 32LL;
      do
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)p_Attributes, 0LL);
        v8 = *((_QWORD *)p_Attributes - 2);
        if ( v8 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 256))(a1, *((_QWORD *)p_Attributes - 2), 7LL);
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)p_Attributes - 1);
        }
        else
        {
          *((_QWORD *)p_Attributes - 2) = -1LL;
        }
        if ( (_InterlockedExchangeAdd64(p_Attributes, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(p_Attributes);
        KeAbPostRelease((ULONG_PTR)p_Attributes);
        KeLeaveCriticalRegion();
        if ( v8 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 256))(a1, v8, 1LL);
        p_Attributes += 5;
        --v6;
      }
      while ( v6 );
      CmSiFreeMemory(v4);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}
