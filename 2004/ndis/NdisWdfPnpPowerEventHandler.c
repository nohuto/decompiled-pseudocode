/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x1C0061E80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00219C8 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005D414 (-ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForAoAc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005D704 (-ndisWdfSendPmParametersForAoAc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C0061BD0 (NdisWdfMiniportDataPathPause.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00808EC (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0083E38 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6A50 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6FD0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfSendPmParametersForSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A8478 (-ndisWdfSendPmParametersForSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0113E2C (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C0113ECC (-ndisDisconnectInStandby@@YA_NXZ.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C011DF34 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E444 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E478 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E540 (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
    if ( !v10 )
    {
      v5 = 0;
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendStop(a1, 6LL);
      a1->PnPFlags |= 0x800u;
      a1->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
      ndisWdfSendPmParametersForSx(a1);
      goto LABEL_40;
    }
    v11 = v10 - 3;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          a1->PnPDeviceState = NdisPnPDeviceStopped;
          NdisWdfMiniportDataPathPause(a1);
          v5 = 0;
          goto LABEL_40;
        }
        if ( v13 != 1 )
          goto LABEL_32;
        started = ndisWdfDeviceObjectCleanup(a1);
      }
      else
      {
        started = ndisWdfPostReleaseHardware(a1);
      }
    }
    else
    {
      started = ndisWdfPreReleaseHardware(a1);
    }
LABEL_25:
    v5 = started;
    goto LABEL_40;
  }
  if ( a2 == 12 )
  {
    v5 = -1073741822;
    goto LABEL_40;
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
      goto LABEL_40;
    }
LABEL_32:
    v5 = -1073741811;
    goto LABEL_40;
  }
  if ( a1->AoAc && ndisWdfIsAoAcPowerTransition(a1) && *((_BYTE *)a1->AoAc + 386) && !ndisDisconnectInStandby() )
  {
    ndisWdfSendPmParametersForAoAc(a1);
  }
  else if ( a1->SelectiveSuspend )
  {
    ndisWdfSendPmParametersForSuspend(a1);
  }
LABEL_40:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v5;
}
