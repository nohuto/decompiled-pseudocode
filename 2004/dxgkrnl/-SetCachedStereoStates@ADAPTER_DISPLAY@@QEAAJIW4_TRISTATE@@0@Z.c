/*
 * XREFs of ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C00DD874
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00DD284 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedStereoStates(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v12 + 24) = 6174LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 80) )
  {
    v13 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v13 + 24) = v5;
    *(_QWORD *)(v13 + 32) = *(unsigned int *)(a1 + 80);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  else
  {
    v10 = 3968 * v5;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + v10 + 1104) = a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + v10 + 1108) = a4;
    return 0LL;
  }
}
