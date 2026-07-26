/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x1C0061800
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0021A08 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005CD94 (-ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForAoAc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005D084 (-ndisWdfSendPmParametersForAoAc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C0061550 (NdisWdfMiniportDataPathPause.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C008020C (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0083758 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6590 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfSendPmParametersForSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A7FB8 (-ndisWdfSendPmParametersForSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0113E1C (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C0113EBC (-ndisDisconnectInStandby@@YA_NXZ.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C011DF24 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E434 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E468 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E530 (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall NdisWdfPnpPowerEventHandler(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _DEVICE_OBJECT *v4; // rcx
  unsigned int v5; // ebx
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int started; // eax
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  unsigned __int8 v15; // [rsp+48h] [rbp+10h] BYREF

  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a2 > 12 )
  {
    v10 = a2 - 14;
    if ( v10 )
    {
      v11 = v10 - 3;
      if ( !v11 )
      {
        started = ndisWdfPreReleaseHardware(a1);
        goto LABEL_25;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        started = ndisWdfPostReleaseHardware(a1);
        goto LABEL_25;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          goto LABEL_32;
        started = ndisWdfDeviceObjectCleanup(a1);
LABEL_25:
        v5 = started;
        goto LABEL_39;
      }
      a1->PnPDeviceState = NdisPnPDeviceStopped;
      NdisWdfMiniportDataPathPause(a1);
    }
    else
    {
      ndisWdfSendPmParametersForSx(a1);
    }
    v5 = 0;
    goto LABEL_39;
  }
  if ( a2 == 12 )
  {
    v5 = -1073741822;
    goto LABEL_39;
  }
  v5 = 0;
  if ( !a2 )
  {
    started = ndisStartDeviceSynchronous(a1, 0LL);
    goto LABEL_25;
  }
  v6 = a2 - 6;
  if ( !v6 )
  {
    started = ndisPnPIrpSurpriseRemoval(v4, a1, 0LL, &v15, &v15);
    goto LABEL_25;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    started = ndisPnPIrpRemoveDevice(a1->DeviceObject, a1, 0LL, &v15, &v15);
    goto LABEL_25;
  }
  v8 = v7 - 3;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendClearStop(a1, 9LL);
      if ( (a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0 )
      {
        if ( a1->AoAc )
          ndisAoAcStart(a1);
      }
      goto LABEL_39;
    }
LABEL_32:
    v5 = -1073741811;
    goto LABEL_39;
  }
  if ( a1->AoAc && ndisWdfIsAoAcPowerTransition(a1) && *((_BYTE *)a1->AoAc + 386) && !ndisDisconnectInStandby() )
  {
    ndisWdfSendPmParametersForAoAc(a1);
  }
  else if ( a1->SelectiveSuspend )
  {
    ndisWdfSendPmParametersForSuspend(a1);
  }
LABEL_39:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v5;
}
