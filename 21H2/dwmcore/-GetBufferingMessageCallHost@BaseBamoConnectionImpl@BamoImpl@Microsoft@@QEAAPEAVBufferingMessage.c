/*
 * XREFs of ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1801662E4
 * Callers:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800D6E30 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E9464 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z @ 0x1801659E8 (--0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z.c)
 */

struct Microsoft::BamoImpl::BufferingMessageCallHost *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  struct Microsoft::BamoImpl::BufferingMessageCallHost *result; // rax
  Microsoft::BamoImpl::BufferingMessageCallHost *v3; // rax
  const char *v4; // r9
  void (__fastcall ***v5)(_QWORD); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)*((_QWORD *)this + 10);
  if ( !result )
  {
    v3 = (Microsoft::BamoImpl::BufferingMessageCallHost *)operator new(0x50uLL);
    if ( v3 )
      v3 = Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost(
             v3,
             *((struct IMessageCallSendHost **)this + 8));
    v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v3;
    if ( v3 )
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v3 + 2) + 8LL))((_QWORD *)v3 + 2);
    if ( v5 )
      (**v5)(v5);
    result = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)*((_QWORD *)this + 10);
    if ( !result )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1CF,
        (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v4);
      __debugbreak();
    }
  }
  return result;
}
