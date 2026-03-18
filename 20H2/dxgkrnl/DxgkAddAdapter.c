/*
 * XREFs of DxgkAddAdapter @ 0x1C01763E0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017775C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 */

__int64 __fastcall DxgkAddAdapter(
        struct _DEVICE_OBJECT *a1,
        void *a2,
        struct _DXGK_ADAPTER_CAPS *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v10; // rax
  struct DXGADAPTER *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v10 + 24) = 137LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2);
  return DXGGLOBAL::CreateAdapter(Global, a1, &v11, a2, a3, a4);
}
