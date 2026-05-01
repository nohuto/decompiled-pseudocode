/*
 * XREFs of ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x1802450AC
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18000B040 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x18000B274 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18000B390 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802440A0 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802445A0 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180245470 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::_OnManagedWin32AppFocusGained(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IWin32ApplicationView *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IWin32ApplicationView *v13; // [rsp+50h] [rbp+18h] BYREF
  int v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = a3;
  HolographicPositioner::_FindViewHostItem((__int64)this, v11);
  if ( v11[0] )
  {
    v14 = 6;
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 400LL))(a2, &v14);
    v7 = v5;
    if ( v5 < 0 )
    {
      v8 = 2237LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_16;
    }
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        LOBYTE(v13) = 0;
        if ( (*(int (__fastcall **)(_QWORD, struct IWin32ApplicationView **))(*(_QWORD *)v11[0] + 80LL))(v11[0], &v13) >= 0
          && !(_BYTE)v13 )
        {
          v5 = HolographicPositioner::_RaiseRequestNavigateToView(this, a2);
          v7 = v5;
          if ( v5 < 0 )
          {
            v8 = 2253LL;
            goto LABEL_14;
          }
        }
      }
    }
    else if ( IsHolographicWin32SlatesFeatureEnabled(0LL, v6) )
    {
      if ( !HolographicPositioner::_IsDisplayContextHolographic(this) )
      {
        v5 = HolographicPositioner::_HandleControlLostForView(this, a2);
        v7 = v5;
        if ( v5 < 0 )
        {
          v8 = 2268LL;
          goto LABEL_14;
        }
      }
    }
  }
  v7 = 0;
LABEL_16:
  v9 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
