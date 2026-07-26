/*
 * XREFs of ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C005A3E4
 * Callers:
 *     ndisDispatchRequest @ 0x1C001D550 (ndisDispatchRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C005AE44 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C005B0E0 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C005BEC4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C005C20C (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C005C3AC (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisReleaseNicActive @ 0x1C005E3A0 (NdisReleaseNicActive.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005ADE8 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C625C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisAoAcActiveRefSubtract(__int64 a1, int a2, int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // rdi
  bool v7; // sf

  *(_DWORD *)(a1 + 52) -= a3;
  v4 = *(_DWORD *)(a1 + 52);
  v5 = a2;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 4LL * a2 + 500) - a3 < 0;
  *(_DWORD *)(a1 + 4LL * a2 + 500) -= a3;
  if ( v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_BYTE *)(a1 + 1105) && !*(_DWORD *)(a1 + 4 * v5 + 500) )
  {
    if ( *(_QWORD *)(a1 + 16 * (v5 + 36)) )
    {
      *(_QWORD *)(a1 + 16 * v6 + 568) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 16 * (v5 + 36));
      *(_QWORD *)(a1 + 16 * (v5 + 36)) = 0LL;
    }
    if ( (_DWORD)v5 == 15 )
    {
      ndisAoAcStartRefTimeStats((struct _NDIS_MINIPORT_AOAC *)a1);
    }
    else if ( v4 == 1 && *(_QWORD *)(a1 + 576) )
    {
      *(_QWORD *)(a1 + 576) = MEMORY[0xFFFFF78000000008];
    }
  }
  return v4;
}
