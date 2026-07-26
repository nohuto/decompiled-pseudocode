/*
 * XREFs of ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FF9C
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C001941C (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A3E0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     NdisOpenConfigurationEx @ 0x1C00286A0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C00288E0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00289C0 (NdisReadConfiguration.c)
 *     ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00305F4 (-ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memcmp @ 0x1C003FFE0 (memcmp.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD96C (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C0106A0C (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C0106A5C (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C0126D5C (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0126ED4 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnInitialize(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a3)
{
  unsigned int IntegerData; // r12d
  int v7; // edx
  unsigned int updated; // r15d
  KIRQL v9; // al
  unsigned int v10; // ecx
  unsigned int PnPFlags; // eax
  size_t v12; // rdi
  _IF_PHYSICAL_ADDRESS_LH *p_ifPhysAddress; // rax
  size_t MacAddressLength; // r12
  size_t v15; // r8
  size_t v16; // r8
  size_t v17; // r8
  unsigned __int16 v18; // ax
  _NDIS_MEDIUM MediaType; // eax
  char v20; // di
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  KIRQL v22; // dl
  KIRQL v23; // dl
  unsigned __int8 ifDeviceWakeUpEnable; // [rsp+50h] [rbp-30h]
  bool v26; // [rsp+54h] [rbp-2Ch]
  PVOID ConfigurationHandle; // [rsp+58h] [rbp-28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+60h] [rbp-20h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-18h] BYREF
  char v30; // [rsp+C0h] [rbp+40h]
  int Status; // [rsp+D8h] [rbp+58h] BYREF

  v30 = 0;
  LOBYTE(IntegerData) = 0;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  ParameterValue = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_0ecf9acc3b5b3994cffcc6b83765ca21_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  updated = Status;
  if ( !Status )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NdisDeviceTypeStr, NdisParameterInteger);
    if ( !Status )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    updated = 0;
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    a2->AccessType = a3->AccessType;
    a2->DirectionType = a3->DirectionType;
    a2->ifConnectorPresent = a3->IfConnectorPresent;
    a2->ConnectionType = a3->ConnectionType;
    a2->ifMtu = a3->MtuSize;
    v10 = 0;
    a2->Flags = 0;
    LOBYTE(Status) = v9;
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 0x200000) != 0 )
    {
      a2->Flags = 1;
      v10 = 1;
      PnPFlags = a1->PnPFlags;
    }
    if ( (PnPFlags & 0x8000000) != 0 )
    {
      v10 |= 2u;
      a2->Flags = v10;
      PnPFlags = a1->PnPFlags;
    }
    v12 = 32LL;
    if ( (PnPFlags & 0x400000) != 0 )
    {
      v10 |= 0x20u;
      a2->Flags = v10;
    }
    if ( (IntegerData & 1) != 0 )
    {
      v10 |= 0x40u;
      a2->Flags = v10;
    }
    if ( (a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0 )
    {
      v10 |= 0x100u;
      a2->Flags = v10;
    }
    a2->ifFlags = v10;
    p_ifPhysAddress = &a2->ifPhysAddress;
    MacAddressLength = a3->MacAddressLength;
    if ( a2->ifPhysAddress.Length == (_WORD)MacAddressLength )
    {
      v15 = a3->MacAddressLength;
      if ( (unsigned __int16)MacAddressLength >= 0x20u )
        v15 = 32LL;
      if ( !memcmp(a2->ifPhysAddress.Address, a3->CurrentMacAddress, v15) )
      {
        v16 = 32LL;
        if ( (unsigned __int16)MacAddressLength < 0x20u )
          v16 = MacAddressLength;
        v26 = memcmp(a2->PermanentPhysAddress.Address, a3->PermanentMacAddress, v16) != 0;
      }
      else
      {
        v26 = 1;
      }
      p_ifPhysAddress = &a2->ifPhysAddress;
    }
    else
    {
      v26 = 1;
    }
    if ( (unsigned __int16)MacAddressLength >= 0x20u )
      LOWORD(MacAddressLength) = 32;
    p_ifPhysAddress->Length = MacAddressLength;
    v17 = a3->MacAddressLength;
    if ( a3->MacAddressLength >= 0x20u )
      v17 = 32LL;
    memmove(a2->ifPhysAddress.Address, a3->CurrentMacAddress, v17);
    v18 = a3->MacAddressLength;
    if ( v18 >= 0x20u )
      v18 = 32;
    a2->PermanentPhysAddress.Length = v18;
    if ( a3->MacAddressLength < 0x20u )
      v12 = a3->MacAddressLength;
    memmove(a2->PermanentPhysAddress.Address, a3->PermanentMacAddress, v12);
    a2->XmitLinkSpeed = a3->XmitLinkSpeed;
    a2->RcvLinkSpeed = a3->RcvLinkSpeed;
    a2->MediaConnectState = a3->MediaConnectState;
    a2->MediaDuplexState = a3->MediaDuplexState;
    a2->SupportedStatistics = a3->SupportedStatistics;
    MediaType = a3->MediaType;
    if ( a2->MediaType == MediaType )
    {
      v20 = 0;
    }
    else
    {
      a2->MediaType = MediaType;
      v20 = 1;
      v30 = 1;
    }
    PhysicalMediumType = a3->PhysicalMediumType;
    if ( a2->PhysicalMediumType != PhysicalMediumType )
    {
      a2->PhysicalMediumType = PhysicalMediumType;
      v20 = 1;
      v30 = 1;
    }
    v22 = Status;
    ifDeviceWakeUpEnable = a2->ifDeviceWakeUpEnable;
    a2->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
    KeReleaseSpinLock(&ndisIfListLock, v22);
    ndisIfUpdateInterfaceHiddenFlag(a2, (a1->PnPFlags & 0x1000) != 0);
    if ( a2->Source == NdisIfBlockSourcePersistedNetSetup )
    {
      if ( (v20 || v26) && (int)ndisIfWriteBackPersistedInterface(a2) < 0 )
      {
        updated = -1073741823;
        goto LABEL_42;
      }
    }
    else
    {
      if ( v30 )
      {
        updated = ndisIfUpdatePersistedInterfaceInfo(
                    (unsigned __int8 *)&a2->NetLuid,
                    8u,
                    0x434u,
                    (unsigned __int8 *)&a2->MediaType);
        if ( updated )
          goto LABEL_42;
      }
      if ( v26 )
      {
        updated = ndisIfUpdatePersistedInterfaceInfo(
                    (unsigned __int8 *)&a2->NetLuid,
                    0x44u,
                    0x440u,
                    (unsigned __int8 *)&a2->ifPhysAddress);
        if ( updated )
          goto LABEL_42;
      }
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, (unsigned __int8 *)&Status);
    ndisIfSetInterfaceState(a1, 0, Status);
    v23 = Status;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v23);
    ndisNsiSyncMiniportOperStatusNotification(a1);
    ndisNsiSyncMiniportMediaConnectStateNotification(a1);
    ndisIfGetRcvAddressFromMiniport(a1);
    if ( ifDeviceWakeUpEnable != a2->ifDeviceWakeUpEnable )
      ndisNsiScheduleIfBlockRodChangeNotification(
        a2,
        (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))&a2->ifDeviceWakeUpEnable,
        1,
        641);
  }
LABEL_42:
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_0ecf9acc3b5b3994cffcc6b83765ca21_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      updated);
  return updated;
}
