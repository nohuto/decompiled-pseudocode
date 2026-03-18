/*
 * XREFs of ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C0126ADC
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C0126A0C (MonitorGetCCDMonitorID.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0189F78 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     ?_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C02F5398 (-_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009738 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorCCDMonitorID(DXGMONITOR *this, __int64 a2, int a3, unsigned __int16 *a4)
{
  char v6; // bp
  __int64 v8; // rax
  DXGADAPTER *v9; // rcx
  NTSTATUS appended; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  bool IsBddFallbackDriver; // al
  const WCHAR *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  v6 = a2;
  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a4 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  Destination = 0LL;
  a4[a3 - 1] = 0;
  v8 = *((_QWORD *)this + 4);
  Destination.MaximumLength = 2 * a3 - 2;
  Destination.Buffer = a4;
  v9 = *(DXGADAPTER **)(*(_QWORD *)(v8 + 8) + 16LL);
  if ( (*((_DWORD *)v9 + 87) & 0x20) == 0 )
    goto LABEL_6;
  IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(v9);
  v24 = L"MSNIL";
  if ( !IsBddFallbackDriver )
    v24 = L"MSBDD_";
  LODWORD(v15) = RtlAppendUnicodeToString(&Destination, v24);
  if ( (int)v15 < 0 )
  {
    v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v28 + 24) = (int)v15;
    WdLogEvent5_WdWarning(v28);
  }
  else
  {
LABEL_6:
    appended = RtlAppendUnicodeStringToString(
                 &Destination,
                 (PCUNICODE_STRING)((char *)this + (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 536));
    v15 = appended;
    if ( appended >= 0 )
    {
      v16 = *((_QWORD *)this + 71);
      if ( v16 && !*(_DWORD *)(v16 + 16) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v12, v11);
        WdLogEvent5_WdAssertion(v29);
      }
      v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 348LL);
      if ( (v17 & 0x20) == 0 && (v17 & 0x40000) == 0 )
      {
        v18 = *((_QWORD *)this + 71);
        if ( v18 )
        {
          if ( *(_DWORD *)(v18 + 16) <= 1u )
            return 0LL;
        }
      }
      v20 = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 552));
      v15 = v20;
      if ( v20 >= 0 )
        return 0LL;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = v15;
  }
  return (unsigned int)v15;
}
