/*
 * XREFs of ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000B910
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C0110140 (DxgkGetAdapterDeviceDesc.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013E42C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayId(ADAPTER_DISPLAY *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 5835LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(unsigned int *)(3968 * v3 + *((_QWORD *)this + 14) + 624);
}
