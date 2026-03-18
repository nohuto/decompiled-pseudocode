/*
 * XREFs of ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x180196E84
 * Callers:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800F0114 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z @ 0x180196178 (--0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z.c)
 */

struct Microsoft::BamoImpl::BufferingMessageCallHost *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  struct Microsoft::BamoImpl::BufferingMessageCallHost *result; // rax
  const char *v3; // r9
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)*((_QWORD *)this + 11);
  if ( !result )
  {
    result = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)operator new(0x68uLL);
    if ( result )
      result = Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost(
                 result,
                 *((struct IMessageCallSendHost **)this + 9));
    v4 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = result;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      result = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)*((_QWORD *)this + 11);
    }
    if ( !result )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        637LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v3);
  }
  return result;
}
