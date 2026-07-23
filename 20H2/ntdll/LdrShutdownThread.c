/*
 * XREFs of LdrShutdownThread @ 0x180017450
 * Callers:
 *     RtlExitUserThread @ 0x180054640 (RtlExitUserThread.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800199BC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18003E6A4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E704 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x18005D97C (LdrpDropLastInProgressCount.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18005DDC4 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     LdrpDrainWorkQueue @ 0x18005EA04 (LdrpDrainWorkQueue.c)
 *     TpTrimPools @ 0x180063CE0 (TpTrimPools.c)
 *     LdrpFreeTls @ 0x1800704B8 (LdrpFreeTls.c)
 *     RtlFreeThreadActivationContextStack @ 0x1800708C0 (RtlFreeThreadActivationContextStack.c)
 */

void __noreturn LdrShutdownThread(void)
{
  __int64 v0; // rdx
  struct _RTLP_FLS_CONTEXT *v1; // rcx
  struct _TEB *v2; // rbx
  struct _PEB *v3; // r13
  struct _RTLP_FLS_DATA *FlsData; // r14
  char v5; // si
  __int64 v6; // rcx
  __int64 *v7; // r15
  __int64 *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  void **TlsExpansionSlots; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *FiberData; // r8
  __int64 v16; // [rsp+30h] [rbp-C8h] BYREF
  int v17; // [rsp+38h] [rbp-C0h]
  __int128 v18; // [rsp+40h] [rbp-B8h]
  __int128 v19; // [rsp+50h] [rbp-A8h]
  __int128 v20; // [rsp+60h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-88h]
  __int64 v22; // [rsp+80h] [rbp-78h] BYREF
  int v23; // [rsp+88h] [rbp-70h]
  __int128 v24; // [rsp+90h] [rbp-68h]
  __int128 v25; // [rsp+A0h] [rbp-58h]
  __int128 v26; // [rsp+B0h] [rbp-48h]
  __int64 v27; // [rsp+C0h] [rbp-38h]

  v2 = NtCurrentTeb();
  v3 = NtCurrentPeb();
  FlsData = (struct _RTLP_FLS_DATA *)v2->FlsData;
  if ( FlsData )
    RtlpFlsDataCleanup(v1, (struct _RTLP_FLS_DATA *)v2->FlsData, 1u);
  if ( ((NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0)
    && (v2->SameTebFlags & 0x2000) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v5 = 1;
    }
    else
    {
      v5 = 0;
      LdrpDrainWorkQueue(0LL);
    }
    LdrpAcquireLoaderLock();
    v7 = (__int64 *)qword_18016C4F8;
    while ( v7 != &qword_18016C4F0 )
    {
      v8 = v7 - 4;
      v7 = (__int64 *)v7[1];
      v6 = *((unsigned int *)v8 + 26);
      if ( v3->ImageBaseAddress != (void *)v8[6] && (v6 & 0x40000) == 0 )
      {
        v9 = v8[7];
        if ( v9 )
        {
          v6 &= 0x80004u;
          if ( (_DWORD)v6 == 524292 )
          {
            v16 = 72LL;
            v17 = 1;
            v18 = 0LL;
            v19 = 0LL;
            v20 = 0LL;
            v21 = 0LL;
            RtlActivateActivationContextUnsafeFast(&v16, v8[17]);
            if ( *((_WORD *)v8 + 55) )
              LdrpCallTlsInitializers(3LL, v8);
            LdrpCallInitRoutine(v9, v8[6], 3LL);
            RtlDeactivateActivationContextUnsafeFast(&v16);
          }
        }
      }
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v22 = 72LL;
      v23 = 1;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      RtlActivateActivationContextUnsafeFast(&v22, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(3LL, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast(&v22);
    }
    LdrpReleaseLoaderLock(v6, 19LL);
    if ( !v5 )
      LdrpDropLastInProgressCount(v11, v10);
    LdrpFreeTls(v11, v10);
  }
  if ( FlsData )
  {
    v2->FlsData = 0LL;
    RtlpFlsDataCleanup(v1, FlsData, 2u);
  }
  TlsExpansionSlots = v2->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v2->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&FastPebLock);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, TlsExpansionSlots);
  }
  if ( (v2->SameTebFlags & 4) != 0 )
  {
    FiberData = v2->NtTib.FiberData;
    v2->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack(v1, v0);
  if ( (v2->SameTebFlags & 0x400) != 0 && LdrInitState == 3 )
    TpTrimPools(v14, v13);
}
