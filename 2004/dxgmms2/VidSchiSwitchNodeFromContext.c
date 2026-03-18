/*
 * XREFs of VidSchiSwitchNodeFromContext @ 0x1C008A740
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0014D00 (VidSchiSwitchFromSuspendedDevices.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0033550 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0011214 (VidSchWaitForEvents.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C0086BC0 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0086C2C (VidSchiAllocateDmaPacket.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C008A848 (VidSchGetNewSubmissionFenceId.c)
 */

__int64 __fastcall VidSchiSwitchNodeFromContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rsi
  _QWORD *DmaPacket; // rdi
  void (__fastcall *v5)(_QWORD); // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  struct _KEVENT *p_Event; // [rsp+60h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 96);
  if ( a1 == *(_QWORD *)(result + 224) )
  {
    result = *(unsigned int *)(result + 2880);
    if ( !(_DWORD)result )
    {
      v2 = *(_QWORD *)(a1 + 96);
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL);
      DmaPacket = VidSchiAllocateDmaPacket(v2);
      *((_DWORD *)DmaPacket + 22) = 0;
      *(_DWORD *)DmaPacket = 912353622;
      DmaPacket[10] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)DmaPacket + 18) = 7;
      DmaPacket[6] = *(_QWORD *)(v2 + 32);
      VidSchGetNewSubmissionFenceId(v3, 0LL, *(unsigned __int16 *)(v2 + 4), DmaPacket + 13);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *((_DWORD *)DmaPacket + 23) |= 0x1000u;
      DmaPacket[25] = &Event;
      *(_BYTE *)(v3 + 54) = 1;
      if ( *(_DWORD *)(v2 + 11224) != -1 )
      {
        v5 = *(void (__fastcall **)(_QWORD))(v3 + 2960);
        if ( v5 )
          v5(*(_QWORD *)(v3 + 3024));
      }
      *(_BYTE *)(v3 + 54) = 0;
      *((_DWORD *)DmaPacket + 23) |= 0x400u;
      VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
      p_Event = &Event;
      return VidSchWaitForEvents(v3, 1u, (PVOID *)&p_Event, 0LL, 0);
    }
  }
  return result;
}
