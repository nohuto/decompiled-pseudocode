/*
 * XREFs of ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x18000B1C0
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18000B040 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x18000B274 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18000B47C (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x180243D2C (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 */

__int64 __fastcall HolographicPositioner::_OnUnmanagedWin32ViewAdded(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IWin32ApplicationView *a3)
{
  __int64 v3; // rax
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v12 = 6;
  if ( (*(int (__fastcall **)(struct IApplicationView *, unsigned int *))(v3 + 400))(a2, &v12) < 0 )
    return 0LL;
  if ( v12 != 1 )
  {
    if ( HolographicPositioner::_IsDisplayContextHolographic(this) )
    {
      if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, v12) )
      {
        v8 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate(this, a2, a3, 1);
        if ( v8 < 0 )
        {
          v9 = 2313LL;
          goto LABEL_7;
        }
      }
    }
    return 0LL;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 33) + 24LL))(
         *((_QWORD *)this + 33),
         a2,
         5LL);
  if ( v8 >= 0 )
    return 0LL;
  v9 = 2305LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v8,
    v10);
  return (unsigned int)v8;
}
