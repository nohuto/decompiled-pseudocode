/*
 * XREFs of ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0171C84
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01955E0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00DEBE0 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0138B18 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014AB30 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0171DEC (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0264DD0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::ApplyCoreSyncAction(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  PERESOURCE **v7; // rcx
  PERESOURCE **v8; // rdx
  ADAPTER_RENDER *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-38h] BYREF
  __int128 v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+38h] [rbp-20h]
  struct _TDR_RECOVERY_CONTEXT *v26; // [rsp+40h] [rbp-18h]

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v14 + 24) = 3682LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (int)v2 <= 0 )
    goto LABEL_19;
  if ( (int)v2 <= 3 )
  {
LABEL_5:
    v6 = *(_QWORD *)(a1 + 2704);
    if ( v6 )
      ADAPTER_RENDER::FlushScheduler(v6, 8, 0xFFFFFFFF, 0);
    v7 = *(PERESOURCE ***)(a1 + 2696);
    if ( v7 )
    {
      v8 = *(PERESOURCE ***)(a1 + 2704);
      if ( !v8 )
        v8 = 0LL;
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v7, v8);
    }
    v9 = *(ADAPTER_RENDER **)(a1 + 2704);
    if ( v9 )
    {
      ADAPTER_RENDER::DisablePinnedHardware(v9);
      if ( (_DWORD)v2 == 3 )
      {
        v10 = 32;
        if ( *(_DWORD *)(a1 + 160) != 1 )
          v10 = 4;
      }
      else
      {
        v10 = 2;
        if ( (_DWORD)v2 != 2 )
        {
          v17 = 0;
          if ( (_DWORD)v2 == 5 )
            v17 = 32;
          v10 = v17;
        }
      }
      v11 = v10 | (*(_BYTE *)(a1 + 207) != 0 ? 65 : 1);
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 2704), 9, 0xFFFFFFFF, 0);
      v12 = WdLogNewEntry5_WdPower();
      *(_QWORD *)(v12 + 24) = a1;
      *(_QWORD *)(v12 + 32) = *(unsigned __int8 *)(a1 + 2646);
      WdLogEvent5_WdPower(v12);
      ADAPTER_RENDER::PurgeSegments(*(struct _EX_RUNDOWN_REF **)(a1 + 2704), v11, 0LL);
      v13 = (_QWORD *)WdLogNewEntry5_WdPower();
      v13[3] = a1;
      v13[4] = *(unsigned __int8 *)(a1 + 2646);
      v13[5] = 3765LL;
      WdLogEvent5_WdPower(v13);
      if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)a1) && *(_BYTE *)(a1 + 2646) )
      {
        v26 = g_TdrRecoveryInProgress;
        v24 = 0LL;
        v23 = 0LL;
        v25 = 0LL;
        *((_QWORD *)g_TdrRecoveryInProgress + 362) = KeGetCurrentThread();
        TdrResetFromTimeoutWorkItem(&v23);
        v18 = WdLogNewEntry5_WdPower();
        *(_QWORD *)(v18 + 24) = a1;
        WdLogEvent5_WdPower(v18);
        ADAPTER_RENDER::PurgeSegments(*(struct _EX_RUNDOWN_REF **)(a1 + 2704), v11, 0LL);
        v19 = (_QWORD *)WdLogNewEntry5_WdPower();
        v19[3] = a1;
        v19[4] = *(unsigned __int8 *)(a1 + 2646);
        v19[5] = 3790LL;
        WdLogEvent5_WdPower(v19);
        if ( *(_BYTE *)(a1 + 2646) )
        {
          v22 = WdLogNewEntry5_WdAssertion(v21, v20);
          *(_QWORD *)(v22 + 24) = 3791LL;
          WdLogEvent5_WdAssertion(v22);
        }
      }
    }
    return;
  }
  if ( (_DWORD)v2 != 4 )
  {
    if ( (_DWORD)v2 == 5 )
      goto LABEL_5;
LABEL_19:
    v15 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v15 + 24) = v2;
    WdLogEvent5_WdError(v15);
    return;
  }
  v16 = *(_QWORD *)(a1 + 2704);
  if ( v16 )
    ADAPTER_RENDER::FlushScheduler(v16, 6, 0xFFFFFFFF, 0);
}
