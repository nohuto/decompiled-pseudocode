/*
 * XREFs of ?DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@1_N@Z @ 0x18015BE2C
 * Callers:
 *     ??$DriverCompatibilityDetermined@W4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@AEAU2@_N@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@AEAU2@$$QEA_N@Z @ 0x18014E764 (--$DriverCompatibilityDetermined@W4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180150494 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWrit.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x180166648 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F94 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::DriverCompatibilityDetermined_(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+54h] [rbp-1Ch] BYREF
  int v14; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+5Ch] [rbp-14h] BYREF
  const unsigned __int16 *v16; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+20h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+30h]
  __int64 v19; // [rsp+A8h] [rbp+38h]

  v19 = a4;
  v18 = a3;
  v17 = a1;
  v6 = a4;
  v7 = a3;
  v8 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 4u )
  {
    LOBYTE(v8) = tlgKeywordOn(*(_QWORD *)(v8 + 8), 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      LOBYTE(v17) = a5;
      v12 = HIDWORD(v19);
      v14 = HIDWORD(v18);
      v13 = v6;
      v15 = v7;
      v16 = (const unsigned __int16 *)TraceDriverTypeToString(a2);
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                     v9,
                     byte_1801D0C50,
                     v9,
                     v10,
                     &v16,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)&v12,
                     (__int64)&v17);
    }
  }
  return v8;
}
