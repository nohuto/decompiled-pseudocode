/*
 * XREFs of ?_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C02F43F8
 * Callers:
 *     ?_GetAppOverride@DXGMONITOR@@QEAA_NPEAXU_GUID@@@Z @ 0x1C02F42F8 (-_GetAppOverride@DXGMONITOR@@QEAA_NPEAXU_GUID@@@Z.c)
 *     ?_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z @ 0x1C02F53F0 (-_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C012595C (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetAppOverrideKey(DXGMONITOR *this, PCUNICODE_STRING Source, unsigned __int64 *a3)
{
  unsigned __int16 *v6; // rdi
  unsigned int v7; // esi
  SIZE_T v8; // rax
  unsigned __int16 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  int MonitorCCDMonitorID; // ebx
  __int64 v17; // rax
  unsigned int Length; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v27; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 HashValue; // [rsp+78h] [rbp+48h] BYREF

  v6 = 0LL;
  v7 = 130;
  while ( 1 )
  {
    if ( v6 )
      operator delete[](v6);
    v7 *= 2;
    v8 = 2LL * v7;
    if ( !is_mul_ok(v7, 2uLL) )
      v8 = -1LL;
    v9 = (unsigned __int16 *)operator new[](v8, 0x4D677844u, PagedPool);
    v6 = v9;
    if ( !v9 )
      break;
    LOBYTE(v10) = 1;
    MonitorCCDMonitorID = DXGMONITOR::_GetMonitorCCDMonitorID(this, v10, v7, v9);
    if ( MonitorCCDMonitorID >= 0 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v6);
      DestinationString.MaximumLength = 2 * v7 - 2;
      MonitorCCDMonitorID = RtlAppendUnicodeStringToString(&DestinationString, Source);
    }
    if ( MonitorCCDMonitorID != -2147483643 && MonitorCCDMonitorID != -1073741789 )
    {
      if ( MonitorCCDMonitorID < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v17 + 32) = MonitorCCDMonitorID;
        *(_QWORD *)(v17 + 24) = this;
        WdLogEvent5_WdError(v17);
LABEL_22:
        operator delete[](v6);
        return (unsigned int)MonitorCCDMonitorID;
      }
      HashValue = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v6);
      Length = DestinationString.Length;
      DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
      MonitorCCDMonitorID = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
      if ( MonitorCCDMonitorID < 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v21);
      }
      if ( Length <= 2 )
      {
LABEL_20:
        if ( MonitorCCDMonitorID < 0 )
          goto LABEL_22;
      }
      else
      {
        DestinationString.MaximumLength -= DestinationString.Length;
        v22 = (unsigned __int64)DestinationString.Length >> 1;
        DestinationString.Length = Length - DestinationString.Length;
        DestinationString.Buffer = &v6[v22];
        MonitorCCDMonitorID = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue + 1);
        if ( MonitorCCDMonitorID < 0 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v24, v23);
          WdLogEvent5_WdAssertion(v25);
          goto LABEL_20;
        }
      }
      *a3 = HashValue;
      goto LABEL_22;
    }
    MonitorCCDMonitorID = -1073741789;
    if ( v7 >= 0x410 )
      goto LABEL_22;
  }
  v27 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
  WdLogEvent5_WdLowResource(v27);
  return 3221225495LL;
}
