/*
 * XREFs of ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C02219E0
 * Callers:
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01112C0 (DxgkGetAdapterDeviceDesc.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0177C80 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0226618 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C0036800 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C00380DC (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C0174288 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 */

__int64 __fastcall DxgkpGetIndirectDisplayPairedAdapter(ADAPTER_DISPLAY **a1, char a2, DXGADAPTER **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  const struct _GUID *v8; // rbx
  bool v9; // zf
  int DefaultRenderAdapterForSession; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rax
  struct DXGADAPTER *v16; // rdx
  __int64 v17; // rax
  unsigned __int8 v18; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v19; // [rsp+58h] [rbp+20h] BYREF

  DXGADAPTER_REFERENCE::Assign(a3, 0LL);
  v8 = 0LL;
  if ( a1 && (*((_DWORD *)a1 + 87) & 0x100) != 0 )
  {
    ADAPTER_DISPLAY::GetPairedRenderAdapter(a1[337], a3, 0LL);
    if ( !*a3 )
      goto LABEL_9;
    if ( a2 && (*((_DWORD *)*a3 + 50) != 1 || *((_BYTE *)*a3 + 2609)) )
      DXGADAPTER_REFERENCE::Assign(a3, 0LL);
    if ( !*a3 )
    {
LABEL_9:
      v9 = a1[550] == 0LL;
      v19 = 0LL;
      v18 = 0;
      DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(&v19, a3, !v9, (bool *)&v18);
      v13 = DefaultRenderAdapterForSession;
      if ( DefaultRenderAdapterForSession < 0 )
      {
        v14 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v14 + 24) = a1;
        *(_QWORD *)(v14 + 32) = v13;
        WdLogEvent5_WdError(v14);
        return (unsigned int)v13;
      }
      v16 = *a3;
      if ( v18 )
        v8 = (const struct _GUID *)((char *)v16 + 300);
      ADAPTER_DISPLAY::SetPairedRenderAdapter(a1[337], v16, v8);
    }
    return 0LL;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v17 + 24) = a1;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
}
