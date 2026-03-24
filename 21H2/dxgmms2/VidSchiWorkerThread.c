/*
 * XREFs of VidSchiWorkerThread @ 0x1C0090750
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiRun_PriorityTable @ 0x1C0090830 (VidSchiRun_PriorityTable.c)
 *     VidSchiSetSchedulerStatus @ 0x1C0090A04 (VidSchiSetSchedulerStatus.c)
 */

void __fastcall __noreturn VidSchiWorkerThread(_QWORD *StartContext)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  StartContext[20] = KeGetCurrentThread();
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 16LL);
  *((_DWORD *)StartContext + 53) = 16;
  ThreadInformation = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, &ThreadInformation, 4u);
  DpiSetSchedulerCallbackState(*(_QWORD *)(StartContext[2] + 216LL), 3LL);
  StartContext[157] = MEMORY[0xFFFFF78000000320];
  KeWaitForSingleObject(StartContext + 154, Executive, 0, 0, 0LL);
  VidSchiSetSchedulerStatus(StartContext, 1LL, 1LL);
  while ( 1 )
    VidSchiRun_PriorityTable(StartContext);
}
