/*
 * XREFs of ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801888E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAXXZ @ 0x180035F00 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z @ 0x180188F60 (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeProcessor::OnDeviceUpdate(GazeProcessor *this, struct DeviceInfo *a2)
{
  __int64 v3; // rcx
  const char *v4; // r9
  struct InputConfigContextMessage *v5; // rdx
  int updated; // eax
  unsigned int v7; // ebx
  _BYTE v9[64]; // [rsp+20h] [rbp-58h] BYREF
  char v10; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *((_QWORD *)this + 8) = a2;
  v10 = 0;
  v3 = *((_QWORD *)this + 43);
  if ( !v3 || (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 40LL))(v3, v9) < 0 )
    goto LABEL_9;
  v5 = (struct InputConfigContextMessage *)v9;
  if ( v10 != 1 )
    v5 = 0LL;
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      323LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      v4);
    __debugbreak();
  }
  updated = GazeProcessor::UpdateDeviceTransformsFromInputConfig(this, v5);
  v7 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)updated);
  else
LABEL_9:
    v7 = 0;
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy((__int64)v9);
  return v7;
}
