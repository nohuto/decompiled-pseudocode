/*
 * XREFs of ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C017DEA8
 * Callers:
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C016A4D0 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C017DE0C (--0EDIDCACHE@@QEAA@XZ.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F652C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EDIDCACHE::SetPhysicalDimensionOfInternalPanel(EDIDCACHE *this, int a2, int a3, char a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  _DWORD *v6; // rdx
  int updated; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // rax

  v4 = a3;
  v5 = a2;
  if ( !*((_BYTE *)this + 624) )
  {
    v6 = (_DWORD *)((char *)this + 616);
    if ( a3 * (int)v5 > *((_DWORD *)this + 155) * *((_DWORD *)this + 154) )
    {
      *((_BYTE *)this + 624) = a4;
      *((_DWORD *)this + 155) = a3;
      *v6 = v5;
      updated = ZwUpdateWnfStateData(&WNF_DX_INTERNAL_PANEL_DIMENSIONS, v6, 8LL, 0LL, 0LL, 0, 0);
      v12 = updated;
      if ( updated < 0 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
        v14[3] = v12;
        v14[4] = v5;
        v14[5] = v4;
        WdLogEvent5_WdError(v14);
      }
      else
      {
        v13 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
        *(_QWORD *)(v13 + 24) = v5;
        *(_QWORD *)(v13 + 32) = v4;
      }
    }
  }
}
