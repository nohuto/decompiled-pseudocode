/*
 * XREFs of ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C015BB68
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C015B6D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedStereoStates(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    WdLogSingleEntry1(1LL, 6420LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 6420LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 96) )
  {
    WdLogSingleEntry2(2LL, v5, *(unsigned int *)(a1 + 96));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified invalid VidPN source ID 0x%I64x (only %I64d are supported)",
      v5,
      *(unsigned int *)(a1 + 96),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v8 = 4000 * v5;
    *(_DWORD *)(v8 + *(_QWORD *)(a1 + 128) + 1132) = a3;
    *(_DWORD *)(v8 + *(_QWORD *)(a1 + 128) + 1136) = a4;
    return 0LL;
  }
}
