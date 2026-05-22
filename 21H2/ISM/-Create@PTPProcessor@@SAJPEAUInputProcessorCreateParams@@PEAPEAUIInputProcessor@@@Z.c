/*
 * XREFs of ?Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180199B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YAJPEAPEAVPTPProcessor@@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Z @ 0x18019997C (--$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@W.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PTPProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct IInputProcessor *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PTPProcessor *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v9);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<PTPProcessor,PTPProcessor,DeviceInfo * &,IInputProcessorHost * &>(
         &v9,
         a1,
         a1 + 1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v9;
    v9 = 0LL;
    *a2 = v6;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\ptp\\lib\\ptpprocessor.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v9);
  return v5;
}
