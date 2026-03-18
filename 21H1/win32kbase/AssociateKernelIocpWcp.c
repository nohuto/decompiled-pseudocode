/*
 * XREFs of AssociateKernelIocpWcp @ 0x1C0064A50
 * Callers:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C00649BC (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall AssociateKernelIocpWcp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  int v5; // ebx

  v5 = ZwAssociateWaitCompletionPacket(a1, a2, a3, a4);
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v4,
      17,
      14,
      (__int64)&WPP_c375c14636bd34c1ee492b0bbe3963bc_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
