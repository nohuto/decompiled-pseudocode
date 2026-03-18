/*
 * XREFs of VidSchiSubmitPreemptionCommand @ 0x1C0086B1C
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000A620 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0014D00 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiResetEngine @ 0x1C0030CE0 (VidSchiResetEngine.c)
 *     VidSchiCheckHwProgress @ 0x1C007F230 (VidSchiCheckHwProgress.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00D149C (VidSchiPreemptEngineNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C0086BE0 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0086C4C (VidSchiAllocateDmaPacket.c)
 */

__int64 __fastcall VidSchiSubmitPreemptionCommand(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 DmaPacket; // r14
  __int64 v6; // rax
  void (__fastcall *v8)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v1 + 104);
  DmaPacket = VidSchiAllocateDmaPacket();
  *(_DWORD *)DmaPacket = 912353622;
  *(_QWORD *)(DmaPacket + 48) = v1;
  v6 = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(DmaPacket + 92) = 0;
  *(_QWORD *)(DmaPacket + 80) = v6;
  *(_DWORD *)(DmaPacket + 72) = 7;
  *(_DWORD *)(DmaPacket + 88) = 3;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 716));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2876));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 1580));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 784));
  *(_BYTE *)(v3 + 54) = 1;
  if ( *(_DWORD *)(a1 + 11224) != -1 )
  {
    v8 = *(void (__fastcall **)(_QWORD))(v3 + 2960);
    if ( v8 )
      v8(*(_QWORD *)(v3 + 3024));
  }
  *(_BYTE *)(v3 + 54) = 0;
  *(_DWORD *)(DmaPacket + 92) |= 0x400u;
  return VidSchiSendToExecutionQueueWithWait(DmaPacket, 0LL);
}
