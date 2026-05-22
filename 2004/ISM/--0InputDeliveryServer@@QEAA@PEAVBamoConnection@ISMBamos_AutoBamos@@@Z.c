/*
 * XREFs of ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18002F92C
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800305CC (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B624 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@Z@std@@@Z @ 0x18002E790 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003021C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
InputDeliveryServer *__fastcall InputDeliveryServer::InputDeliveryServer(
        InputDeliveryServer *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  int v3; // eax
  __int64 v4; // r8
  _QWORD v6[8]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)this = &BamoInputDeliveryServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &InputDeliveryServer::`vftable'{for `IInputDeliveryServerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((InputDeliveryServer *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoInputDeliveryServerPrincipalImpl::`vftable';
  *(_QWORD *)this = &InputDeliveryServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &InputDeliveryServer::`vftable'{for `IInputDeliveryServerPrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  *((_OWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 8) = ISMStatics::GetViewHierarchy();
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = "CMK:KbdInputAttempted";
  *((_QWORD *)this + 30) = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 56);
  v3 = CoreUICreate((char *)this + 56);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v3,
      v6[0]);
    JUMPOUT(0x18002FA64LL);
  }
  v6[0] = off_1801B2BE0;
  v6[1] = this;
  v6[7] = v6;
  KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::Initialize(
    (_QWORD *)this + 13,
    (_QWORD *)this + 7,
    v4,
    (__int64)v6);
  return this;
}
