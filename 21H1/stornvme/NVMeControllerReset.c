/*
 * XREFs of NVMeControllerReset @ 0x1C000D088
 * Callers:
 *     NVMeHwResetBus @ 0x1C00099A0 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C000C0D0 (NVMeControllerAsyncResetWorker.c)
 * Callees:
 *     IsNVMeControllerOnFatalError @ 0x1C00048A0 (IsNVMeControllerOnFatalError.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C00091A4 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0009E6C (ControllerReset.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C000BC18 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000C1C4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerInitPart1 @ 0x1C000C62C (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000C7F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000CA34 (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1C000F348 (NVMeQueuesReInit.c)
 *     NvmSubsystemReset @ 0x1C000F970 (NvmSubsystemReset.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // di
  __int64 v5; // rdx
  int v6; // edx
  __int64 *v7; // rcx
  __int64 v8; // rax

  v4 = 1;
  StorPortDebugPrint(3LL, "StorNVMe - Controller Reset START\n");
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3796), 0) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset Already in Progress\n");
    return v4;
  }
  StorPortPause(a1, 120LL);
  LOBYTE(v5) = 14;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFFEE | 0x10;
  NVMeControllerCompleteAllIORequests(a1, v5);
  NVMeCancelAllCompletionQueueDpc(a1);
  IsNVMeControllerOnFatalError(a1);
  if ( a2 )
  {
    if ( (*(_QWORD *)(a1 + 168) & 0x1000000000LL) == 0 || !(unsigned __int8)NvmSubsystemReset(a1) )
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (CAP.NSSRS == 0)\n");
      goto LABEL_11;
    }
    if ( (*(_BYTE *)(a1 + 3776) & 3) == 3 )
      *(_BYTE *)(a1 + 3776) |= 4u;
  }
  else if ( !(unsigned __int8)ControllerReset(a1) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (ControllerReset() == FALSE)\n");
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 24) &= ~0x10u;
  NVMeQueuesReInit(a1);
  if ( NVMeControllerInitPart1(a1, 0) )
  {
    if ( NVMeControllerInitPart2(a1, 0, 1) && NVMeControllerInitPart3(a1) )
    {
      v6 = 0;
      if ( *(int *)(a1 + 200) > 0 )
      {
        v7 = (__int64 *)(a1 + 1720);
        do
        {
          v8 = *v7;
          if ( *v7 )
          {
            if ( !a2 )
            {
              ++*(_DWORD *)(v8 + 40);
              v8 = *v7;
            }
            ++*(_DWORD *)(v8 + 44);
          }
          ++v6;
          ++v7;
        }
        while ( v6 < *(_DWORD *)(a1 + 200) );
      }
      goto LABEL_24;
    }
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart2() == FALSE)\n");
  }
  else
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart1() == FALSE)\n");
  }
LABEL_11:
  v4 = 0;
LABEL_24:
  *(_DWORD *)(a1 + 3796) &= ~1u;
  StorPortResume(a1);
  if ( v4 )
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset SUCCESS\n");
  else
    NVMeControllerStartFailureEventLog(a1);
  return v4;
}
