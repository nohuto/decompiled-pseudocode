/*
 * XREFs of DrvGetDisplayConfigBufferSizes @ 0x1C000DD50
 * Callers:
 *     RIMGetQDCActivePathsData @ 0x1C000CC40 (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C000D008 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C000D0C0 (NtUserGetDisplayConfigBufferSizes.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C0122940 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145A7C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C000DF58 (DrvIsWddmDriverPresent.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C000DF90 (UserRemoteConnectedSessionUsingWddm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizes(unsigned int a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rax
  bool v8; // di
  _DWORD *v9; // rcx

  v3 = a1;
  v4 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v4 + 24) = v3;
  WdLogEvent5_WdEvent(v4);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    if ( (v3 & 7) == 4 )
    {
      v8 = (unsigned __int8)((__int64 (*)(void))qword_1C024AA40)() != 0;
      if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v9 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v9 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v9 == 3 )
          v8 = 1;
      }
      if ( v8 )
        LODWORD(v3) = v3 & 0xEFFFFFF8 | 0x10000002;
    }
    v5 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C024A8F0)((unsigned int)v3, a2);
  }
  else
  {
    v5 = -1073741637;
  }
  v6 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v6 + 24) = v5;
  WdLogEvent5_WdEvent(v6);
  return (unsigned int)v5;
}
