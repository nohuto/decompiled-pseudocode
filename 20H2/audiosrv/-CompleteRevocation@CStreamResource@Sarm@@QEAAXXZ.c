/*
 * XREFs of ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x18010AE9C
 * Callers:
 *     ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x180106F74 (-HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z.c)
 *     std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call @ 0x180109170 (std--_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_--_Do_call.c)
 * Callees:
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18010A020 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x18010A2F8 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@445@Z @ 0x18010A91C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlg_ea_18010A91C.c)
 */

void __fastcall Sarm::CStreamResource::CompleteRevocation(
        Sarm::CStreamResource *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 v9; // [rsp+60h] [rbp-20h] BYREF
  __int64 v10; // [rsp+68h] [rbp-18h] BYREF
  const CHAR *v11; // [rsp+70h] [rbp-10h] BYREF
  int v12; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+A8h] [rbp+28h] BYREF
  int v14; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+38h] BYREF

  SarmTraceLoggingTracer("Sarm::CStreamResource::CompleteRevocation", 129, a3, a4);
  v8 = *((_DWORD *)this + 21);
  if ( v8 )
  {
    if ( (unsigned int)dword_18019C350 > 4 )
    {
      v15 = *((_QWORD *)this + 1);
      v12 = *((_DWORD *)this + 13);
      v9 = (__int64)this + 16;
      v10 = *((_QWORD *)this + 5);
      v13 = v8;
      v14 = 141;
      v11 = "Sarm::CStreamResource::CompleteRevocation";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v5,
        byte_180169507,
        v6,
        v7,
        &v11,
        (__int64)&v14,
        (__int64)&v10,
        &v9,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v15);
      v8 = *((_DWORD *)this + 21);
    }
    Sarm::CEndpointResourcePool::AddToDynamicPool(*((Sarm::CEndpointResourcePool **)this + 1), v8, v6, v7);
    *((_DWORD *)this + 21) = 0;
  }
}
