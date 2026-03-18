/*
 * XREFs of ?SetErrorState@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C0239D9C
 * Callers:
 *     ?VmBusProcessPacketCblt@@YAXPEAX@Z @ 0x1C00D8230 (-VmBusProcessPacketCblt@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXG_VMBUS_CHANNEL_BASE::SetErrorState(DXG_VMBUS_CHANNEL_BASE *this, __int64 a2)
{
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 304322) )
    *((_BYTE *)this + 57) = 1;
}
