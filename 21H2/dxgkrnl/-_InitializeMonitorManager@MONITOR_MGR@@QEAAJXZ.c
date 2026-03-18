/*
 * XREFs of ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C020FE6C
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C020FDD0 (MonitorCreateMonitorManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InitializeMonitorManager(MONITOR_MGR *this, __int64 a2)
{
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( g_IsInternalRelease || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 436LL) & 0x200) != 0 )
  {
    v4 = 0;
    v5 = 0;
    qword_1C012FFD8 = (__int64)&v4;
    qword_1C012FFE8 = (__int64)&v4;
    qword_1C0130010 = (__int64)&v5;
    qword_1C0130020 = (__int64)&v5;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &unk_1C012FFC0, 0LL, 0LL);
    if ( v4 )
      *((_BYTE *)this + 76) = 0;
    if ( v5 )
      *((_BYTE *)this + 19) = 0;
  }
  *((_BYTE *)this + 20) = 1;
  return 0LL;
}
