/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U4@U?$_tlgWrapperByVal@$00@@U5@U5@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$03@@6AEBU?$_tlgWrapperByVal@$00@@776@Z @ 0x1C00010AC
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004B560 (imp_WdfDriverCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0041AFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

int __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        const _tlgProvider_t *pEventMetadata,
        const void *<wrappedArgs_0>,
        const _GUID *<wrappedArgs_1>,
        const _GUID *<wrappedArgs_2>,
        const _tlgWrapperByRef<16> *<wrappedArgs_3>,
        const _tlgWrapSz<char> *<wrappedArgs_4>,
        const _tlgWrapSz<unsigned short> *<wrappedArgs_5>,
        const _tlgWrapSz<unsigned short> *<wrappedArgs_6>,
        const _tlgWrapperByVal<4> *<wrappedArgs_7>,
        const _tlgWrapperByVal<4> *<wrappedArgs_8>,
        const _tlgWrapperByVal<1> *<wrappedArgs_9>,
        const _tlgWrapperByVal<1> *hProvider,
        const _tlgWrapperByVal<1> *pEventMetadata_0,
        const _tlgWrapperByVal<4> *<writerArgs_0>)
{
  __int64 v15; // rcx
  unsigned int v16; // r9d
  const wchar_t *Psz; // rdx
  __int64 v18; // rax
  unsigned int v19; // r8d
  const wchar_t *v20; // rdx
  __int64 v21; // rax
  const char *v22; // rdx
  unsigned int v23; // ecx
  _EVENT_DATA_DESCRIPTOR data[12]; // [rsp+30h] [rbp-C9h] BYREF

  data[11].Ptr = (unsigned __int64)<writerArgs_0>;
  v15 = -1LL;
  data[10].Ptr = (unsigned __int64)pEventMetadata_0;
  v16 = 2;
  data[9].Ptr = (unsigned __int64)hProvider;
  data[8].Ptr = (unsigned __int64)<wrappedArgs_9>;
  data[7].Ptr = (unsigned __int64)<wrappedArgs_8>;
  data[6].Ptr = (unsigned __int64)<wrappedArgs_7>;
  *(_QWORD *)&data[11].Size = 4LL;
  *(_QWORD *)&data[10].Size = 1LL;
  *(_QWORD *)&data[9].Size = 1LL;
  Psz = <wrappedArgs_6>->Psz;
  *(_QWORD *)&data[8].Size = 1LL;
  *(_QWORD *)&data[7].Size = 4LL;
  *(_QWORD *)&data[6].Size = 4LL;
  if ( Psz )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( Psz[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    Psz = (const wchar_t *)&unk_1C00998D0;
    v19 = 2;
  }
  data[5].Ptr = (unsigned __int64)Psz;
  data[5].Size = v19;
  data[5].Reserved = 0;
  v20 = <wrappedArgs_5>->Psz;
  if ( <wrappedArgs_5>->Psz )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v16 = 2 * v21 + 2;
  }
  else
  {
    v20 = (const wchar_t *)&unk_1C00998D0;
  }
  data[4].Ptr = (unsigned __int64)v20;
  data[4].Size = v16;
  data[4].Reserved = 0;
  v22 = <wrappedArgs_4>->Psz;
  if ( <wrappedArgs_4>->Psz )
  {
    do
      ++v15;
    while ( v22[v15] );
    v23 = v15 + 1;
  }
  else
  {
    v22 = a5;
    v23 = 1;
  }
  data[3].Size = v23;
  data[3].Ptr = (unsigned __int64)v22;
  data[3].Reserved = 0;
  data[2].Ptr = (unsigned __int64)<wrappedArgs_3>->Ptr;
  *(_QWORD *)&data[2].Size = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer(&Tlgg_TelemetryProviderProv, <wrappedArgs_0>, 0LL, 0LL, 0xCu, data);
}
