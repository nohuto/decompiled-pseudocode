/*
 * XREFs of PopDispatchStateCallout @ 0x1407127E4
 * Callers:
 *     PoPowerOffMonitor @ 0x140380460 (PoPowerOffMonitor.c)
 *     PopPrepareSleep @ 0x1403809B4 (PopPrepareSleep.c)
 *     PopReleaseAdaptiveLock @ 0x140711F10 (PopReleaseAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x140712794 (PoBlockConsoleSwitch.c)
 *     PoUnblockConsoleSwitch @ 0x140761C7C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140761CA4 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140761CC4 (PoStartPowerStateTasks.c)
 *     PopSuspendApps @ 0x140763E50 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140763EA4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140763F04 (PopResumeApps.c)
 *     PopResumeServices @ 0x140763F7C (PopResumeServices.c)
 *     PopBlockSessionSwitch @ 0x140766D80 (PopBlockSessionSwitch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408DFFC8 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x1408E4184 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x1408E42A8 (PoStartPartitionReplace.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1406A4E40 (PopInvokeWin32Callout.c)
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

  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v6 = a1[1];
    v10 = 0;
    v11[0] = v6;
    v11[1] = a1[2];
    v11[2] = a1[3];
    v11[3] = a1[4];
    v8 = v11;
    v9 = 16;
    EtwTraceKernelEvent((int)&v8, 1, 0x80008000, 4648, 4200450);
  }
  v4 = PopInvokeWin32Callout(4, (__int64)a1, 2 - (unsigned int)(a2 != 0), (int *)(a2 & -(__int64)(a2 != 0)));
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v10 = 0;
    v8 = (int *)&v7;
    v7 = v4;
    v9 = 4;
    EtwTraceKernelEvent((int)&v8, 1, 0x80008000, 4649, 4200450);
  }
  return v4;
}
