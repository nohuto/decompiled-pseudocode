/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C0159F44
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C0137780 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C0155420 (RIMIDEProcessRemoveInjectionDevices.c)
 *     rimDoVirtRimDevChange @ 0x1C016F730 (rimDoVirtRimDevChange.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B58B0 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C0015F38 (RIMFreeSpecificDev.c)
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00AAB88 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     RIMFreeDev @ 0x1C01530C0 (RIMFreeDev.c)
 *     RIMEndAllActiveContacts @ 0x1C015F9A0 (RIMEndAllActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMIDERemoveInjectionDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  v5 = 1;
  if ( (*(_DWORD *)(a1 + 272) & 0x2000) == 0 || (*(_DWORD *)(a1 + 288) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 424);
  RIMLockExclusive(v6 + 568);
  if ( (*(_DWORD *)(a1 + 288) & 0x80u) != 0 && !*(_BYTE *)(v6 + 80) && !*(_BYTE *)(v6 + 81) )
    RIMEndAllActiveContacts(v6, *(_QWORD *)(a1 + 568), 0LL);
  v10 = *(_DWORD *)(a1 + 272);
  if ( (v10 & 0x20) == 0
    && *(_BYTE *)(a1 + 136) != 3
    && (v10 < 0 || *(_QWORD *)(a1 + 280) || (*(_DWORD *)(a1 + 276) & 2) != 0) )
  {
    if ( (*(_DWORD *)(a1 + 276) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v7, v8, v9);
    *(_DWORD *)(a1 + 288) |= 1u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v7, 1, 52, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, a1 + 88);
    }
    v5 = 0;
  }
  *(_QWORD *)(v6 + 576) = 0LL;
  ExReleasePushLockExclusiveEx(v6 + 568, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    if ( (*(_QWORD *)(v6 + 640) || *(_DWORD *)(v6 + 864)) && *(_QWORD *)(v6 + 32) != PsGetCurrentProcess(v12, v11)
      || *(_BYTE *)(v6 + 82) )
    {
      *(_DWORD *)(a1 + 272) |= 0x40000u;
      RIMLockExclusive((__int64)&gObListLock);
      *(_DWORD *)(a1 + 288) |= 4u;
      qword_1C0250368 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      *(_DWORD *)(a1 + 272) |= 0x200000u;
      ZwSetEvent(*(HANDLE *)(v6 + 384), 0LL);
    }
    else
    {
      rimDoRimDevChange(v6, a1 + 88, 3LL, v13);
      if ( bRimDispositionNormal((struct RawInputManagerObject *)v6) )
      {
        RIMFreeDev(v15, a1 + 88);
      }
      else if ( *(_BYTE *)(v6 + 81) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 53, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
        }
        RIMFreeSpecificDev(v6, a1 + 88, v16, v17);
      }
    }
  }
}
