/*
 * XREFs of ?MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_@ISMTracing@@QEAAXKK@Z @ 0x1801978A4
 * Callers:
 *     ?ShouldAttachDevice@MPCEyeGazeProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180197B70 (-ShouldAttachDevice@MPCEyeGazeProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18007D01C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall ISMTracing::MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_(ISMTracing *this, int a2, int a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  ISMTracing *v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = this;
  v5 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<ISMTracing>::get(
                               (__int64)this,
                               _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v5 > 4u )
  {
    LODWORD(v8) = a3;
    v9 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v5,
      byte_1801D2F68,
      v6,
      v7,
      (__int64)&v9,
      (__int64)&v8);
  }
}
