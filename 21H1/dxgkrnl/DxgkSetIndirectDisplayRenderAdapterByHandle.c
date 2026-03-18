/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C0222868
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025AFC4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C02D1140 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02075F8 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02223D8 (DxgkSetIndirectDisplayRenderAdapter.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapterByHandle(unsigned int a1, struct _LUID *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int v7; // ebx
  struct DXGADAPTER *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = 0LL;
  v3 = a1;
  DXGADAPTER_REFERENCE::AssignByHandle(v9, a1);
  if ( v9[0] )
  {
    v7 = DxgkSetIndirectDisplayRenderAdapter(v9[0], a2, 0LL);
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(0LL, v4, v5);
    *(_QWORD *)(v6 + 24) = v3;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v6);
    v7 = -1073741585;
  }
  DXGADAPTER_REFERENCE::Assign(v9, 0LL);
  return v7;
}
