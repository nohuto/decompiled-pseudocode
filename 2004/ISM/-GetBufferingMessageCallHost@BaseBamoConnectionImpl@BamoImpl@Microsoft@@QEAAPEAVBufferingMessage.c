/*
 * XREFs of ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x18003F3A4
 * Callers:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F458 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z @ 0x18003F120 (--0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct Microsoft::BamoImpl::BufferingMessageCallHost *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  struct Microsoft::BamoImpl::BufferingMessageCallHost *result; // rax
  Microsoft::BamoImpl::BufferingMessageCallHost *v3; // rax
  const char *v4; // r9
  void (__fastcall ***v5)(_QWORD); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BufferingMessageCallHost *v7; // [rsp+30h] [rbp+8h]

  result = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)*((_QWORD *)this + 10);
  if ( !result )
  {
    v7 = (Microsoft::BamoImpl::BufferingMessageCallHost *)operator new(0x50uLL);
    v3 = Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost(
           v7,
           *((struct IMessageCallSendHost **)this + 8));
    v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v3 + 2) + 8LL))((__int64)v3 + 16);
    if ( v5 )
      (**v5)(v5);
    result = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)*((_QWORD *)this + 10);
    if ( !result )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        463LL,
        (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v4);
      __debugbreak();
    }
  }
  return result;
}
