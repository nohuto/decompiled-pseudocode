/*
 * XREFs of ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1C021615C
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0126EB0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetDisplayUMDFileName(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax

  v2 = (unsigned int)a2;
  if ( (_DWORD)a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 3211LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGPROCESS::GetCurrent(a1, a2) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 3212LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (*((_BYTE *)DXGPROCESS::GetCurrent(v6, v5) + 347) & 1) == 0;
  v9 = a1 + 456;
  if ( v8 )
    v9 = a1 + 440;
  return 16 * v2 + v9;
}
