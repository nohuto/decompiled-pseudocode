/*
 * XREFs of ?SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@Z @ 0x1800D2248
 * Callers:
 *     _lambda_0462a2c62e1b4bc053620d4745a50596_::operator() @ 0x1800CE510 (_lambda_0462a2c62e1b4bc053620d4745a50596_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180090E78 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6DF4 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Removed_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        const wchar_t *const a3)
{
  LPVOID v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = (__int64)this;
  v5 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v5 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v5 + 1), 0x400000000000LL) )
  {
    v9 = (__int64)a3;
    LODWORD(v8) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v7,
      (unsigned __int8 *)dword_1801CADEE,
      v6,
      v7,
      (__int64)&v8,
      (const wchar_t **)&v9);
  }
}
