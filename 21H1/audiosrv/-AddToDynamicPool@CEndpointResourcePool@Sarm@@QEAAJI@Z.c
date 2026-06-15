/*
 * XREFs of ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x18010AEC8
 * Callers:
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x18010BA6C (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18010C460 (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BBCD0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18010ACC0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::AddToDynamicPool(
        Sarm::CEndpointResourcePool *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // ecx
  int v11; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+54h] [rbp-Ch] BYREF
  Sarm::CEndpointResourcePool *v13; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v15; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+90h] [rbp+30h] BYREF
  int v17; // [rsp+98h] [rbp+38h] BYREF

  v6 = *((_QWORD *)this + 2);
  if ( !v6 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      95LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0100LL);
    __debugbreak();
  }
  v7 = *(unsigned int *)(v6 + 24);
  v8 = (unsigned int)(*(_DWORD *)(v6 + 20) - v7);
  if ( (unsigned int)dword_18019D350 > 4 )
  {
    v17 = *(_DWORD *)(v6 + 20);
    v15 = v8 + a2;
    v13 = this;
    v16 = v8;
    v11 = v7;
    v12 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v8,
      byte_18016A414,
      v7,
      a4,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v13);
    v6 = *((_QWORD *)this + 2);
  }
  v9 = *(_DWORD *)(v6 + 24);
  if ( a2 <= v9 )
  {
    *(_DWORD *)(v6 + 24) = v9 - a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0101LL);
    return 2289828097LL;
  }
}
