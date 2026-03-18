/*
 * XREFs of DrvGetDisplayConfigBufferSizes @ 0x1C00B5AF0
 * Callers:
 *     RIMGetQDCActivePathsData @ 0x1C000CF30 (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C002BC50 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C00B4080 (NtUserGetDisplayConfigBufferSizes.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C0124C90 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0147F4C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C00B39E0 (UserRemoteConnectedSessionUsingWddm.c)
 *     DrvIsWddmDriverPresent @ 0x1C00B5CF8 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rax
  bool v12; // di
  _DWORD *v13; // rcx

  v4 = (unsigned int)a1;
  v5 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = v4;
  WdLogEvent5_WdEvent(v5);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    if ( (v4 & 7) == 4 )
    {
      v12 = (unsigned __int8)qword_1C024CA40() != 0;
      if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v13 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v13 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v13 == 3 )
          v12 = 1;
      }
      if ( v12 )
        LODWORD(v4) = v4 & 0xEFFFFFF8 | 0x10000002;
    }
    v9 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C024C8F0)((unsigned int)v4, a2);
  }
  else
  {
    v9 = -1073741637;
  }
  v10 = WdLogNewEntry5_WdEvent(v7, v6, v8);
  *(_QWORD *)(v10 + 24) = v9;
  WdLogEvent5_WdEvent(v10);
  return (unsigned int)v9;
}
