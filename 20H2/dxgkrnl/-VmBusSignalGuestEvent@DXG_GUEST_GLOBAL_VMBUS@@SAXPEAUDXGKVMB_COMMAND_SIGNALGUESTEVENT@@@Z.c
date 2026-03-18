/*
 * XREFs of ?VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z @ 0x1C0040E58
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C00402D0 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     <none>
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEvent(struct DXGKVMB_COMMAND_SIGNALGUESTEVENT *a1)
{
  void *v2; // rdi

  if ( !*((_QWORD *)a1 + 4) )
  {
    v2 = (void *)*((_QWORD *)a1 + 3);
    if ( (unsigned __int64)v2 > MmUserProbeAddress )
    {
      KeSetEvent(*((PRKEVENT *)a1 + 3), 0, 0);
      if ( *((_BYTE *)a1 + 40) )
        ObfDereferenceObject(v2);
    }
  }
}
