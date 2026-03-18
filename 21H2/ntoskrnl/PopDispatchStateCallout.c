/*
 * XREFs of PopDispatchStateCallout @ 0x1407FE82C
 * Callers:
 *     PoPowerOffMonitor @ 0x14038B628 (PoPowerOffMonitor.c)
 *     PopPrepareSleep @ 0x14038BAA8 (PopPrepareSleep.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 *     PopBlockSessionSwitch @ 0x1407FE700 (PopBlockSessionSwitch.c)
 *     PoUnblockConsoleSwitch @ 0x1407FE774 (PoUnblockConsoleSwitch.c)
 *     PoStartPowerStateTasks @ 0x1407FE79C (PoStartPowerStateTasks.c)
 *     PoEndPowerStateTasks @ 0x1407FE7BC (PoEndPowerStateTasks.c)
 *     PoBlockConsoleSwitch @ 0x1407FE7DC (PoBlockConsoleSwitch.c)
 *     PopSuspendApps @ 0x1407FFCB0 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407FFD04 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407FFD64 (PopResumeApps.c)
 *     PopResumeServices @ 0x1407FFDDC (PopResumeServices.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14098C0DC (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x14098FC84 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x14098FDA8 (PoStartPartitionReplace.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098FDE4 (PopSendSuspendResumeApplicationNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1407F2AD0 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // [rsp+30h] [rbp-30h] BYREF
  int *v8; // [rsp+38h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+44h] [rbp-1Ch]
  _DWORD v11[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v6 = a1[1];
    v10 = 0;
    v11[0] = v6;
    v11[1] = a1[2];
    v11[2] = a1[3];
    v11[3] = a1[4];
    v8 = v11;
    v9 = 16;
    EtwTraceKernelEvent((__int64)&v8, 1u, 0x80008000, 0x1228u, 0x401802u);
  }
  v4 = PopInvokeWin32Callout(4, (__int64)a1, 2 - (unsigned int)(a2 != 0), (unsigned int *)(a2 & -(__int64)(a2 != 0)));
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v10 = 0;
    v8 = (int *)&v7;
    v7 = v4;
    v9 = 4;
    EtwTraceKernelEvent((__int64)&v8, 1u, 0x80008000, 0x1229u, 0x401802u);
  }
  return v4;
}
