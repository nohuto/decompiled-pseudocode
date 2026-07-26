/*
 * XREFs of ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C
 * Callers:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0001008 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0006020 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006AE0 (-ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015144 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018924 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001B340 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ndisDispatchRequest @ 0x1C001D380 (ndisDispatchRequest.c)
 *     ?ndisStartDeviceWorkItem@@YAXPEAX@Z @ 0x1C0021980 (-ndisStartDeviceWorkItem@@YAXPEAX@Z.c)
 *     NdisMSetMiniportAttributes @ 0x1C0022EF0 (NdisMSetMiniportAttributes.c)
 *     NdisRegisterDeviceEx @ 0x1C0023F40 (NdisRegisterDeviceEx.c)
 *     NdisSetOptionalHandlers @ 0x1C0024360 (NdisSetOptionalHandlers.c)
 *     ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C0025300 (-ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     NdisRegisterProtocolDriver @ 0x1C002DE90 (NdisRegisterProtocolDriver.c)
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C0034D94 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036620 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisDeregisterDeviceEx @ 0x1C005FBA0 (NdisDeregisterDeviceEx.c)
 *     NdisLWMInitializeNetworkInterface @ 0x1C0060180 (NdisLWMInitializeNetworkInterface.c)
 *     NdisLWMStartNetworkInterface @ 0x1C0060520 (NdisLWMStartNetworkInterface.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C0060690 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisMDeregisterDevice @ 0x1C0060AE0 (NdisMDeregisterDevice.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C0061800 (NdisWdfPnpPowerEventHandler.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C0066100 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0069840 (NdisEnumerateFilterModules.c)
 *     ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C006A738 (-ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007F750 (-ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisPnPHandlePagingIrp@@YAXPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C007FB2C (-ndisPnPHandlePagingIrp@@YAXPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008BF50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C0096DFC (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisRegisterProtocol @ 0x1C00983F0 (NdisRegisterProtocol.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C00B5A60 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C00B63C0 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C00B6740 (NdisMCmRegisterAddressFamilyEx.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00FFE80 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0109EC0 (-ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C010A494 (-ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B918 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010BB10 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010BCF0 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C012A270 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A578 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012A830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012B8C4 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C012BA8C (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     NdisMSetAttributesEx @ 0x1C012C0F0 (NdisMSetAttributesEx.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012CDE8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C012DF30 (NdisOpenAdapterEx.c)
 *     ?ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C012EA60 (-ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     NdisMRegisterInterruptEx @ 0x1C0131740 (NdisMRegisterInterruptEx.c)
 *     ?ndisFindMiniportOnGlobalList@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@@Z @ 0x1C0135450 (-ndisFindMiniportOnGlobalList@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x1C01355E0 (-ndisMFinishQueuedPendingOpen@@YAXPEAX@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0135820 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0135C84 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 *     NdisMAllocateMapRegisters @ 0x1C01362D0 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C0136900 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C0136A10 (NdisMFreeMapRegisters.c)
 *     NdisMRegisterDevice @ 0x1C0136BB0 (NdisMRegisterDevice.c)
 *     NdisMRegisterDmaChannel @ 0x1C0136E80 (NdisMRegisterDmaChannel.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013747C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisMDeregisterInterruptEx @ 0x1C01379D0 (NdisMDeregisterInterruptEx.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0137B7C (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0137DA8 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0138B58 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0138DC0 (-ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139A18 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFindRootDevice @ 0x1C013A548 (ndisFindRootDevice.c)
 *     NdisCloseAdapter @ 0x1C013AA30 (NdisCloseAdapter.c)
 *     NdisDeregisterProtocol @ 0x1C013AD50 (NdisDeregisterProtocol.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013AF90 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisNotifyAfRegistration@@YAXPEAX@Z @ 0x1C013B700 (-ndisNotifyAfRegistration@@YAXPEAX@Z.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C013B850 (NdisMCmRegisterAddressFamily.c)
 * Callees:
 *     NdisMSleep @ 0x1C0017320 (NdisMSleep.c)
 */

void __fastcall ndisReferencePackage(struct _PKG_REF *a1)
{
  signed __int32 v2; // eax
  void *v3; // rcx
  signed __int32 v4; // eax
  PVOID v5; // rax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 1u);
  v3 = (void *)*((_QWORD *)a1 + 2);
  v4 = v2 + 1;
  if ( !v3 )
  {
    if ( v4 == 1 )
    {
      v5 = MmLockPagableDataSection(*((PVOID *)a1 + 1));
      *((_QWORD *)a1 + 2) = v5;
      MmUnlockPagableImageSection(v5);
      v3 = (void *)*((_QWORD *)a1 + 2);
    }
    else
    {
      do
      {
        NdisMSleep(0x32u);
        v3 = (void *)*((_QWORD *)a1 + 2);
      }
      while ( !v3 );
    }
  }
  MmLockPagableSectionByHandle(v3);
}
