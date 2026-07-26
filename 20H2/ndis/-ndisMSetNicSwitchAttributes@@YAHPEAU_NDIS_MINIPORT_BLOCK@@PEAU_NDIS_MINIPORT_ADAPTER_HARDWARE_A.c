/*
 * XREFs of ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C001FC90
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0022EB0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 __fastcall ndisMSetNicSwitchAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  unsigned int v4; // ebx
  _NDIS_NIC_SWITCH_CAPABILITIES *HardwareNicSwitchCapabilities; // rax
  UCHAR Revision; // r9
  USHORT v7; // r10
  _NDIS_NIC_SWITCH_CAPABILITIES *v8; // rcx
  UCHAR v9; // r8
  USHORT v10; // dx
  size_t v11; // rsi
  _NDIS_NIC_SWITCH_CAPABILITIES *PoolWithTag; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *v13; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *v14; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *v15; // rdx
  size_t Size; // r8
  _NDIS_NIC_SWITCH_CAPABILITIES *CurrentNicSwitchCapabilities; // rdx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rcx
  char v22[4]; // [rsp+38h] [rbp-10h]

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x81u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      a2);
  HardwareNicSwitchCapabilities = a2->HardwareNicSwitchCapabilities;
  Revision = HardwareNicSwitchCapabilities->Header.Revision;
  if ( Revision
    && (v7 = HardwareNicSwitchCapabilities->Header.Size, v7 >= 0x20u)
    && (v8 = a2->CurrentNicSwitchCapabilities, (v9 = v8->Header.Revision) != 0)
    && (v10 = v8->Header.Size, v10 >= 0x20u) )
  {
    if ( a1->NicSwitchCurrentCapabilities || a1->NicSwitchHwCapabilities )
    {
      v4 = -1073676283;
      goto LABEL_27;
    }
    if ( v9 >= 2u && (v10 < 0x74u || v8->NumTotalMacAddresses || v8->NumMacAddressesPerPort || v8->NumVlansPerPort)
      || Revision >= 2u
      && (v7 < 0x74u
       || HardwareNicSwitchCapabilities->NumTotalMacAddresses
       || HardwareNicSwitchCapabilities->NumMacAddressesPerPort
       || HardwareNicSwitchCapabilities->NumVlansPerPort) )
    {
      v4 = -1073741637;
    }
    else
    {
      v11 = 132LL;
      PoolWithTag = (_NDIS_NIC_SWITCH_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
      a1->NicSwitchCurrentCapabilities = PoolWithTag;
      if ( PoolWithTag )
      {
        v13 = (_NDIS_NIC_SWITCH_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
        a1->TopNicSwitchCurrentCapabilities = v13;
        if ( v13 )
        {
          v14 = (_NDIS_NIC_SWITCH_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
          a1->NicSwitchHwCapabilities = v14;
          if ( v14 )
          {
            memset(a1->TopNicSwitchCurrentCapabilities, 0, sizeof(_NDIS_NIC_SWITCH_CAPABILITIES));
            memset(a1->NicSwitchCurrentCapabilities, 0, sizeof(_NDIS_NIC_SWITCH_CAPABILITIES));
            memset(a1->NicSwitchHwCapabilities, 0, sizeof(_NDIS_NIC_SWITCH_CAPABILITIES));
            v15 = a2->HardwareNicSwitchCapabilities;
            Size = v15->Header.Size;
            if ( v15->Header.Size >= 0x84u )
              Size = 132LL;
            memmove(a1->NicSwitchHwCapabilities, v15, Size);
            CurrentNicSwitchCapabilities = a2->CurrentNicSwitchCapabilities;
            if ( CurrentNicSwitchCapabilities->Header.Size < 0x84u )
              v11 = CurrentNicSwitchCapabilities->Header.Size;
            memmove(a1->NicSwitchCurrentCapabilities, CurrentNicSwitchCapabilities, v11);
            memmove(a1->TopNicSwitchCurrentCapabilities, a2->CurrentNicSwitchCapabilities, v11);
            goto LABEL_27;
          }
        }
      }
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
  if ( NicSwitchCurrentCapabilities )
  {
    ExFreePoolWithTag(NicSwitchCurrentCapabilities, 0);
    a1->NicSwitchCurrentCapabilities = 0LL;
  }
  TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
  if ( TopNicSwitchCurrentCapabilities )
  {
    ExFreePoolWithTag(TopNicSwitchCurrentCapabilities, 0);
    a1->TopNicSwitchCurrentCapabilities = 0LL;
  }
  NicSwitchHwCapabilities = a1->NicSwitchHwCapabilities;
  if ( NicSwitchHwCapabilities )
  {
    ExFreePoolWithTag(NicSwitchHwCapabilities, 0);
    a1->NicSwitchHwCapabilities = 0LL;
  }
LABEL_27:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v22 = v4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x82u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v22);
  }
  return v4;
}
