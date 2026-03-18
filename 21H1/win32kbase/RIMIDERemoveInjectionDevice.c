/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C0160294
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C013D420 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C015B770 (RIMIDEProcessRemoveInjectionDevices.c)
 *     rimDoVirtRimDevChange @ 0x1C0175A60 (rimDoVirtRimDevChange.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB610 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C0056CA8 (RIMFreeSpecificDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00A16B8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     rimDoRimDevChange @ 0x1C00A3168 (rimDoRimDevChange.c)
 *     RIMFreeDev @ 0x1C0159410 (RIMFreeDev.c)
 *     RIMEndAllActiveContacts @ 0x1C0165CF0 (RIMEndAllActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rbx
  int v4; // edx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rcx

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 272) & 0x2000) == 0 || (*(_DWORD *)(a1 + 288) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v3 = *(_QWORD *)(a1 + 424);
  RIMLockExclusive(v3 + 568);
  if ( (*(_DWORD *)(a1 + 288) & 0x80u) != 0 && !*(_BYTE *)(v3 + 80) && !*(_BYTE *)(v3 + 81) )
    RIMEndAllActiveContacts(v3, *(_QWORD *)(a1 + 568), 0LL);
  v5 = *(_DWORD *)(a1 + 272);
  if ( (v5 & 0x20) == 0
    && *(_BYTE *)(a1 + 136) != 3
    && (v5 < 0 || *(_QWORD *)(a1 + 280) || (*(_DWORD *)(a1 + 276) & 2) != 0) )
  {
    if ( (*(_DWORD *)(a1 + 276) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    *(_DWORD *)(a1 + 288) |= 1u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v4, 1, 52, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, a1 + 88);
    }
    v2 = 0;
  }
  *(_QWORD *)(v3 + 576) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
  KeLeaveCriticalRegion();
  if ( v2 )
  {
    if ( (*(_QWORD *)(v3 + 640) || *(_DWORD *)(v3 + 864)) && *(_QWORD *)(v3 + 32) != PsGetCurrentProcess(v7, v6)
      || *(_BYTE *)(v3 + 82) )
    {
      *(_DWORD *)(a1 + 272) |= 0x40000u;
      RIMLockExclusive((__int64)&gObListLock);
      *(_DWORD *)(a1 + 288) |= 4u;
      qword_1C02562F8 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      *(_DWORD *)(a1 + 272) |= 0x200000u;
      ZwSetEvent(*(HANDLE *)(v3 + 384), 0LL);
    }
    else
    {
      rimDoRimDevChange(v3, a1 + 88, 3u);
      if ( bRimDispositionNormal((struct RawInputManagerObject *)v3) )
      {
        RIMFreeDev(v9, a1 + 88);
      }
      else if ( *(_BYTE *)(v3 + 81) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 53, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
        }
        RIMFreeSpecificDev(v3, a1 + 88);
      }
    }
  }
}
