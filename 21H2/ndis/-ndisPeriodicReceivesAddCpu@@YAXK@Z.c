/*
 * XREFs of ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1C00A38B4
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C0076220 (ndisCpuHotAddHandler.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C0023740 (NdisInitializeTimer.c)
 *     ndisCreateThread @ 0x1C00290DC (ndisCreateThread.c)
 *     WPP_RECORDER_SF_dD @ 0x1C00A4674 (WPP_RECORDER_SF_dD_ea_1C00A4674.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisPeriodicReceivesAddCpu(ULONG a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // r8d
  int v5; // r9d
  _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = 0;
  v1 = a1;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  v2 = (unsigned __int64)(unsigned int)v1 << 7;
  NdisInitializeTimer((PNDIS_TIMER)((char *)qword_1C00E40F0 + v2), ndisPeriodicReceivesTimer, 0LL);
  KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_1C00E40F0 + v2 + 64), &ProcNumber);
  ndisWaitForKernelObject(&ndisPeriodicReceivesMutex);
  if ( byte_1C00E40C1
    && (int)ndisCreateThread(v3, (void *)(unsigned int)v1, dword_1C00E40C8, (PVOID *)qword_1C00E4108 + v1) < 0
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)&WPP_RECORDER_INITIALIZED, v4, v5);
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
