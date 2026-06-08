/*
 * XREFs of ProcLibDeviceCreate @ 0x1C002A240
 * Callers:
 *     EvtDriverDeviceAdd @ 0x1C0021AA0 (EvtDriverDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcLibDeviceCreate(char *DeferredContext)
{
  int v2; // edi
  int v4; // [rsp+28h] [rbp-50h]
  __int128 v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  DeferredContext[77] = 0;
  v6 = 0LL;
  *((_DWORD *)DeferredContext + 180) = 100;
  *((_DWORD *)DeferredContext + 181) = 100;
  v9 = 0LL;
  v7 = 0x100000001LL;
  v5 = 0LL;
  LODWORD(v5) = 56;
  v8 = 0LL;
  *(_QWORD *)&v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, char *))(WdfFunctions_01015 + 1632))(
                     WdfDriverGlobals,
                     DeferredContext);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, char *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         &v5,
         DeferredContext + 208);
  if ( v2 >= 0 )
  {
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 760), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 824), (PKDEFERRED_ROUTINE)QuickCapTraceDpc, DeferredContext);
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 912), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 976), (PKDEFERRED_ROUTINE)LongCapTraceDpc, DeferredContext);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x1Du,
      (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
