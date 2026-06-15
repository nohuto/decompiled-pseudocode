/*
 * XREFs of ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x1400604C4
 * Callers:
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140064E40 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14005E370 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::CheckGlitches(
        CSpatialCrossProcessBaseEndpoint *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int32 v5; // eax
  BOOL v6; // esi
  BOOL v7; // ebx
  BOOL v8; // [rsp+60h] [rbp+8h] BYREF
  BOOL v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v5 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 161) + 68LL), 0);
  v6 = v5 != 0;
  v7 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 161) + 72LL), 0) != 0;
  if ( (v5 || v7)
    && (unsigned int)dword_140084108 > 5
    && (byte_140084118 & 1) != 0
    && (qword_140084120 & 1) == qword_140084120 )
  {
    v8 = v7;
    v9 = v5 != 0;
    v10 = (__int64)this + 792;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)this,
      byte_1400729B4,
      (const GUID *)((char *)this + 792),
      a4,
      &v10,
      (__int64)&v9,
      (__int64)&v8);
  }
  CSpatialCrossProcessEndpointTraceLogger::RegisterGlitches(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 784),
    v6,
    v7);
}
