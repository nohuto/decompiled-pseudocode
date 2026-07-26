/*
 * XREFs of ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01210CC
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139BB8 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeTimer @ 0x1C0023420 (NdisInitializeTimer.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C002CC70 (NdisNblTrackerRegisterComponent.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A57F4 (-ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120D54 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120E54 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120FE0 (-ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSelectiveSuspendInitialize(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  struct _NDIS_SELECTIVE_SUSPEND *PoolWithTag; // rax
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  _OWORD *v5; // rax
  __int64 v6; // rax

  if ( (a1->Flags & 0x80u) != 0
    || (DriverHandle = a1->DriverHandle, DriverHandle->IdleNotificationHandler)
    && DriverHandle->CancelIdleNotificationHandler )
  {
    PoolWithTag = (struct _NDIS_SELECTIVE_SUSPEND *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x650uLL, 0x7373444Eu);
    a1->SelectiveSuspend = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x650uLL);
      SelectiveSuspend = a1->SelectiveSuspend;
      ndisNicAutoPowerSaverResetTelemetryData(a1);
      v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x7373444Eu);
      *((_QWORD *)SelectiveSuspend + 75) = v5;
      if ( v5 )
      {
        *v5 = xmmword_1C00D2B90;
        v5[1] = xmmword_1C00D2BA0;
        v5[2] = xmmword_1C00D2BB0;
        v5[3] = xmmword_1C00D2BC0;
        v5[4] = xmmword_1C00D2BD0;
        v5[5] = xmmword_1C00D2BE0;
        v5[6] = xmmword_1C00D2BF0;
        *((_QWORD *)v5 + 14) = 0LL;
        *((_QWORD *)SelectiveSuspend + 68) = 0LL;
        *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
        *((_QWORD *)SelectiveSuspend + 70) = 0LL;
        *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
        *((_QWORD *)SelectiveSuspend + 74) = (char *)SelectiveSuspend + 584;
        *((_QWORD *)SelectiveSuspend + 73) = (char *)SelectiveSuspend + 584;
        ndisReadSSTimeoutKeywords(a1);
        if ( (a1->PMHardwareCapabilities.Flags & 2) == 0 && (a1->PMAdminConfig.Value & 0xC000) != 0 )
          ndisReadNicAutoPowerSaverTimeoutKeywords(a1);
        KeInitializeSpinLock((PKSPIN_LOCK)SelectiveSuspend);
        NdisInitializeTimer((PNDIS_TIMER)((char *)SelectiveSuspend + 16), (PNDIS_TIMER_FUNCTION)ndisSSIdleTimerDpc, a1);
        *((_QWORD *)SelectiveSuspend + 37) = a1;
        *((_QWORD *)SelectiveSuspend + 38) = ndisSSIdleTimerWorkItem;
        *((_QWORD *)SelectiveSuspend + 47) = a1;
        *((_QWORD *)SelectiveSuspend + 48) = ndisIdleCancelWorkItem;
        *((_QWORD *)SelectiveSuspend + 57) = 0LL;
        *((_QWORD *)SelectiveSuspend + 59) = ndisSetPowerResumeCompleteWorkItem;
        *((_QWORD *)SelectiveSuspend + 60) = (char *)SelectiveSuspend + 456;
        KeInitializeEvent((PRKEVENT)((char *)SelectiveSuspend + 152), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)SelectiveSuspend + 200), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)SelectiveSuspend + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)SelectiveSuspend + 176), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)SelectiveSuspend + 224), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)SelectiveSuspend + 272), NotificationEvent, 1u);
        *((_QWORD *)SelectiveSuspend + 76) = NdisNblTrackerRegisterComponent(
                                               4,
                                               (__int64)a1,
                                               (__int64)a1->pAdapterInstanceName);
        *((_QWORD *)SelectiveSuspend + 77) = NdisNblTrackerRegisterComponent(
                                               5,
                                               (__int64)a1,
                                               (__int64)a1->pAdapterInstanceName);
        v6 = MEMORY[0xFFFFF78000000014];
        *((_DWORD *)SelectiveSuspend + 126) |= 0x200u;
        *((_DWORD *)SelectiveSuspend + 127) |= 0x100u;
        *((_QWORD *)SelectiveSuspend + 82) = v6;
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xFu,
            0xBu,
            (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
            a1);
        ndisSelectiveSuspendFree(a1);
      }
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0xAu,
        (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
        a1);
    }
  }
}
