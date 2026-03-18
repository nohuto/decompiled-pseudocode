/*
 * XREFs of KiInitializeProcessor @ 0x140A5943C
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140A69470 (KiInitializeDynamicProcessorDpc.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 * Callees:
 *     KeInitializeGate @ 0x14025E6B4 (KeInitializeGate.c)
 *     KiInitializeDpcList @ 0x14025E724 (KiInitializeDpcList.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     KiCreateDpcLimitsProcessorConfiguration @ 0x1403C1C58 (KiCreateDpcLimitsProcessorConfiguration.c)
 *     KeInitializeThreadedDpc @ 0x1403C1DA0 (KeInitializeThreadedDpc.c)
 *     KiApplyProcessorDpcLimits @ 0x140A59518 (KiApplyProcessorDpcLimits.c)
 */

__int64 __fastcall KiInitializeProcessor(__int64 a1)
{
  int v1; // esi
  int v3; // ecx
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+48h] [rbp-10h]

  v1 = (int)KeDpcWatchdogProfileBufferSizeBytes;
  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  v7 = 0;
  if ( KeThreadDpcEnable )
  {
    KeInitializeGate(a1 + 32320);
    KiInitializeDpcList((_QWORD *)(a1 + 13168));
    *(_QWORD *)(a1 + 13184) = 0LL;
    *(_DWORD *)(a1 + 13192) = 0;
  }
  KeInitializeThreadedDpc((PRKDPC)(a1 + 34264), (PKDEFERRED_ROUTINE)KiDpcWatchdog, (PVOID)*(unsigned int *)(a1 + 36));
  v3 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 34265) = 2;
  if ( !*(_QWORD *)(a1 + 34320) )
    *(_WORD *)(a1 + 34266) = v3 + 2048;
  KeInitializeTimerEx((PKTIMER)(a1 + 34328), NotificationTimer);
  KiCreateDpcLimitsProcessorConfiguration((__int64)v5, 0, v1);
  return KiApplyProcessorDpcLimits(a1, v5);
}
