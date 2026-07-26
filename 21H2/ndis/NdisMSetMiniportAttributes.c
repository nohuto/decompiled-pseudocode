/*
 * XREFs of NdisMSetMiniportAttributes @ 0x1C0023210
 * Callers:
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116D44 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C001EF10 (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 *     ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C001FB54 (-NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIB.c)
 *     ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C001FDD8 (-NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_AT.c)
 *     ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C001FE8C (-NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTR.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C001FFF0 (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0020374 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ?ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z @ 0x1C0021E2C (-ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z.c)
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C00223A8 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C00237A4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C0024BC4 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002A62C (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BC68 (WPP_RECORDER_SF_qdL.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES@@@Z @ 0x1C0070CC4 (-ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0070DE0 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00FF0B0 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     ?ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00FF630 (-ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C012C0F0 (NdisMSetAttributesEx.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportAttributes(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_ADAPTER_ATTRIBUTES MiniportAttributes)
{
  int Type; // r15d
  int v5; // edi
  UCHAR Revision; // al
  USHORT Size; // cx
  __int64 v8; // r8
  __int64 v9; // r8
  struct _NDIS_TCP_CONNECTION_OFFLOAD *DefaultTcpConnectionOffloadConfiguration; // r9
  struct _NDIS_TCP_CONNECTION_OFFLOAD *TcpConnectionOffloadHardwareCapabilities; // rax
  struct _NDIS_OFFLOAD *DefaultOffloadConfiguration; // rbp
  struct _NDIS_OFFLOAD *HardwareOffloadCapabilities; // r14
  int v14; // edx
  PVOID PoolWithTag; // rax
  int v17; // eax
  unsigned int Flags; // r9d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  ULONG v24; // edi
  int v25; // ecx
  unsigned int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r9

  Type = MiniportAttributes->Header.Type;
  v5 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Fu,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)NdisMiniportHandle,
      MiniportAttributes->Header.Type);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  switch ( Type )
  {
    case 158:
      Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      v19 = 16 * ((*(_WORD *)(*((_QWORD *)NdisMiniportHandle + 470) + 26LL) & 1) + 34);
      if ( (Flags & 1) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x200000u;
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 2) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x400000u;
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      v20 = v19 | 0x80;
      if ( (Flags & 4) == 0 )
        v20 = v19;
      v21 = v20 | 0x100;
      if ( (Flags & 8) == 0 )
        v21 = v20;
      v22 = v21 | 0x400;
      if ( (Flags & 0x10) == 0 )
        v22 = v21;
      v23 = v22 | 0x40;
      if ( (Flags & 0x20) == 0 )
        v23 = v22;
      v24 = v23 | 8;
      if ( (Flags & 0x40) == 0 )
        v24 = v23;
      if ( (Flags & 0x100) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 468) |= 0x80000000;
        ndisUpdateNoPauseOnSuspend((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle);
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 0x200) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 468) |= 0x200u;
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 0x400) != 0
        || *((_BYTE *)NdisMiniportHandle + 32) <= 6u
        && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x1Eu) )
      {
        *((_DWORD *)NdisMiniportHandle + 30) |= 0x400u;
      }
      NdisMSetAttributesEx(
        NdisMiniportHandle,
        MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext,
        MiniportAttributes->RegistrationAttributes.CheckForHangTimeInSeconds,
        v24,
        MiniportAttributes->RegistrationAttributes.InterfaceType);
      v25 = *((_DWORD *)NdisMiniportHandle + 30);
      if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 0x80u) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x80u;
        v26 = v25 & 0xFFFEFFFF;
      }
      else
      {
        v26 = v25 | 0x10000;
      }
      *((_DWORD *)NdisMiniportHandle + 30) = v26;
      v5 = 0;
      break;
    case 159:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, MiniportAttributes->Header.Size, 0x2020444Eu);
      *((_QWORD *)NdisMiniportHandle + 339) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        break;
      }
      memmove(PoolWithTag, MiniportAttributes, MiniportAttributes->Header.Size);
      v17 = ndisMSetGeneralAttributes(
              (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
              *((struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)NdisMiniportHandle + 339));
      goto LABEL_46;
    case 160:
      DefaultTcpConnectionOffloadConfiguration = 0LL;
      TcpConnectionOffloadHardwareCapabilities = 0LL;
      DefaultOffloadConfiguration = 0LL;
      HardwareOffloadCapabilities = 0LL;
      if ( MiniportAttributes->Header.Size >= 0x28u )
      {
        DefaultOffloadConfiguration = MiniportAttributes->OffloadAttributes.DefaultOffloadConfiguration;
        HardwareOffloadCapabilities = MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
        DefaultTcpConnectionOffloadConfiguration = MiniportAttributes->OffloadAttributes.DefaultTcpConnectionOffloadConfiguration;
        TcpConnectionOffloadHardwareCapabilities = MiniportAttributes->OffloadAttributes.TcpConnectionOffloadHardwareCapabilities;
      }
      v5 = ndisMSetOffloadAttributes(
             (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
             DefaultOffloadConfiguration,
             HardwareOffloadCapabilities,
             DefaultTcpConnectionOffloadConfiguration,
             TcpConnectionOffloadHardwareCapabilities);
      if ( !v5 && dword_1C00E3108 )
        NdisTraceLoggingOffloads(
          (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
          HardwareOffloadCapabilities,
          DefaultOffloadConfiguration);
      break;
    case 161:
      v17 = ndisMSetNative802_11Attributes(
              (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
              (struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES *)MiniportAttributes);
      goto LABEL_46;
    case 164:
      *((_QWORD *)NdisMiniportHandle + 514) = MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
      break;
    case 175:
      Revision = MiniportAttributes->Header.Revision;
      if ( !Revision )
        goto LABEL_86;
      Size = MiniportAttributes->Header.Size;
      if ( Size < 0x10u )
        goto LABEL_86;
      if ( Revision != 2 )
      {
        if ( Size < 0x50u && Revision >= 3u )
          goto LABEL_86;
        goto LABEL_13;
      }
      if ( Size >= 0x30u )
      {
LABEL_13:
        if ( *((_BYTE *)NdisMiniportHandle + 32) <= 6u
          && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || !*((_BYTE *)NdisMiniportHandle + 33)) )
        {
          goto LABEL_89;
        }
        v5 = ndisMSetHDSplitAttributes(
               (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
               MiniportAttributes->HardwareAssistAttributes.HDSplitAttributes);
        if ( v5 < 0 )
          break;
        if ( MiniportAttributes->Header.Revision >= 2u )
        {
          if ( *((_BYTE *)NdisMiniportHandle + 32) <= 6u
            && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
          {
            goto LABEL_89;
          }
          if ( MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities )
          {
            if ( MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed )
            {
              v5 = ndisMSetReceiveFilterAttributes(
                     (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                     (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes);
              if ( v5 < 0 )
                break;
            }
          }
          if ( MiniportAttributes->Header.Revision >= 2u )
          {
            if ( *((_BYTE *)NdisMiniportHandle + 32) <= 6u
              && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
            {
              goto LABEL_89;
            }
            if ( MiniportAttributes->GeneralAttributes.XmitLinkSpeed )
            {
              if ( MiniportAttributes->GeneralAttributes.MaxRcvLinkSpeed )
              {
                v5 = ndisMSetNicSwitchAttributes(
                       (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                       (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes);
                if ( v5 < 0 )
                  break;
              }
            }
          }
        }
        if ( MiniportAttributes->Header.Revision < 3u )
          break;
        if ( *((_BYTE *)NdisMiniportHandle + 32) > 6u
          || *((_BYTE *)NdisMiniportHandle + 32) == 6 && *((_BYTE *)NdisMiniportHandle + 33) >= 0x1Eu )
        {
          if ( !MiniportAttributes->GeneralAttributes.RcvLinkSpeed
            || !MiniportAttributes->Native_802_11_Attributes.WFDAttributes
            || (v5 = ndisMSetSriovAttributes(
                       (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                       (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes),
                v5 >= 0) )
          {
            if ( MiniportAttributes->HardwareAssistAttributes.HardwareQosCapabilities )
            {
              if ( MiniportAttributes->GeneralAttributes.PowerManagementCapabilities )
              {
                v5 = ndisMSetQosAttributes(
                       (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                       (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes);
                if ( v5 >= 0 )
                {
                  NdisTraceLoggingQosHardwareOffloads(
                    (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                    MiniportAttributes,
                    v8);
                  NdisTraceLoggingQosConfigOffloads(
                    (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                    MiniportAttributes,
                    v9);
                }
              }
            }
          }
          break;
        }
LABEL_89:
        v5 = -1073741637;
        break;
      }
LABEL_86:
      v5 = -1073741811;
      break;
    case 179:
      v5 = ndisMSetNDKAttributes(NdisMiniportHandle, MiniportAttributes);
      if ( !v5 && dword_1C00E3108 )
        NdisTraceLoggingNDKCapabilities((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, MiniportAttributes, v27, v28);
      break;
    case 197:
      v17 = ndisMSetPacketDirectAttributes(NdisMiniportHandle, MiniportAttributes);
LABEL_46:
      v5 = v17;
      break;
    default:
      goto LABEL_86;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      1,
      112,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)NdisMiniportHandle,
      Type,
      v5);
  return v5;
}
