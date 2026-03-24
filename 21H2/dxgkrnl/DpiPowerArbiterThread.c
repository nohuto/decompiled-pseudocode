/*
 * XREFs of DpiPowerArbiterThread @ 0x1C019D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C00046A0 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C00201F8 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0051C9C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0051F4C (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C0052068 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01217AC (DxgkReleaseAdapterCoreSync.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C0121ADC (DpiIsPowerRuntimeDStateTransition.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0121B10 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkShutdownBootGraphics @ 0x1C0144E70 (DxgkShutdownBootGraphics.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01776D4 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C0178E6C (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     MonitorAdapterPowerChange @ 0x1C0178F30 (MonitorAdapterPowerChange.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C020E26C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020F7B4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C02174B0 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkResumeMemorySegments @ 0x1C0217848 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C02178BC (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0269FA4 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C026C2D4 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 *     ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C02DBE2C (-DmmAdapterPowerChange@@YAJQEAXE@Z.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  bool v3; // zf
  void *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _LIST_ENTRY *PowerActionQueueEntry; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _LIST_ENTRY *v12; // r15
  int Blink; // ecx
  char v14; // r12
  int v15; // eax
  char v16; // r13
  bool v17; // bp
  bool v18; // bl
  PERESOURCE *v19; // rcx
  int v20; // r14d
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // r9
  int v29; // eax
  int v30; // edx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  _QWORD *v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  DXGADAPTER *v63; // rcx
  unsigned int v64; // edx
  int v65; // eax
  DXGGLOBAL *Global; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  char started; // al
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rax
  unsigned int v75; // edx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // ebp
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rbp
  _QWORD *v85; // rax

  v1 = StartContext[8];
  LODWORD(v2) = 0;
  v3 = *(_DWORD *)(v1 + 3976) == 7;
  *(_QWORD *)(v1 + 3952) = KeGetCurrentThread();
  if ( !v3 )
  {
    v4 = (void *)(v1 + 3928);
    while ( 1 )
    {
      v5 = KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      v2 = v5;
      if ( !v5 )
        break;
      v31 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v31 + 24) = v2;
      WdLogEvent5_WdError(v31);
LABEL_13:
      v4 = (void *)(v1 + 3928);
      if ( *(_DWORD *)(v1 + 3976) == 7 )
        goto LABEL_119;
    }
    while ( 1 )
    {
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      v12 = PowerActionQueueEntry;
      if ( !PowerActionQueueEntry )
        goto LABEL_13;
      Blink = (int)PowerActionQueueEntry[2].Blink;
      v14 = 0;
      v15 = (int)PowerActionQueueEntry[1].Blink;
      v16 = 0;
      LODWORD(v2) = 0;
      v17 = Blink != 64;
      if ( v15 == 1 )
      {
        if ( ((*(_DWORD *)(v1 + 3976) - 1) & 0xFFFFFFFD) != 0 )
        {
          DxgkShutdownBootGraphics(0LL, 0LL);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3792), 1u);
          ExReleaseResourceLite((PERESOURCE)(v1 + 3792));
          KeLeaveCriticalRegion();
          v24 = (int)v12[2].Blink;
          v25 = *(_QWORD *)(v1 + 3896);
          if ( (v24 & 0x40) != 0 )
          {
            DxgkAcquireAdapterCoreSync(v25, 4, v23);
            if ( (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v1 + 3896), 2LL) )
            {
              v69 = WdLogNewEntry5_WdPower();
              *(_QWORD *)(v69 + 24) = v1;
              *(_OWORD *)(v69 + 32) = 0LL;
              WdLogEvent5_WdPower(v69);
              goto LABEL_20;
            }
            v68 = WdLogNewEntry5_WdPower();
            *(_QWORD *)(v68 + 24) = v1;
            *(_OWORD *)(v68 + 32) = 0LL;
            WdLogEvent5_WdPower(v68);
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
            LODWORD(v2) = -1073741823;
          }
          else
          {
            v26 = 6;
            if ( (v24 & 0x98) == 0 )
              v26 = 3;
            DxgkAcquireAdapterCoreSync(v25, v26, v23);
LABEL_20:
            if ( *(_DWORD *)(v1 + 284) == 1 )
            {
              LOBYTE(v27) = 1;
              MonitorAdapterPowerChange(*(PERESOURCE **)(v1 + 3896), v27, (__int64)v12[5].Flink, v28);
              DmmAdapterPowerChange(*(void *const *)(v1 + 3896), 1u);
            }
            DmmResetModeState(*(PERESOURCE **)(v1 + 3896), 0xFFFFFFFFLL);
            v29 = (int)v12[2].Blink;
            if ( (v29 & 0x20) != 0 )
            {
              v30 = 4;
              goto LABEL_25;
            }
            if ( (v29 & 0x10) != 0 )
            {
              v30 = 3;
              goto LABEL_25;
            }
            if ( (v29 & 8) != 0 )
            {
              v30 = 2;
              goto LABEL_25;
            }
            if ( (v29 & 0x80u) != 0 )
            {
              v30 = 5;
              goto LABEL_25;
            }
            if ( (v29 & 0x40) != 0 )
            {
              v70 = (_QWORD *)WdLogNewEntry5_WdPower();
              v70[5] = 0LL;
              v70[3] = v1;
              v70[4] = 1LL;
              WdLogEvent5_WdPower(v70);
              if ( *(_BYTE *)(v1 + 5736) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD3, 1u);
              started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
              v73 = *(_QWORD *)(v1 + 3896);
              if ( started )
              {
                DXGADAPTER::ApplyCoreSyncAction(v73, 3);
                DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
                if ( *(_DWORD *)(v1 + 3976) == 1 )
                {
                  if ( *(_BYTE *)(v1 + 5736) )
                    DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD3, 0);
                  goto LABEL_26;
                }
                v74 = WdLogNewEntry5_WdPower();
                *(_QWORD *)(v74 + 24) = v1;
                *(_OWORD *)(v74 + 32) = 0LL;
                WdLogEvent5_WdPower(v74);
                v73 = *(_QWORD *)(v1 + 3896);
                v75 = 5;
              }
              else
              {
                v75 = 2;
              }
              DxgkReleaseAdapterCoreSync(v73, v75, v72);
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
              if ( *(_BYTE *)(v1 + 5736) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
            }
            else
            {
              v30 = 1;
LABEL_25:
              DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3896), v30);
LABEL_26:
              *(_DWORD *)(v1 + 3976) = 1;
            }
          }
          v18 = v17;
          goto LABEL_11;
        }
        v18 = Blink != 64;
        if ( !DpiIsPowerRuntimeDStateTransition(v1) )
          goto LABEL_11;
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v76, 5, 0);
        goto LABEL_10;
      }
      v18 = Blink != 64;
      if ( v15 == 2 )
      {
        if ( *(_DWORD *)(v1 + 3976) != 1 )
          goto LABEL_11;
        v19 = *(PERESOURCE **)(v1 + 3896);
        *(_DWORD *)(v1 + 3976) = 2;
        v20 = (int)v12[2].Blink;
        MonitorAdapterPowerChange(v19, 0LL, (__int64)v12[5].Flink, v11);
        if ( DpiIsPowerRuntimeDStateTransition(v1) )
        {
          if ( v20 != 64 )
          {
            v67 = WdLogNewEntry5_WdPower();
            *(_QWORD *)(v67 + 24) = v1;
            *(_OWORD *)(v67 + 32) = 0LL;
            WdLogEvent5_WdPower(v67);
            LODWORD(v12[4].Blink) = 0;
            v18 = 0;
            KeSetEvent((PRKEVENT)&v12[3], 0, 0);
            v12 = 0LL;
            if ( *(_BYTE *)(v1 + 5736) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
          }
        }
        LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v21);
        if ( DpiIsPowerRuntimeDStateTransition(v1) )
        {
          if ( v20 == 64 )
          {
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v22, 0, 0);
            if ( *(_BYTE *)(v1 + 5736) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
          }
          KeSetEvent((PRKEVENT)(v1 + 4088), 0, 0);
          DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
        }
        goto LABEL_10;
      }
      if ( v15 <= 2 )
        goto LABEL_11;
      if ( v15 <= 4 )
      {
        if ( *(_DWORD *)(v1 + 3976) == 3 || (v63 = *(DXGADAPTER **)(v1 + 3896)) == 0LL )
        {
          *(_DWORD *)(v1 + 3976) = 3;
        }
        else
        {
          if ( v15 == 4 )
          {
            KeClearEvent((PRKEVENT)(v1 + 4112));
            LODWORD(v12[4].Blink) = 0;
            v18 = 0;
            KeSetEvent((PRKEVENT)&v12[3], 0, 0);
            v63 = *(DXGADAPTER **)(v1 + 3896);
            v12 = 0LL;
          }
          if ( v63 )
          {
            DXGADAPTER::PrepareToRemove(v63);
            v63 = *(DXGADAPTER **)(v1 + 3896);
          }
          if ( *(_QWORD *)(v1 + 488) )
          {
            KeSetEvent((PRKEVENT)(v1 + 4088), 0, 0);
            PoFxUnregisterDevice(*(_QWORD *)(v1 + 488));
            *(_QWORD *)(*(_QWORD *)(v1 + 3896) + 2808LL) = 0LL;
            v63 = *(DXGADAPTER **)(v1 + 3896);
            *(_QWORD *)(v1 + 488) = 0LL;
          }
          if ( *(_DWORD *)(v1 + 3976) == 1 )
          {
            v64 = 5;
            if ( (*(_BYTE *)(v1 + 3904) & 0x18) == 0 && *(_BYTE *)(v1 + 1160) )
              v64 = 2;
            v65 = DxgkReleaseAdapterCoreSync((__int64)v63, v64, v10);
            v63 = *(DXGADAPTER **)(v1 + 3896);
            LODWORD(v2) = v65;
          }
          LOBYTE(v9) = *(_BYTE *)(v1 + 1160);
          if ( v63 && *((_DWORD *)v63 + 50) != 2 && *((_DWORD *)v63 + 50) != 4 )
            DXGADAPTER::Stop(v63, v9, *(_BYTE *)(v1 + 1161));
          Global = DXGGLOBAL::GetGlobal((__int64)v63, v9);
          DXGGLOBAL::NotifyAdapterRemoval(Global);
          *(_DWORD *)(v1 + 3976) = 3;
          KeSetEvent((PRKEVENT)(v1 + 4112), 0, 0);
        }
        goto LABEL_10;
      }
      if ( v15 != 5 )
      {
        if ( v15 == 6 )
        {
          v32 = *(_DWORD *)(v1 + 3980);
          if ( (v32 & 4) != 0 )
          {
            v33 = *(_QWORD *)(v1 + 2880);
            *(_DWORD *)(v1 + 3980) = v32 & 0xFFFFFFFB;
            v34 = (*(__int64 (__fastcall **)(__int64))(v1 + 2912))(v33);
            v37 = v34;
            if ( v34 < 0 )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35);
              v38[3] = 275LL;
              v38[4] = 21LL;
              v38[5] = *(_QWORD *)(v1 + 2912);
              v38[6] = v37;
              WdLogEvent5_WdCriticalError(v38);
            }
          }
          v39 = *(_DWORD *)(v1 + 3980);
          v40 = *(_QWORD *)(v1 + 3896);
          if ( (v39 & 1) != 0 )
          {
            *(_DWORD *)(v1 + 3980) = v39 & 0xFFFFFFFE;
            v41 = DxgkReleaseAdapterCoreSync(v40, 5u, v10);
            v2 = v41;
            if ( v41 < 0 )
            {
              v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v42);
              v44[3] = 275LL;
              v44[4] = 21LL;
              v44[5] = v2;
              WdLogEvent5_WdCriticalError(v44);
            }
          }
          else
          {
            LODWORD(v2) = DxgkResumeMemorySegments(v40);
            if ( (int)v2 < 0 )
            {
              v47 = WdLogNewEntry5_WdError(v46, v45);
              *(_QWORD *)(v47 + 24) = (int)v2;
              WdLogEvent5_WdError(v47);
            }
            if ( (*(_DWORD *)(v1 + 3980) & 2) == 0
              && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 2u, v10) < 0 )
            {
              v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49, v48);
              v50[3] = 275LL;
              v50[4] = 21LL;
              v50[5] = (int)v2;
              WdLogEvent5_WdCriticalError(v50);
            }
            *(_DWORD *)(v1 + 3980) &= ~2u;
          }
          *(_DWORD *)(v1 + 3976) = 6;
          v18 = v17;
        }
        else
        {
          if ( v15 != 7 )
            goto LABEL_11;
          if ( *(_DWORD *)(v1 + 3976) == 1 )
            LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v10);
          *(_DWORD *)(v1 + 3976) = 7;
        }
        goto LABEL_10;
      }
      if ( (Blink & 1) != 0 )
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3896), 3, v10);
        DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3896), 1);
      }
      else
      {
        if ( (Blink & 2) != 0 )
          goto LABEL_54;
        v56 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3896), 2, v10);
        v2 = v56;
        if ( v56 < 0 )
        {
          v59 = WdLogNewEntry5_WdError(v58, v57);
          *(_QWORD *)(v59 + 24) = v2;
LABEL_61:
          WdLogEvent5_WdError(v59);
          goto LABEL_10;
        }
      }
      v14 = 1;
LABEL_54:
      v51 = (int)v12[2].Blink;
      if ( (v51 & 1) == 0 )
      {
        v52 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 3896));
        v2 = v52;
        if ( v52 < 0 )
        {
          v55 = WdLogNewEntry5_WdWarning(v54, v53, v10);
          *(_QWORD *)(v55 + 24) = v2;
          WdLogEvent5_WdWarning(v55);
          goto LABEL_10;
        }
        v51 = (int)v12[2].Blink;
        v16 = 1;
      }
      if ( (v51 & 4) != 0 )
      {
        v60 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 2904))(*(_QWORD *)(v1 + 2880));
        v2 = v60;
        if ( v60 < 0 )
        {
          v59 = WdLogNewEntry5_WdError(v62, v61);
          *(_QWORD *)(v59 + 24) = *(_QWORD *)(v1 + 2904);
          *(_QWORD *)(v59 + 32) = v2;
          goto LABEL_61;
        }
      }
      *(_DWORD *)(v1 + 3976) = 5;
      *(_DWORD *)(v1 + 3980) |= LODWORD(v12[2].Blink);
LABEL_10:
      if ( (int)v2 < 0 )
      {
        if ( v16 == 1 )
        {
          v79 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 3896));
          if ( v79 < 0 )
          {
            v80 = WdLogNewEntry5_WdError(v78, v77);
            *(_QWORD *)(v80 + 24) = (int)v2;
            WdLogEvent5_WdError(v80);
            LODWORD(v2) = v79;
          }
        }
        if ( v14 == 1 )
        {
          v81 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v10);
          v84 = v81;
          if ( v81 < 0 )
          {
            v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v83, v82);
            v85[3] = 275LL;
            v85[4] = 21LL;
            v85[5] = v84;
            WdLogEvent5_WdCriticalError(v85);
          }
        }
      }
LABEL_11:
      if ( v18 )
      {
        LODWORD(v12[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&v12[3], 0, 0);
      }
    }
  }
LABEL_119:
  PsTerminateSystemThread(v2);
}
