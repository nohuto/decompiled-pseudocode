/*
 * XREFs of _LdrShutdownThread@0 @ 0x4B2CF610
 * Callers:
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 * Callees:
 *     ?RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z @ 0x4B2B4739 (-RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _RtlFreeThreadActivationContextStack@0 @ 0x4B2E4910 (_RtlFreeThreadActivationContextStack@0.c)
 *     _LdrpFreeTls@0 @ 0x4B2E6510 (_LdrpFreeTls@0.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TpTrimPools@0 @ 0x4B383ED0 (_TpTrimPools@0.c)
 */

void __noreturn LdrShutdownThread(void)
{
  struct _TEB *v0; // esi
  PVOID *FlsData; // edi
  int v2; // ecx
  int *i; // eax
  int *v4; // edx
  int v5; // eax
  int v6; // edi
  void **TlsExpansionSlots; // edi
  void *FiberData; // eax
  struct _RTLP_FLS_DATA *v9; // [esp+0h] [ebp-98h]
  unsigned int v10; // [esp+4h] [ebp-94h]
  int v11[9]; // [esp+14h] [ebp-84h] BYREF
  int v12[11]; // [esp+38h] [ebp-60h] BYREF
  int v13; // [esp+64h] [ebp-34h]
  int *v14; // [esp+68h] [ebp-30h]
  struct _PEB *v15; // [esp+6Ch] [ebp-2Ch]
  int v16; // [esp+70h] [ebp-28h]
  struct _TEB *v17; // [esp+74h] [ebp-24h]
  PVOID *v18; // [esp+78h] [ebp-20h]
  char v19; // [esp+7Fh] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+80h] [ebp-18h]

  v0 = NtCurrentTeb();
  v17 = v0;
  v15 = NtCurrentPeb();
  FlsData = (PVOID *)v0->FlsData;
  v18 = FlsData;
  if ( FlsData )
    RtlpFlsDataCleanup(FlsData, (struct _RTLP_FLS_CONTEXT *)1, v9, v10);
  if ( ((NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0)
    && (v0->SameTebFlags & 0x2000) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v19 = 1;
    }
    else
    {
      v19 = 0;
      LdrpDrainWorkQueue(0);
    }
    LdrpAcquireLoaderLock();
    ms_exc.registration.TryLevel = 0;
    for ( i = (int *)dword_4B3A5DA0; i != &dword_4B3A5D9C; i = (int *)v16 )
    {
      v4 = i - 4;
      v14 = i - 4;
      v16 = i[1];
      v12[10] = v16;
      v2 = i[9];
      if ( v15->ImageBaseAddress != (void *)i[2] && (v2 & 0x40000) == 0 )
      {
        v5 = v4[7];
        v13 = v5;
        if ( v5 )
        {
          v2 &= 0x80004u;
          if ( v2 == 524292 )
          {
            v12[9] = v5;
            v12[0] = 36;
            v12[1] = 1;
            memset(&v12[2], 0, 0x1Cu);
            RtlActivateActivationContextUnsafeFast(v12, v4[18]);
            ms_exc.registration.TryLevel = 1;
            v6 = (int)v14;
            if ( *((_WORD *)v14 + 29) )
              LdrpCallTlsInitializers(3, (int)v14);
            LdrpCallInitRoutine(v13, *(_DWORD *)(v6 + 24), 3, 0);
            ms_exc.registration.TryLevel = 0;
            FlsData = v18;
            RtlDeactivateActivationContextUnsafeFast(v12);
          }
        }
      }
    }
    if ( *(_WORD *)(LdrpImageEntry + 58) )
    {
      v11[0] = 36;
      v11[1] = 1;
      memset(&v11[2], 0, 0x1Cu);
      RtlActivateActivationContextUnsafeFast(v11, *(_DWORD *)(LdrpImageEntry + 72));
      ms_exc.registration.TryLevel = 2;
      LdrpCallTlsInitializers(3, LdrpImageEntry);
      ms_exc.registration.TryLevel = 0;
      FlsData = v18;
      RtlDeactivateActivationContextUnsafeFast(v11);
    }
    ms_exc.registration.TryLevel = -2;
    LdrpReleaseLoaderLock(0, v2);
    if ( !v19 )
      LdrpDropLastInProgressCount();
    LdrpFreeTls();
  }
  if ( FlsData )
  {
    v0->FlsData = 0;
    RtlpFlsDataCleanup(FlsData, (struct _RTLP_FLS_CONTEXT *)2, v9, v10);
  }
  TlsExpansionSlots = v0->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v0->TlsExpansionSlots = 0;
    RtlEnterCriticalSection(&FastPebLock);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, TlsExpansionSlots);
  }
  if ( (v0->SameTebFlags & 4) != 0 )
  {
    FiberData = v0->NtTib.FiberData;
    v0->NtTib.Version = 0;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack();
  if ( (v0->SameTebFlags & 0x400) != 0 && LdrInitState == 3 )
    TpTrimPools();
}
