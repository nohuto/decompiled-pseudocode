/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@G@@5@Z @ 0x1C0001234
 * Callers:
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C004C290 (imp_WdfDriverErrorReportApiMissing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00423CC (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

int __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        const _tlgProvider_t *pEventMetadata,
        const void *<wrappedArgs_0>,
        const _GUID *<wrappedArgs_1>,
        const _GUID *<wrappedArgs_2>,
        const _tlgWrapperByRef<16> *<wrappedArgs_3>,
        const _tlgWrapSz<char> *<wrappedArgs_4>,
        const _tlgWrapperByVal<4> *<wrappedArgs_5>,
        const _tlgWrapperByVal<4> *hProvider,
        const _tlgWrapSz<unsigned short> *pEventMetadata_0,
        const _tlgWrapperByVal<4> *<writerArgs_0>)
{
  __int64 v11; // rcx
  const wchar_t *Psz; // rdx
  __int64 v13; // rax
  unsigned int v14; // r8d
  const char *v15; // rdx
  unsigned int v16; // ecx
  _EVENT_DATA_DESCRIPTOR data[8]; // [rsp+30h] [rbp-69h] BYREF

  data[7].Ptr = (unsigned __int64)<writerArgs_0>;
  v11 = -1LL;
  *(_QWORD *)&data[7].Size = 4LL;
  Psz = pEventMetadata_0->Psz;
  if ( pEventMetadata_0->Psz )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( Psz[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    Psz = (const wchar_t *)&unk_1C009A8F0;
    v14 = 2;
  }
  data[5].Ptr = (unsigned __int64)hProvider;
  data[4].Ptr = (unsigned __int64)<wrappedArgs_5>;
  data[6].Ptr = (unsigned __int64)Psz;
  data[6].Size = v14;
  data[6].Reserved = 0;
  v15 = <wrappedArgs_4>->Psz;
  *(_QWORD *)&data[5].Size = 4LL;
  *(_QWORD *)&data[4].Size = 4LL;
  if ( v15 )
  {
    do
      ++v11;
    while ( v15[v11] );
    v16 = v11 + 1;
  }
  else
  {
    v15 = a5;
    v16 = 1;
  }
  data[3].Size = v16;
  data[3].Ptr = (unsigned __int64)v15;
  data[3].Reserved = 0;
  data[2].Ptr = (unsigned __int64)<wrappedArgs_3>->Ptr;
  *(_QWORD *)&data[2].Size = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer(&Tlgg_TelemetryProviderProv, <wrappedArgs_0>, 0LL, 0LL, 8u, data);
}
