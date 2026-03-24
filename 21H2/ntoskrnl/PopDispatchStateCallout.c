/*
 * XREFs of PopDispatchStateCallout @ 0x14067E9C8
 * Callers:
 *     PoPowerOffMonitor @ 0x140382864 (PoPowerOffMonitor.c)
 *     PopPrepareSleep @ 0x140382D5C (PopPrepareSleep.c)
 *     PopReleaseAdaptiveLock @ 0x14067DFA4 (PopReleaseAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x14067E978 (PoBlockConsoleSwitch.c)
 *     PoUnblockConsoleSwitch @ 0x14077415C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140774184 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x1407741A4 (PoStartPowerStateTasks.c)
 *     PopSuspendApps @ 0x140776410 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140776464 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407764C4 (PopResumeApps.c)
 *     PopResumeServices @ 0x14077653C (PopResumeServices.c)
 *     PopBlockSessionSwitch @ 0x140779D60 (PopBlockSessionSwitch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E3608 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x1408E7598 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x1408E76B8 (PoStartPartitionReplace.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x14067B7C8 (PopInvokeWin32Callout.c)
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
