/*
 * XREFs of ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004B728
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x18004B364 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIDCompositionDevice@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@@Details@12@@Z @ 0x180011A5C (--$As@UIDCompositionDevice@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x180011FCC (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800451BC (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x180045634 (-ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x1800863E0 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::ValidateDevice(CAccentAcrylicBlurBehind *this)
{
  _QWORD *v1; // rsi
  struct IDCompositionDesktopDevicePartner *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_QWORD *)((char *)this + 288);
  v3 = (struct IDCompositionDesktopDevicePartner *)*((_QWORD *)this + 36);
  if ( !v3 || v3 != CDesktopManager::GetDCompositionInteropDevice(this) )
  {
    v9 = 0;
    goto LABEL_14;
  }
  v10 = 0LL;
  v9 = 1;
  v4 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<IDCompositionDevice>(v1, (__int64)&v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 2042LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 208LL))(v10, &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 2044LL;
    goto LABEL_13;
  }
  if ( !v9 )
    CDesktopManager::HandleInteropDeviceLost();
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
  if ( v9 )
    return 0LL;
LABEL_14:
  CAccentAcrylicBlurBehind::ReleaseResources(this);
  result = CAccentAcrylicBlurBehind::InitializeDComp(this);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
