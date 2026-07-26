/*
 * XREFs of ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C5F0
 * Callers:
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C00013B0 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C0008F40 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AF54 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010F30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisQueryGuidData @ 0x1C00124B0 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00127B0 (ndisQueryGuidDataSize.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0015188 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016ECC (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ndisQueryCustomGuids @ 0x1C0030D38 (ndisQueryCustomGuids.c)
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x1C00314E8 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00331D4 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003B390 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSx @ 0x1C005BE0C (ndisMSendPmParametersOidForSx.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005D2D0 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z @ 0x1C006C3A8 (-ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0077694 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1C0083130 (-ndisMediaDisconnectWorker@@YAXPEAX@Z.c)
 *     ?ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0083418 (-ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008C7B0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008EAD0 (-ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0090F64 (-ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0092800 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093E64 (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009409C (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x1C00972D8 (-ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisDisableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A223C (-ndisDisableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B230 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B2F0 (WPP_RECORDER_SF_qDq.c)
 *     NdisMSleep @ 0x1C00174F0 (NdisMSleep.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019874 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001C124 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009AB80 (-ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00AEAD4 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B8000 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B82AC (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     NdisMCoOidRequestComplete @ 0x1C00BABB0 (NdisMCoOidRequestComplete.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CO_VC_PTR_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        char a4,
        struct _NDIS_FILTER_BLOCK *a5,
        struct _NDIS_FILTER_BLOCK *a6)
{
  NDIS_OID Oid; // r12d
  void *MiniportContext; // r15
  ULONGLONG UnbiasedInterruptTime; // rbp
  struct _NDIS_CO_VC_PTR_BLOCK *v11; // rbx
  signed __int32 v13; // eax
  __int64 v14; // rdx
  unsigned int PnPFlags; // eax
  _DWORD *v16; // rax
  unsigned int v17; // ecx
  unsigned int i; // ebx
  unsigned int Flags; // eax
  unsigned int v20; // eax
  unsigned int v21; // ebx
  int v22; // edx
  int v23; // r8d
  struct _NDIS_MINIPORT_AOAC *AoAc; // rax
  NDIS_STATUS v26; // eax
  struct _NDIS_MINIPORT_AOAC *v27; // rdx
  unsigned __int64 v28; // rcx
  char v29; // [rsp+90h] [rbp+8h]
  ULONGLONG v31; // [rsp+A0h] [rbp+18h]

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  MiniportContext = 0LL;
  UnbiasedInterruptTime = 0LL;
  v31 = 0LL;
  v29 = 0;
  v11 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      (int)a3,
      0xCu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      Oid,
      a5);
  v13 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v13 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  if ( a1->AoAc && a3->RequestType == NdisRequestSetInformation && a3->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v31 = UnbiasedInterruptTime;
  }
  if ( (a1->DriverVerifyFlags & 0x400) == 0 )
    a3->SupportedRevision = 1;
  if ( *(_QWORD *)&a3->NdisReserved[32] && a4 )
    v29 = 1;
  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x100) != 0 )
  {
    v21 = -1073676280;
    goto LABEL_33;
  }
  if ( (PnPFlags & 0x4000) != 0 )
  {
    v21 = -1073741823;
    goto LABEL_33;
  }
  if ( a1->CurrentDevicePowerState <= PowerDeviceD0 || a3->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 8u;
    KeInitializeEvent((PRKEVENT)&a3->NdisReserved[40], NotificationEvent, 0);
    v14 = a3->DATA.QUERY_INFORMATION.Oid;
    v16 = &ndisDirectOidRequestPathOids;
    v17 = 0;
    while ( (_DWORD)v14 != *v16 )
    {
      ++v17;
      ++v16;
      if ( v17 >= 0x18 )
        goto LABEL_16;
    }
    *(_DWORD *)&a3->NdisReserved[16] |= 0x200000u;
LABEL_16:
    if ( KeGetCurrentIrql() < 2u )
    {
      for ( i = 0; i < 0x1388; ++i )
      {
        if ( (a1->Flags & 0x300000) == 0 )
          break;
        NdisMSleep(0x3E8u);
      }
      v11 = a2;
    }
    Flags = a1->Flags;
    if ( (Flags & 0x300000) != 0 )
    {
      v21 = -1073676275;
    }
    else
    {
      if ( (Flags & 0x20000) != 0 )
      {
        if ( v11 )
        {
          if ( !ndisReferenceVcPtr(v11) )
          {
            v21 = -1073676286;
            goto LABEL_48;
          }
          MiniportContext = v11->MiniportContext;
        }
        if ( a1->MajorNdisVersion < 6u )
          v26 = ndisMCoOidRequestToRequest(a1, MiniportContext, a3);
        else
          v26 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, MiniportContext, a3);
        if ( v26 == 259 )
          ndisWaitForKernelObject(&a3->NdisReserved[40]);
        else
          NdisMCoOidRequestComplete(a1, v11, a3, v26);
        v21 = *(_DWORD *)&a3->NdisReserved[8];
        if ( a2 )
          ndisDereferenceVcPtr(a2);
        goto LABEL_26;
      }
      if ( (*(_DWORD *)&a3->NdisReserved[16] & 0x200000) != 0 )
        v20 = ndisDoDirectOidRequest(a3, a1, a6, a5);
      else
        v20 = ndisQueueOidRequest(a3, a1, a6, a5);
      v21 = v20;
      if ( v20 == 259 )
      {
        ndisWaitForKernelObject(&a3->NdisReserved[40]);
        v21 = *(_DWORD *)&a3->NdisReserved[8];
LABEL_26:
        UnbiasedInterruptTime = v31;
        goto LABEL_27;
      }
    }
LABEL_48:
    UnbiasedInterruptTime = v31;
    goto LABEL_33;
  }
  v21 = -1071448017;
LABEL_33:
  if ( v29 == 1 && a4 )
  {
    LOBYTE(v14) = 6;
    ndisMDereferenceOpenUnlocked(*(_QWORD *)&a3->NdisReserved[32], v14);
  }
LABEL_27:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      v23,
      0xDu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      Oid,
      (char)a5,
      v21);
  AoAc = a1->AoAc;
  if ( AoAc && a3->RequestType == NdisRequestSetInformation && a3->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    ++*((_DWORD *)AoAc + 288);
    *((_QWORD *)a1->AoAc + 145) = (KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime + 5000) / 0x2710;
    v27 = a1->AoAc;
    v28 = *((_QWORD *)v27 + 146);
    if ( v28 <= *((_QWORD *)v27 + 145) )
      v28 = *((_QWORD *)v27 + 145);
    *((_QWORD *)v27 + 146) = v28;
    *((_QWORD *)a1->AoAc + 147) += *((_QWORD *)a1->AoAc + 145);
  }
  return v21;
}
