/*
 * XREFs of ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A74A8
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005BC48 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00A62E0 (-ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017980 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B6C (WPP_RECORDER_SF_Lq.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C003D968 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ql @ 0x1C0061EB8 (WPP_RECORDER_SF_ql_ea_1C0061EB8.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C0083AB8 (McTemplateK0qq_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00A3E6C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A506C (-ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A5794 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A7390 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2, int a3, int a4)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  char v5; // bp
  int v6; // r14d
  KIRQL v9; // r15
  int v10; // r12d
  __int64 v11; // rdx
  unsigned int v12; // r14d
  int *v13; // rcx
  KIRQL v14; // al
  KIRQL v15; // bl
  int v16; // edx
  int *v17; // rcx
  bool v18; // bl
  struct _GUID *v19; // [rsp+20h] [rbp-48h]

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = 0;
  v6 = a2;
  if ( a2 || (a1->PMHardwareCapabilities.Flags & 4) == 0 )
    goto LABEL_7;
  if ( ndisIsScreenOnNapsEnabled )
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_ScreenON_NAPS__private_reporting,
      0xF558F8u,
      a3,
      a4,
      &Feature_ScreenON_NAPS_logged_traits);
  if ( ndisShouldEngageNicAutoPowerSaver(a1) )
  {
LABEL_7:
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x404) != 0 || !ndisReferenceMiniport(a1, 0x15u) )
    {
      v18 = (*((_DWORD *)SelectiveSuspend + 126) & 4) != 0;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v9);
      return v18 ? 259 : -1073676271;
    }
    else
    {
      v10 = v6;
      *((_DWORD *)SelectiveSuspend + 126) = *((_DWORD *)SelectiveSuspend + 126) ^ (*((_DWORD *)SelectiveSuspend + 126) ^ (v6 << 8)) & 0x100 | 4;
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 200));
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 224));
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v9);
      ndisLogMiniportEvent(a1, NdisMEvent_SSIdleReq);
      LOBYTE(v11) = v6;
      v12 = a1->DriverHandle->IdleNotificationHandler(a1->MiniportAdapterContext, v11);
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 224), 0, 0);
      if ( v12 == 259 )
      {
        v17 = &WPP_RECORDER_INITIALIZED;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xFu,
            0xEu,
            (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
            (char)a1,
            v10);
        if ( (byte_1C00E6081 & 8) != 0 )
          McTemplateK0q_EtwWriteTransfer(
            (__int64)v17,
            &SSIdleDetected,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF);
        ndisClearIdleTimer(a1);
        return 259LL;
      }
      else
      {
        v13 = &WPP_RECORDER_INITIALIZED;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xFu,
            0xDu,
            (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
            v12,
            a1);
        if ( (byte_1C00E6081 & 8) != 0 )
        {
          LODWORD(v19) = v12;
          McTemplateK0qq_EtwWriteTransfer(
            (__int64)v13,
            &SSIdleDeclined,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF,
            (__int64)v19);
        }
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
        *((_DWORD *)SelectiveSuspend + 126) &= ~0x100u;
        v15 = v14;
        v16 = *((_DWORD *)SelectiveSuspend + 126);
        if ( (v16 & 4) != 0 )
        {
          *((_DWORD *)SelectiveSuspend + 126) = v16 & 0xFFFFFFFB;
          KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 200), 0, 0);
          *((_DWORD *)SelectiveSuspend + 126) &= ~0x80u;
          v5 = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v15);
        if ( v5 )
          ndisDereferenceMiniport(a1, 0x15u);
        return v12;
      }
    }
  }
  else
  {
    ndisNicAutoPowerSaverControlIdleTimer(a1);
    return 3221291025LL;
  }
}
