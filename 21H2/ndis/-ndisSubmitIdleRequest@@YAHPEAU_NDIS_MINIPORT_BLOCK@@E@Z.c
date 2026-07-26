/*
 * XREFs of ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A7AE8
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C558 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00A6920 (-ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017B50 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     Feature_ScreenON_NAPS__private_ReportDeviceUsage @ 0x1C003FA3C (Feature_ScreenON_NAPS__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ql @ 0x1C0062808 (WPP_RECORDER_SF_ql_ea_1C0062808.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C0084318 (McTemplateK0qq_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00A44AC (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A56AC (-ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A5DD4 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A79D0 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  char v4; // bp
  int v5; // r14d
  KIRQL v8; // r15
  int v9; // r12d
  __int64 v10; // rdx
  unsigned int v11; // r14d
  int *v12; // rcx
  KIRQL v13; // al
  KIRQL v14; // bl
  int v15; // edx
  int *v16; // rcx
  bool v17; // bl
  struct _GUID *v18; // [rsp+20h] [rbp-48h]

  SelectiveSuspend = a1->SelectiveSuspend;
  v4 = 0;
  v5 = (unsigned __int8)a2;
  if ( (_BYTE)a2 || (a1->PMHardwareCapabilities.Flags & 4) == 0 )
    goto LABEL_7;
  if ( ndisIsScreenOnNapsEnabled )
    Feature_ScreenON_NAPS__private_ReportDeviceUsage((__int64)a1, a2, a3);
  if ( ndisShouldEngageNicAutoPowerSaver(a1) )
  {
LABEL_7:
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x404) != 0 || !ndisReferenceMiniport(a1, 0x15u) )
    {
      v17 = (*((_DWORD *)SelectiveSuspend + 126) & 4) != 0;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
      return v17 ? 259 : -1073676271;
    }
    else
    {
      v9 = v5;
      *((_DWORD *)SelectiveSuspend + 126) = *((_DWORD *)SelectiveSuspend + 126) ^ (*((_DWORD *)SelectiveSuspend + 126) ^ (v5 << 8)) & 0x100 | 4;
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 200));
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 224));
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
      ndisLogMiniportEvent(a1, NdisMEvent_SSIdleReq);
      LOBYTE(v10) = v5;
      v11 = a1->DriverHandle->IdleNotificationHandler(a1->MiniportAdapterContext, v10);
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 224), 0, 0);
      if ( v11 == 259 )
      {
        v16 = &WPP_RECORDER_INITIALIZED;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xFu,
            0xEu,
            (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
            (char)a1,
            v9);
        if ( (byte_1C00E6181 & 8) != 0 )
          McTemplateK0q_EtwWriteTransfer(
            (__int64)v16,
            &SSIdleDetected,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF);
        ndisClearIdleTimer(a1);
        return 259LL;
      }
      else
      {
        v12 = &WPP_RECORDER_INITIALIZED;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xFu,
            0xDu,
            (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
            v11,
            a1);
        if ( (byte_1C00E6181 & 8) != 0 )
        {
          LODWORD(v18) = v11;
          McTemplateK0qq_EtwWriteTransfer(
            (__int64)v12,
            &SSIdleDeclined,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF,
            (__int64)v18);
        }
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
        *((_DWORD *)SelectiveSuspend + 126) &= ~0x100u;
        v14 = v13;
        v15 = *((_DWORD *)SelectiveSuspend + 126);
        if ( (v15 & 4) != 0 )
        {
          *((_DWORD *)SelectiveSuspend + 126) = v15 & 0xFFFFFFFB;
          KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 200), 0, 0);
          *((_DWORD *)SelectiveSuspend + 126) &= ~0x80u;
          v4 = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v14);
        if ( v4 )
          ndisDereferenceMiniport(a1, 0x15u);
        return v11;
      }
    }
  }
  else
  {
    ndisNicAutoPowerSaverControlIdleTimer(a1);
    return 3221291025LL;
  }
}
