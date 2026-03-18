/*
 * XREFs of DrvQueryDisplayConfig @ 0x1C000DE40
 * Callers:
 *     RIMGetQDCActivePathsData @ 0x1C000CC40 (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C000D008 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     NtUserQueryDisplayConfig @ 0x1C000D280 (NtUserQueryDisplayConfig.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C0122940 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145A7C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C000DF58 (DrvIsWddmDriverPresent.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C000DF90 (UserRemoteConnectedSessionUsingWddm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvQueryDisplayConfig(unsigned int a1, unsigned int *a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  bool v9; // di
  _DWORD *v10; // rcx
  int v11; // ebx
  __int64 v12; // rax
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // r8

  v5 = a1;
  v8 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v8 + 24) = v5;
  WdLogEvent5_WdEvent(v8);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    v9 = 0;
    if ( (v5 & 7) == 4 )
    {
      v9 = (unsigned __int8)((__int64 (*)(void))qword_1C024AA40)() != 0;
      if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v14 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v14 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v14 == 3 )
          v9 = 1;
      }
      if ( v9 )
        LODWORD(v5) = v5 & 0xEFFFFFF8 | 0x10000002;
    }
    v10 = 0LL;
    if ( !v9 )
      v10 = a4;
    v11 = qword_1C024A8F8((unsigned int)v5 & 0xFFFFFFEF, v5 & 0x10, a2, a3, v10);
    if ( v11 >= 0 && v9 && a4 )
    {
      v15 = *a2;
      if ( *a2 > 1 )
      {
        v16 = 1;
        do
        {
          v17 = 200LL * v16;
          if ( *(_DWORD *)(a3 + 116) != *(_DWORD *)(v17 + a3 + 116) )
            break;
          if ( *(_DWORD *)(a3 + 120) != *(_DWORD *)(v17 + a3 + 120) )
            break;
          ++v16;
        }
        while ( v16 < v15 );
        *a4 = v16 < v15 ? 4 : 2;
      }
      else
      {
        *a4 = 1;
      }
    }
  }
  else
  {
    v11 = -1073741637;
  }
  v12 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v12 + 24) = v11;
  WdLogEvent5_WdEvent(v12);
  return (unsigned int)v11;
}
