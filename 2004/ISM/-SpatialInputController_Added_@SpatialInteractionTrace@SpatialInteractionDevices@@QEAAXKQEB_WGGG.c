/*
 * XREFs of ?SpatialInputController_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_WGGG@Z @ 0x1800D220C
 * Callers:
 *     ??$SpatialInputController_Added@KPEB_WGGG@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAK$$QEAPEB_W$$QEAG22@Z @ 0x1800CC8E4 (--$SpatialInputController_Added@KPEB_WGGG@SpatialInteractionTrace@SpatialInteractionDevices@@SAX.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$01@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$01@@55@Z @ 0x1800CCC1C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@_W@@U-$_tlgWrapperByVal@$01@@U3@U3@@-$_tlgWriteT.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Added_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        const wchar_t *const a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  LPVOID v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int16 v13; // [rsp+50h] [rbp-18h] BYREF
  __int16 v14; // [rsp+52h] [rbp-16h] BYREF
  int v15; // [rsp+54h] [rbp-14h] BYREF
  __int64 v16; // [rsp+58h] [rbp-10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = (__int64)this;
  v9 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v9 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v9 + 1), 0x400000000000LL) )
  {
    LOWORD(v17) = a6;
    v13 = a5;
    v14 = a4;
    v16 = (__int64)a3;
    v15 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      v12,
      (unsigned __int8 *)dword_1801CB6FA,
      v10,
      v11,
      (__int64)&v15,
      (const wchar_t **)&v16,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v17);
  }
}
