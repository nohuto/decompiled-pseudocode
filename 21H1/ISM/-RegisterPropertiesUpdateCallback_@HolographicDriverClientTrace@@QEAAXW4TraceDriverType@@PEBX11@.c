/*
 * XREFs of ?RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@Z @ 0x18016335C
 * Callers:
 *     ??$RegisterPropertiesUpdateCallback@W4TraceDriverType@@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUISpatialGraphPropertiesUpdatedCallback@345@PEAUIWeakReference@@@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUISpatialGraphPropertiesUpdatedCallback@345@$$QEAPEAUIWeakReference@@@Z @ 0x18014FAF0 (--$RegisterPropertiesUpdateCallback@W4TraceDriverType@@PEAVSpatialGraphDriverClient@Holographic@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1801505D4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x1801666E8 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180168034 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::RegisterPropertiesUpdateCallback_(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = a1;
  v8 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 4u )
  {
    LOBYTE(v8) = tlgKeywordOn(*(_QWORD *)(v8 + 8), 2LL);
    if ( (_BYTE)v8 )
    {
      v16 = a5;
      v13 = a4;
      v14 = a3;
      v15 = TraceDriverTypeToString(a2);
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                     v11,
                     byte_1801D0867,
                     v9,
                     v10,
                     (const unsigned __int16 **)&v15,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)&v16);
    }
  }
  return v8;
}
