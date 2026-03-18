/*
 * XREFs of DxgkReportAdapterPowerRapidHpdTrigerEvent @ 0x1C0023838
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C01EFEE0 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C00239C0 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C01D47C8 (MonitorGetNumConnectedMonitor.c)
 */

void __fastcall DxgkReportAdapterPowerRapidHpdTrigerEvent(__int64 a1)
{
  struct DXGGLOBAL *Global; // rax
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]
  char v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1;
  v5 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v3);
  if ( *(_DWORD *)(a1 + 200) == 1 && !*(_BYTE *)(a1 + 2705) )
  {
    if ( *(_QWORD *)(a1 + 2792) )
    {
      v6 = 0;
      if ( (int)MonitorGetNumConnectedMonitor(a1, &v6) >= 0 )
      {
        if ( v6 )
        {
          Global = DXGGLOBAL_GetGlobal();
          RAPID_HPD_MANAGER::ReportTriggerEvent((char *)Global + 305224, 3LL, *(_QWORD *)(a1 + 404));
        }
      }
    }
  }
  if ( v5 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v3);
}
