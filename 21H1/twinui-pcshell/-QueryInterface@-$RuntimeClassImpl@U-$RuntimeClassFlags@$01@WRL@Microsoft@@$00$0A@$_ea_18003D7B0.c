/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003D7B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8C10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800D8C10.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8C20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800D8C20.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8C30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800D8C30.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8C40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800D8C40.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802DE1FC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiv_ea_1802DE1FC.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IWindowSizeConversionLogicalClientToWindow,IImmersiveMonitorNotification>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r10
  _DWORD *v10; // rcx
  __int64 v11; // r11
  __int64 v12; // r11
  int CanCastTo; // ebx
  __int64 v14; // r9
  __int64 v15; // r10

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v3, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
  {
    *v7 = v8;
LABEL_18:
    CanCastTo = 0;
    goto LABEL_8;
  }
  if ( InlineIsEqualGUID(v6, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4) )
  {
    *v7 = v11;
    goto LABEL_18;
  }
  if ( InlineIsEqualGUID(v10, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
  {
    CanCastTo = 0;
    *v7 = v12 + 8;
  }
  else
  {
    CanCastTo = -2147467262;
  }
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
LABEL_8:
  if ( CanCastTo != -2147467262 )
    goto LABEL_14;
  if ( !InlineIsEqualGUID(v9, &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a) )
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>::CanCastTo(
                  v14 + 8,
                  v15);
LABEL_14:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_11;
  }
  *v7 = v14;
  CanCastTo = 0;
LABEL_11:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  return (unsigned int)CanCastTo;
}
