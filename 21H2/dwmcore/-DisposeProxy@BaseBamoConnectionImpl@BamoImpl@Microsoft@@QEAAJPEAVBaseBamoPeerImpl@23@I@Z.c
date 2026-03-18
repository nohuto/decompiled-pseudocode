/*
 * XREFs of ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180196D70
 * Callers:
 *     ?Thunk_DisposeProxy_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801986B0 (-Thunk_DisposeProxy_34@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@Diagnosti.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180196B68 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisposeProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  const char *v8; // r9
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 9);
  v5 = a3;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, Microsoft::BamoImpl::BamoProxyImpl **))(**((_QWORD **)this + 8)
                                                                                                 + 56LL))(
         *((_QWORD *)this + 8),
         v3,
         a3,
         &v12);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1637LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v6,
      v10);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 8) + 40LL))(
         *((_QWORD *)this + 8),
         v3,
         v5,
         0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1639LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v7,
      v10);
  if ( *((int *)v12 + 2) > 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1648LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      v8);
  Microsoft::BamoImpl::BamoProxyImpl::Disconnect(v12, 0);
  return 0LL;
}
