/*
 * XREFs of ?s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA?AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewStateOverrides@@@Z @ 0x1802B2E84
 * Callers:
 *     ?GetHostViewStateOverrides@ViewWrapperBase@@UEAA?AUHostViewStateOverrides@@XZ @ 0x1802AD6A0 (-GetHostViewStateOverrides@ViewWrapperBase@@UEAA-AUHostViewStateOverrides@@XZ.c)
 *     ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x1802ADE30 (-HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802AF4B8 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1802B0F10 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::s_ComputeAggregatedViewData(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // zf
  int v5; // eax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8

  v4 = *a4 == 1;
  v5 = *(_DWORD *)(a3 + 40);
  v6 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)a2 = *(_OWORD *)a3;
  v7 = *(_QWORD *)(a3 + 32);
  *(_OWORD *)(a2 + 16) = v6;
  *(_QWORD *)(a2 + 32) = v7;
  *(_DWORD *)(a2 + 40) = v5;
  if ( v4 )
    *(_DWORD *)(a2 + 24) = a4[1];
  return a2;
}
