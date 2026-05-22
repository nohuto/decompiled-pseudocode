/*
 * XREFs of ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1801231A0
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180123C00 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800C2794 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x1800C3CA0 (-SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z.c)
 *     ?SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z @ 0x1800C3D18 (-SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x18011FEF8 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x180120460 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1801239F0 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z @ 0x180124068 (-ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::TransitionToEnabled(
        ControllerProcessor *this,
        struct tagRECT *a2,
        struct tagPOINT *a3)
{
  const RECT *v5; // rcx
  POINT *v6; // r8
  __int64 v7; // rdx
  POINT v8; // rdx
  HMONITOR v9; // rdx
  int v10; // edx
  int v11; // r8d
  float v12; // xmm1_4
  int v13; // eax
  struct tagRECT v15; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    v7 = 1000LL;
    goto LABEL_13;
  }
  if ( !ControllerProcessor::ValidateBounds(a2) )
  {
    v7 = 965LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( v6 )
  {
    v8 = *v6;
    *(POINT *)((char *)this + 332) = *v6;
    if ( !PtInRect(v5, v8) )
      *(struct tagPOINT *)((char *)this + 332) = ControllerProcessor::AdjustPointToBounds(
                                                   *(struct tagPOINT *)((char *)this + 332),
                                                   a2);
  }
  if ( !*((_BYTE *)this + 1232) )
  {
    GetPointerDeviceRects(-1LL, v16, &v15);
    ManipulationInjector::SetInjectionMechanism((ControllerProcessor *)((char *)this + 424));
    ManipulationInjector::SetPanOverlapType((__int64)this + 424, 2u);
    ManipulationInjector::Initialize((ControllerProcessor *)((char *)this + 424), v9, &v15);
    *((_QWORD *)this + 152) = ((unsigned __int64)this + 80) & -(__int64)(this != 0LL);
    *((_BYTE *)this + 1232) = 1;
  }
  *(struct tagRECT *)((char *)this + 312) = *a2;
  v10 = (int)(float)((float)*((int *)this + 80) - 8.0);
  v11 = (int)(float)((float)*((int *)this + 79) + 8.0);
  v12 = (float)*((int *)this + 81) - 8.0;
  *((_DWORD *)this + 95) = (int)(float)((float)*((int *)this + 78) + 8.0);
  *((_DWORD *)this + 96) = v11;
  *((_DWORD *)this + 97) = v10;
  *((_DWORD *)this + 98) = (int)v12;
  v13 = InjectionDevice::Attach((ControllerProcessor *)((char *)this + 4368));
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      994LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  ControllerProcessor::UpdateManipulationInjectionRect(this);
  return 0LL;
}
