/*
 * XREFs of ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C003FE34
 * Callers:
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0040A9C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C023AD88 (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C023AE78 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x1C02B2408 (-AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::CheckDebugBreak(DXGGLOBAL *this)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)*((_QWORD *)this + 201);
  if ( v1 )
  {
    if ( !*v1 )
    {
      if ( !v1[1] )
        return;
      v1[1] = 0;
    }
    __debugbreak();
  }
}
