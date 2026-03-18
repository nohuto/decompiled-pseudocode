/*
 * XREFs of ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02B9328
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B9F30 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ @ 0x1C0042F54 (-IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ.c)
 *     ?CollectIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02BA050 (-CollectIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02BA22C (-CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddDriverWhiteboxInfo(struct DXGADAPTER **this)
{
  struct DXGADAPTER *v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax

  if ( !ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(*((ADAPTER_DISPLAY **)*this + 337)) )
    return 3221225659LL;
  v3 = DRIVERWHITEBOXINFO::CollectNonIntrusiveDriverData((DRIVERWHITEBOXINFO *)(this + 245), v2);
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  v8 = DRIVERWHITEBOXINFO::CollectIntrusiveDriverData((DRIVERWHITEBOXINFO *)(this + 245), *this);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  if ( (int)v6 >= 0 || (int)v11 >= 0 )
    *((_BYTE *)this + 3248) = 1;
  else
    LODWORD(v6) = -1073741823;
  return (unsigned int)v6;
}
