/*
 * XREFs of ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0038794
 * Callers:
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C011F660 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139A18 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x1C010A684 (-ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z.c)
 */

unsigned __int8 __fastcall ndisUpdatePMCurrentCapabilities(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MediaSpecificWakeUpEvents; // eax
  struct _NDIS_PM_CAPABILITIES *p_PMAdvertisedCapabilities; // rsi
  __int128 v3; // xmm0
  char v4; // di
  __int128 v6; // xmm1
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  unsigned int PnPFlags; // eax
  unsigned int Flags; // ecx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  KIRQL v12; // dl
  unsigned int v13; // edx
  unsigned int SupportedProtocolOffloads; // ecx
  unsigned int v15; // ecx
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // r8d
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // r8d
  unsigned int SupportedWoLPacketPatterns; // eax
  unsigned int v19; // ecx
  unsigned int Value; // eax
  unsigned int v22; // ecx
  unsigned int PnPCapabilities; // eax
  __int128 v24; // [rsp+40h] [rbp-40h]
  int v25; // [rsp+5Ch] [rbp-24h]
  __int128 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  KIRQL NewIrql; // [rsp+90h] [rbp+10h] BYREF

  MediaSpecificWakeUpEvents = a1->PMHardwareCapabilities.MediaSpecificWakeUpEvents;
  p_PMAdvertisedCapabilities = &a1->PMAdvertisedCapabilities;
  v3 = *(_OWORD *)&a1->PMAdvertisedCapabilities.Header.Type;
  v4 = 0;
  v6 = *(_OWORD *)&a1->PMAdvertisedCapabilities.MaxWoLPatternSize;
  NewIrql = 0;
  v24 = v3;
  v25 = HIDWORD(v6);
  v26 = *(_OWORD *)&a1->PMAdvertisedCapabilities.NumArpOffloadIPv4Addresses;
  v27 = *(_QWORD *)&a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp;
  v7 = *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize;
  *(_OWORD *)&a1->PMAdvertisedCapabilities.Header.Type = *(_OWORD *)&a1->PMHardwareCapabilities.Header.Type;
  v8 = *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses;
  *(_OWORD *)&a1->PMAdvertisedCapabilities.MaxWoLPatternSize = v7;
  *(_QWORD *)&v7 = *(_QWORD *)&a1->PMHardwareCapabilities.MinLinkChangeWakeUp;
  *(_OWORD *)&a1->PMAdvertisedCapabilities.NumArpOffloadIPv4Addresses = v8;
  *(_QWORD *)&a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp = v7;
  a1->PMAdvertisedCapabilities.MediaSpecificWakeUpEvents = MediaSpecificWakeUpEvents;
  PnPFlags = a1->PnPFlags;
  *(_QWORD *)&a1->PMAdvertisedCapabilities.Flags = 0LL;
  a1->PMAdvertisedCapabilities.SupportedProtocolOffloads = 0;
  *(_QWORD *)&a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp = 0LL;
  a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp = NdisDeviceStateUnspecified;
  if ( (PnPFlags & 1) != 0
    && (a1->PnPCapabilities & 8) == 0
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && a1->DeviceCaps.SystemWake )
  {
    Flags = a1->PMHardwareCapabilities.Flags;
    if ( (Flags & 4) != 0 && !ndisDefaultNapsState )
    {
      Value = a1->PMAdminConfig.Value;
      if ( (Value & 0xC000) == 0 )
        a1->PMAdminConfig.Value = Value & 0xFFFF0FFF | 0xA000;
    }
    if ( (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x1Eu)
      && (a1->Flags & 0x20000) == 0
      && (DriverHandle = a1->DriverHandle, DriverHandle->IdleNotificationHandler)
      && DriverHandle->CancelIdleNotificationHandler
      && (a1->PMAdminConfig.Value & 0x3000) == 0x2000
      && (Flags & 6) != 0
      || (a1->Flags & 0x80u) != 0 && (a1->PMAdminConfig.Value & 0x3000) == 0x2000 && (Flags & 6) != 0 )
    {
      a1->PMAdvertisedCapabilities.Flags = 2;
      if ( (Flags & 4) != 0 )
      {
        a1->PMAdvertisedCapabilities.Flags = 6;
        if ( (Flags & 0xC) == 0xC )
        {
          a1->PMAdvertisedCapabilities.Flags = 14;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qZ(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              Flags & 4,
              9u,
              0x8Fu,
              (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
              (char)a1,
              &a1->pAdapterInstanceName->Length);
        }
      }
    }
    if ( (a1->PMHardwareCapabilities.Flags & 1) != 0 )
      a1->PMAdvertisedCapabilities.Flags |= 1u;
    a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp = a1->PMHardwareCapabilities.MinLinkChangeWakeUp;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( ndisAoAcCapable
      || ndisAoAcTest
      || a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x14u)
      || (unsigned int)(a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp - 2) > 2
      || a1->MediaDisconnectTimeOut == 0xFFFF
      || (v22 = a1->PMAdminConfig.Value, (v22 & 0x30) == 0x10)
      || (v22 & 0x3000) == 0x2000
      || a1->MediaType
      || a1->PhysicalMediumType != NdisPhysicalMedium802_3
      || !a1->S0WakeupSupported
      || (a1->Flags & 0x80u) != 0 )
    {
      a1->WSyncFlags &= ~8u;
    }
    else
    {
      a1->WSyncFlags |= 8u;
    }
    v12 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v12);
    v13 = a1->PMAdminConfig.Value;
    SupportedProtocolOffloads = a1->PMHardwareCapabilities.SupportedProtocolOffloads;
    a1->PMAdvertisedCapabilities.SupportedProtocolOffloads = SupportedProtocolOffloads;
    if ( (v13 & 0xC0) == 0x40 )
    {
      SupportedProtocolOffloads &= ~1u;
      a1->PMAdvertisedCapabilities.SupportedProtocolOffloads = SupportedProtocolOffloads;
    }
    if ( (v13 & 0x300) == 0x100 )
    {
      SupportedProtocolOffloads &= ~2u;
      a1->PMAdvertisedCapabilities.SupportedProtocolOffloads = SupportedProtocolOffloads;
    }
    if ( (v13 & 0xC00) == 0x400 )
    {
      SupportedProtocolOffloads &= ~0x80u;
      a1->PMAdvertisedCapabilities.SupportedProtocolOffloads = SupportedProtocolOffloads;
    }
    if ( (SupportedProtocolOffloads & 1) == 0 )
    {
      PnPCapabilities = a1->PnPCapabilities;
      if ( (PnPCapabilities & 0x10000000) != 0 && a1->MiniportPhysicalMediumType != NdisPhysicalMediumWirelessWan )
        a1->PnPCapabilities = PnPCapabilities | 0x100;
    }
    v15 = a1->PnPCapabilities;
    if ( (v15 & 0x10) == 0 )
    {
      MinMagicPacketWakeUp = a1->PMHardwareCapabilities.MinMagicPacketWakeUp;
      if ( (unsigned int)(MinMagicPacketWakeUp - 2) <= 2 && ((v15 & 0x100) != 0 || (v13 & 0xC) != 4) )
      {
        a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns = 2;
        a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp = MinMagicPacketWakeUp;
      }
      MinPatternWakeUp = a1->PMHardwareCapabilities.MinPatternWakeUp;
      if ( (unsigned int)(MinPatternWakeUp - 2) <= 2 && (v13 & 3) != 1 && (v15 & 0x100) == 0 )
      {
        SupportedWoLPacketPatterns = a1->PMHardwareCapabilities.SupportedWoLPacketPatterns;
        v19 = a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns;
        if ( (SupportedWoLPacketPatterns & 1) != 0 )
        {
          a1->PMAdvertisedCapabilities.MinPatternWakeUp = MinPatternWakeUp;
          v19 |= 1u;
        }
        a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns = v19 | SupportedWoLPacketPatterns & 0xFFFFFFFC;
      }
    }
  }
  ndisConvertPMCapabilitiesToPnp(p_PMAdvertisedCapabilities, &a1->PMCapabilities61);
  if ( *(_QWORD *)&a1->PMAdvertisedCapabilities.Flags != *(_QWORD *)((char *)&v24 + 4)
    || a1->PMAdvertisedCapabilities.SupportedProtocolOffloads != v25
    || *(_QWORD *)&a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp != *((_QWORD *)&v26 + 1)
    || a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp != (_DWORD)v27 )
  {
    return 1;
  }
  return v4;
}
