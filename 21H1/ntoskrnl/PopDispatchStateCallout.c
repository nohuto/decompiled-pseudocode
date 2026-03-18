/*
 * XREFs of PopDispatchStateCallout @ 0x1406FDDE0
 * Callers:
 *     PoPowerOffMonitor @ 0x14037FC20 (PoPowerOffMonitor.c)
 *     PopPrepareSleep @ 0x140380174 (PopPrepareSleep.c)
 *     PoBlockConsoleSwitch @ 0x1406FDD90 (PoBlockConsoleSwitch.c)
 *     PopReleaseAdaptiveLock @ 0x1406FE6C4 (PopReleaseAdaptiveLock.c)
 *     PoUnblockConsoleSwitch @ 0x14076039C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1407603C4 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x1407603E4 (PoStartPowerStateTasks.c)
 *     PopSuspendApps @ 0x140762570 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407625C4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140762624 (PopResumeApps.c)
 *     PopResumeServices @ 0x14076269C (PopResumeServices.c)
 *     PopBlockSessionSwitch @ 0x1407653C0 (PopBlockSessionSwitch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408DED68 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x1408E2F04 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x1408E3028 (PoStartPartitionReplace.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x140710A4C (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-40h]
  unsigned int v8; // [rsp+30h] [rbp-30h] BYREF
  int *v9; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+44h] [rbp-1Ch]
  _DWORD v12[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v6 = a1[1];
    v11 = 0;
    v12[0] = v6;
    v12[1] = a1[2];
    v12[2] = a1[3];
    v12[3] = a1[4];
    v9 = v12;
    v10 = 16;
    EtwTraceKernelEvent((__int64)&v9, 1u, 0x80008000, 0x1228u, 0x401802u);
  }
  v4 = PopInvokeWin32Callout(4LL, a1, 2 - (unsigned int)(a2 != 0), a2 & -(__int64)(a2 != 0), v7);
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v11 = 0;
    v9 = (int *)&v8;
    v8 = v4;
    v10 = 4;
    EtwTraceKernelEvent((__int64)&v9, 1u, 0x80008000, 0x1229u, 0x401802u);
  }
  return v4;
}
