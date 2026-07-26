/*
 * XREFs of ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0113C94
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeTimer @ 0x1C00233E0 (NdisInitializeTimer.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

void __fastcall ndisAoAcInitialize(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char *AoAc; // rbx
  unsigned __int8 v3; // al

  AoAc = (char *)a1->AoAc;
  if ( AoAc || (AoAc = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4A0uLL, 0x6D61444Eu)) != 0LL )
  {
    memset(AoAc, 0, 0x4A0uLL);
    KeInitializeSpinLock((PKSPIN_LOCK)AoAc);
    *((_QWORD *)AoAc + 2) = AoAc + 8;
    *((_QWORD *)AoAc + 1) = AoAc + 8;
    *((_QWORD *)AoAc + 5) = AoAc + 32;
    *((_QWORD *)AoAc + 4) = AoAc + 32;
    KeInitializeEvent((PRKEVENT)(AoAc + 392), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(AoAc + 448), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(AoAc + 416), NotificationEvent, 1u);
    v3 = ndisCsResiliency;
    *((_DWORD *)AoAc + 94) = 0;
    *((_DWORD *)AoAc + 95) |= 0x100u;
    AoAc[1105] = v3;
    AoAc[288] = 0;
    AoAc[386] = 1;
    AoAc[1104] = 0;
    AoAc[440] = 0;
    *((_DWORD *)AoAc + 71) = ndisNicQuietDerefDefaultTimeout;
    NdisInitializeTimer((PNDIS_TIMER)(AoAc + 72), (PNDIS_TIMER_FUNCTION)ndisTempRefTimerDpc, a1);
    *((_QWORD *)AoAc + 25) = a1;
    *((_QWORD *)AoAc + 26) = ndisAoAcTempRefWorkItem;
    *((_QWORD *)AoAc + 38) = ndisAoAcWakeWorkItem;
    *((_QWORD *)AoAc + 37) = a1;
    a1->AoAc = (struct _NDIS_MINIPORT_AOAC *)AoAc;
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0xEu,
      (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
      a1);
  }
}
