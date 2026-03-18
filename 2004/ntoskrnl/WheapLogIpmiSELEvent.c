/*
 * XREFs of WheapLogIpmiSELEvent @ 0x1405B7F88
 * Callers:
 *     WheaSelLogErrorPkt @ 0x1405B8AEC (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x1405B8BD8 (WheaSelLogEvent.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x1405B8028 (WheapLogIpmiSELEventHighIrql.c)
 */

__int64 __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r9d
  __int64 result; // rax

  v4 = Size;
  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) )
  {
    memset((char *)&WheapDispatchPtr.DeviceQueue.Lock + 4, 0, 0xFECuLL);
    WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink = (struct _LIST_ENTRY *)0x15253534FLL;
    v6 = 4075;
    HIDWORD(WheapDispatchPtr.DeviceQueue.DeviceListHead.Blink) = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    LODWORD(WheapDispatchPtr.DeviceQueue.Lock) = v6;
    LODWORD(WheapDispatchPtr.DeviceQueue.DeviceListHead.Blink) = v6 + 20;
    memmove((char *)&WheapDispatchPtr.DeviceQueue.Lock + 4, Src, v6);
    return WheapLogIpmiSELEventHighIrql();
  }
  return result;
}
