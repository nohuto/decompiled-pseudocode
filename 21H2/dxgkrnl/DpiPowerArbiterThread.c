/*
 * XREFs of DpiPowerArbiterThread @ 0x1C0217840
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C000BBF0 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0023E3C (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C0023EE8 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0024370 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C0024668 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01B4124 (DxgkReleaseAdapterCoreSync.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C01B45A0 (DpiIsPowerRuntimeDStateTransition.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01B45E8 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkShutdownBootGraphics @ 0x1C01C2340 (DxgkShutdownBootGraphics.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01EF9A0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C01F2A88 (-DmmAdapterPowerChange@@YAJQEAXE@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01F2B3C (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     MonitorAdapterPowerChange @ 0x1C01F2BB8 (MonitorAdapterPowerChange.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C01F2EAC (DxgkIsAdapterCoreSyncAcquired.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C02BCB2C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BE1F8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkResumeMemorySegments @ 0x1C02C5480 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C02C58A8 (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C030AB20 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C030D504 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  NTSTATUS v2; // esi
  bool v3; // zf
  void *v4; // rax
  NTSTATUS v5; // eax
  struct _LIST_ENTRY *PowerActionQueueEntry; // rax
  __int64 v7; // r8
  struct _LIST_ENTRY *v8; // r15
  int Blink; // ecx
  char v10; // r12
  int v11; // eax
  char v12; // r13
  bool v13; // bp
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  char started; // al
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // bl
  PERESOURCE *v23; // rcx
  int v24; // r14d
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // edx
  int v28; // edx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rbx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // ebp
  int v42; // eax
  DXGADAPTER *v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // edx
  NTSTATUS v46; // eax
  DXGGLOBAL *Global; // rax
  unsigned int v48; // edx
  __int64 v49; // rcx

  v1 = StartContext[8];
  v2 = 0;
  v3 = *(_DWORD *)(v1 + 3984) == 7;
  *(_QWORD *)(v1 + 3960) = KeGetCurrentThread();
  if ( !v3 )
  {
    v4 = (void *)(v1 + 3936);
    while ( 1 )
    {
      v5 = KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      v2 = v5;
      if ( !v5 )
        break;
      WdLogSingleEntry1(2LL, v5);
LABEL_25:
      v4 = (void *)(v1 + 3936);
      if ( *(_DWORD *)(v1 + 3984) == 7 )
        goto LABEL_117;
    }
    while ( 1 )
    {
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      v8 = PowerActionQueueEntry;
      if ( !PowerActionQueueEntry )
        goto LABEL_25;
      Blink = (int)PowerActionQueueEntry[2].Blink;
      v10 = 0;
      v11 = (int)PowerActionQueueEntry[1].Blink;
      v12 = 0;
      v2 = 0;
      v13 = Blink != 64;
      if ( v11 != 1 )
        break;
      if ( ((*(_DWORD *)(v1 + 3984) - 1) & 0xFFFFFFFD) != 0 )
      {
        DxgkShutdownBootGraphics(0LL, 0);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3792), 1u);
        ExReleaseResourceLite((PERESOURCE)(v1 + 3792));
        KeLeaveCriticalRegion();
        v15 = (int)v8[2].Blink;
        v16 = *(_QWORD *)(v1 + 3896);
        if ( (v15 & 0x40) != 0 )
        {
          DxgkAcquireAdapterCoreSync(v16, 4, v14);
          if ( DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v1 + 3896), 2) )
          {
            WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
            goto LABEL_10;
          }
          WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
          v2 = -1073741823;
LABEL_24:
          v22 = v13;
          goto LABEL_33;
        }
        v27 = 6;
        if ( (v15 & 0x98) == 0 )
          v27 = 3;
        DxgkAcquireAdapterCoreSync(v16, v27, v14);
LABEL_10:
        if ( *(_DWORD *)(v1 + 284) == 1 )
        {
          LOBYTE(v17) = 1;
          MonitorAdapterPowerChange(*(PERESOURCE **)(v1 + 3896), v17, (__int64)v8[5].Flink);
          DmmAdapterPowerChange(*(PERESOURCE **)(v1 + 3896), 1);
        }
        DmmResetModeState(*(PERESOURCE **)(v1 + 3896), -1);
        v18 = (int)v8[2].Blink;
        if ( (v18 & 0x20) != 0 )
        {
          v28 = 4;
        }
        else if ( (v18 & 0x10) != 0 )
        {
          v28 = 3;
        }
        else if ( (v18 & 8) != 0 )
        {
          v28 = 2;
        }
        else if ( (v18 & 0x80u) != 0 )
        {
          v28 = 5;
        }
        else
        {
          if ( (v18 & 0x40) != 0 )
          {
            WdLogSingleEntry3(9LL, v1, 1LL, 0LL);
            if ( *(_BYTE *)(v1 + 5664) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD3, 1u);
            started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
            v21 = *(_QWORD *)(v1 + 3896);
            if ( started )
            {
              DXGADAPTER::ApplyCoreSyncAction(v21, 3);
              DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
              if ( *(_DWORD *)(v1 + 3984) == 1 )
              {
                if ( *(_BYTE *)(v1 + 5664) )
                  DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD3, 0);
                goto LABEL_23;
              }
              WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
              v21 = *(_QWORD *)(v1 + 3896);
              v48 = 5;
            }
            else
            {
              v48 = 2;
            }
            DxgkReleaseAdapterCoreSync(v21, v48, v20);
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
            if ( *(_BYTE *)(v1 + 5664) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
            goto LABEL_24;
          }
          v28 = 1;
        }
        DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3896), v28);
LABEL_23:
        *(_DWORD *)(v1 + 3984) = 1;
        goto LABEL_24;
      }
      v22 = Blink != 64;
      if ( DpiIsPowerRuntimeDStateTransition(v1) )
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v49, 5, 0);
LABEL_33:
      if ( v22 )
      {
        LODWORD(v8[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&v8[3], 0, 0);
      }
    }
    v22 = Blink != 64;
    if ( v11 == 2 )
    {
      if ( *(_DWORD *)(v1 + 3984) != 1 )
        goto LABEL_33;
      v23 = *(PERESOURCE **)(v1 + 3896);
      *(_DWORD *)(v1 + 3984) = 2;
      v24 = (int)v8[2].Blink;
      MonitorAdapterPowerChange(v23, 0LL, (__int64)v8[5].Flink);
      if ( DpiIsPowerRuntimeDStateTransition(v1) )
      {
        if ( v24 != 64 )
        {
          WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
          LODWORD(v8[4].Blink) = 0;
          v22 = 0;
          KeSetEvent((PRKEVENT)&v8[3], 0, 0);
          v8 = 0LL;
          if ( *(_BYTE *)(v1 + 5664) )
            DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
        }
      }
      v2 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v25);
      if ( DpiIsPowerRuntimeDStateTransition(v1) )
      {
        if ( v24 == 64 )
        {
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v26, 0, 0);
          if ( *(_BYTE *)(v1 + 5664) )
            DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
        }
        KeSetEvent((PRKEVENT)(v1 + 4096), 0, 0);
        DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
      }
      goto LABEL_32;
    }
    if ( v11 <= 2 )
      goto LABEL_33;
    if ( v11 <= 4 )
    {
      if ( *(_DWORD *)(v1 + 3984) == 3 || (v43 = *(DXGADAPTER **)(v1 + 3896)) == 0LL )
      {
        *(_DWORD *)(v1 + 3984) = 3;
      }
      else
      {
        if ( v11 != 4
          || (KeClearEvent((PRKEVENT)(v1 + 4120)),
              LODWORD(v8[4].Blink) = 0,
              KeSetEvent((PRKEVENT)&v8[3], 0, 0),
              v43 = *(DXGADAPTER **)(v1 + 3896),
              v8 = 0LL,
              v22 = 0,
              v43) )
        {
          DXGADAPTER::PrepareToRemove(v43);
          v43 = *(DXGADAPTER **)(v1 + 3896);
        }
        if ( *(_QWORD *)(v1 + 488) )
        {
          KeSetEvent((PRKEVENT)(v1 + 4096), 0, 0);
          PoFxUnregisterDevice(*(_QWORD *)(v1 + 488));
          *(_QWORD *)(*(_QWORD *)(v1 + 3896) + 2904LL) = 0LL;
          v43 = *(DXGADAPTER **)(v1 + 3896);
          *(_QWORD *)(v1 + 488) = 0LL;
        }
        if ( *(_DWORD *)(v1 + 3984) == 1 )
        {
          v45 = 5;
          if ( (*(_BYTE *)(v1 + 3904) & 0x18) == 0 && *(_BYTE *)(v1 + 1161) )
            v45 = 2;
          v46 = DxgkReleaseAdapterCoreSync((__int64)v43, v45, v44);
          v43 = *(DXGADAPTER **)(v1 + 3896);
          v2 = v46;
        }
        if ( v43 && *((_DWORD *)v43 + 50) != 2 && *((_DWORD *)v43 + 50) != 4 )
          DXGADAPTER::Stop(v43, *(_BYTE *)(v1 + 1161), *(_BYTE *)(v1 + 1162));
        Global = DXGGLOBAL_GetGlobal();
        DXGGLOBAL::NotifyAdapterRemoval(Global);
        *(_DWORD *)(v1 + 3984) = 3;
        KeSetEvent((PRKEVENT)(v1 + 4120), 0, 0);
      }
      goto LABEL_32;
    }
    if ( v11 != 5 )
    {
      if ( v11 == 6 )
      {
        v29 = *(_DWORD *)(v1 + 3988);
        if ( (v29 & 4) != 0 )
        {
          v30 = *(_QWORD *)(v1 + 2880);
          *(_DWORD *)(v1 + 3988) = v29 & 0xFFFFFFFB;
          v31 = (*(__int64 (__fastcall **)(__int64))(v1 + 2912))(v30);
          if ( v31 < 0 )
            WdLogSingleEntry4(0LL, 275LL, 21LL, *(_QWORD *)(v1 + 2912), v31);
        }
        v32 = *(_DWORD *)(v1 + 3988);
        v33 = *(_QWORD *)(v1 + 3896);
        if ( (v32 & 1) != 0 )
        {
          *(_DWORD *)(v1 + 3988) = v32 & 0xFFFFFFFE;
          v34 = DxgkReleaseAdapterCoreSync(v33, 5u, v7);
          v2 = v34;
          if ( v34 < 0 )
            WdLogSingleEntry3(0LL, 275LL, 21LL, v34);
        }
        else
        {
          v35 = DxgkResumeMemorySegments(v33);
          v2 = v35;
          v36 = v35;
          if ( v35 < 0 )
            WdLogSingleEntry1(2LL, v35);
          if ( (*(_DWORD *)(v1 + 3988) & 2) == 0 && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 2u, v7) < 0 )
            WdLogSingleEntry3(0LL, 275LL, 21LL, v36);
          *(_DWORD *)(v1 + 3988) &= ~2u;
        }
        *(_DWORD *)(v1 + 3984) = 6;
        v22 = v13;
      }
      else
      {
        if ( v11 != 7 )
          goto LABEL_33;
        if ( *(_DWORD *)(v1 + 3984) == 1 )
          v2 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v7);
        *(_DWORD *)(v1 + 3984) = 7;
      }
      goto LABEL_32;
    }
    if ( (Blink & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3896), 3, v7);
      DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3896), 1);
    }
    else
    {
      if ( (Blink & 2) != 0 )
        goto LABEL_70;
      v39 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3896), 2, v7);
      v2 = v39;
      if ( v39 < 0 )
      {
        WdLogSingleEntry1(2LL, v39);
        goto LABEL_33;
      }
    }
    v10 = 1;
LABEL_70:
    v37 = (int)v8[2].Blink;
    if ( (v37 & 1) == 0 )
    {
      v38 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 3896));
      v2 = v38;
      if ( v38 < 0 )
      {
        WdLogSingleEntry1(3LL, v38);
LABEL_83:
        if ( v10 == 1 )
        {
          v42 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v7);
          if ( v42 < 0 )
            WdLogSingleEntry3(0LL, 275LL, 21LL, v42);
        }
        goto LABEL_33;
      }
      v37 = (int)v8[2].Blink;
      v12 = 1;
    }
    if ( (v37 & 4) != 0 )
    {
      v40 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 2904))(*(_QWORD *)(v1 + 2880));
      v2 = v40;
      if ( v40 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 2904), v40);
LABEL_80:
        if ( v12 == 1 )
        {
          v41 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 3896));
          if ( v41 < 0 )
          {
            WdLogSingleEntry1(2LL, v2);
            v2 = v41;
          }
        }
        goto LABEL_83;
      }
    }
    *(_DWORD *)(v1 + 3984) = 5;
    *(_DWORD *)(v1 + 3988) |= LODWORD(v8[2].Blink);
LABEL_32:
    if ( v2 >= 0 )
      goto LABEL_33;
    goto LABEL_80;
  }
LABEL_117:
  PsTerminateSystemThread(v2);
}
