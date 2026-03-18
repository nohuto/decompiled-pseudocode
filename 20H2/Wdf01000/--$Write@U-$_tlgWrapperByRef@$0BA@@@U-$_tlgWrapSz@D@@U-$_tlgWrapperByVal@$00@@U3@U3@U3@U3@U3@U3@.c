/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@55555555555555555555555AEBU?$_tlgWrapSz@G@@666@Z @ 0x1C0001348
 * Callers:
 *     LogDriverInfoStream @ 0x1C005F750 (LogDriverInfoStream.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0041AFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

int __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        const _tlgProvider_t *pEventMetadata,
        const void *<wrappedArgs_0>,
        const _GUID *<wrappedArgs_1>,
        const _GUID *<wrappedArgs_2>,
        const _tlgWrapperByRef<16> *<wrappedArgs_3>,
        const _tlgWrapSz<char> *<wrappedArgs_4>,
        const _tlgWrapperByVal<1> *<wrappedArgs_5>,
        const _tlgWrapperByVal<1> *<wrappedArgs_6>,
        const _tlgWrapperByVal<1> *<wrappedArgs_7>,
        const _tlgWrapperByVal<1> *<wrappedArgs_8>,
        const _tlgWrapperByVal<1> *<wrappedArgs_9>,
        const _tlgWrapperByVal<1> *<wrappedArgs_10>,
        const _tlgWrapperByVal<1> *<wrappedArgs_11>,
        const _tlgWrapperByVal<1> *<wrappedArgs_12>,
        const _tlgWrapperByVal<1> *<wrappedArgs_13>,
        const _tlgWrapperByVal<1> *<wrappedArgs_14>,
        const _tlgWrapperByVal<1> *<wrappedArgs_15>,
        const _tlgWrapperByVal<1> *<wrappedArgs_16>,
        const _tlgWrapperByVal<1> *<wrappedArgs_17>,
        const _tlgWrapperByVal<1> *<wrappedArgs_18>,
        const _tlgWrapperByVal<1> *<wrappedArgs_19>,
        const _tlgWrapperByVal<1> *<wrappedArgs_20>,
        const _tlgWrapperByVal<1> *<wrappedArgs_21>,
        const _tlgWrapperByVal<1> *<wrappedArgs_22>,
        const _tlgWrapperByVal<1> *<wrappedArgs_23>,
        const _tlgWrapperByVal<1> *<wrappedArgs_24>,
        const _tlgWrapperByVal<1> *<wrappedArgs_25>,
        const _tlgWrapperByVal<1> *<wrappedArgs_26>,
        const _tlgWrapperByVal<1> *<wrappedArgs_27>,
        const _tlgWrapperByVal<1> *<wrappedArgs_28>,
        const _tlgWrapSz<unsigned short> *<wrappedArgs_29>,
        const _tlgWrapSz<unsigned short> *hProvider,
        const _tlgWrapSz<unsigned short> *pEventMetadata_0,
        const _tlgWrapSz<unsigned short> *<writerArgs_0>)
{
  __int64 v35; // rcx
  unsigned int v36; // r8d
  const wchar_t *Psz; // rdx
  __int64 v38; // rax
  unsigned int v39; // r9d
  const wchar_t *v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // r9d
  const wchar_t *v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // r9d
  const wchar_t *v46; // rdx
  __int64 v47; // rax
  const char *v48; // rdx
  unsigned int v49; // ecx
  _EVENT_DATA_DESCRIPTOR data[32]; // [rsp+30h] [rbp-D0h] BYREF

  v35 = -1LL;
  v36 = 2;
  Psz = <writerArgs_0>->Psz;
  if ( <writerArgs_0>->Psz )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( Psz[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    Psz = (const wchar_t *)&unk_1C00998D0;
    v39 = 2;
  }
  data[31].Ptr = (unsigned __int64)Psz;
  data[31].Size = v39;
  data[31].Reserved = 0;
  v40 = pEventMetadata_0->Psz;
  if ( pEventMetadata_0->Psz )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v40 = (const wchar_t *)&unk_1C00998D0;
    v42 = 2;
  }
  data[30].Ptr = (unsigned __int64)v40;
  data[30].Size = v42;
  data[30].Reserved = 0;
  v43 = hProvider->Psz;
  if ( hProvider->Psz )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v45 = 2 * v44 + 2;
  }
  else
  {
    v43 = (const wchar_t *)&unk_1C00998D0;
    v45 = 2;
  }
  data[29].Ptr = (unsigned __int64)v43;
  data[29].Size = v45;
  data[29].Reserved = 0;
  v46 = <wrappedArgs_29>->Psz;
  if ( <wrappedArgs_29>->Psz )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v36 = 2 * v47 + 2;
  }
  else
  {
    v46 = (const wchar_t *)&unk_1C00998D0;
  }
  data[27].Ptr = (unsigned __int64)<wrappedArgs_28>;
  data[26].Ptr = (unsigned __int64)<wrappedArgs_27>;
  data[25].Ptr = (unsigned __int64)<wrappedArgs_26>;
  data[24].Ptr = (unsigned __int64)<wrappedArgs_25>;
  data[23].Ptr = (unsigned __int64)<wrappedArgs_24>;
  data[22].Ptr = (unsigned __int64)<wrappedArgs_23>;
  data[21].Ptr = (unsigned __int64)<wrappedArgs_22>;
  data[20].Ptr = (unsigned __int64)<wrappedArgs_21>;
  data[19].Ptr = (unsigned __int64)<wrappedArgs_20>;
  data[18].Ptr = (unsigned __int64)<wrappedArgs_19>;
  data[17].Ptr = (unsigned __int64)<wrappedArgs_18>;
  data[16].Ptr = (unsigned __int64)<wrappedArgs_17>;
  data[15].Ptr = (unsigned __int64)<wrappedArgs_16>;
  data[14].Ptr = (unsigned __int64)<wrappedArgs_15>;
  data[13].Ptr = (unsigned __int64)<wrappedArgs_14>;
  data[12].Ptr = (unsigned __int64)<wrappedArgs_13>;
  data[11].Ptr = (unsigned __int64)<wrappedArgs_12>;
  data[10].Ptr = (unsigned __int64)<wrappedArgs_11>;
  data[9].Ptr = (unsigned __int64)<wrappedArgs_10>;
  data[8].Ptr = (unsigned __int64)<wrappedArgs_9>;
  data[7].Ptr = (unsigned __int64)<wrappedArgs_8>;
  data[6].Ptr = (unsigned __int64)<wrappedArgs_7>;
  data[5].Ptr = (unsigned __int64)<wrappedArgs_6>;
  data[4].Ptr = (unsigned __int64)<wrappedArgs_5>;
  data[28].Ptr = (unsigned __int64)v46;
  data[28].Size = v36;
  data[28].Reserved = 0;
  v48 = <wrappedArgs_4>->Psz;
  *(_QWORD *)&data[27].Size = 1LL;
  *(_QWORD *)&data[26].Size = 1LL;
  *(_QWORD *)&data[25].Size = 1LL;
  *(_QWORD *)&data[24].Size = 1LL;
  *(_QWORD *)&data[23].Size = 1LL;
  *(_QWORD *)&data[22].Size = 1LL;
  *(_QWORD *)&data[21].Size = 1LL;
  *(_QWORD *)&data[20].Size = 1LL;
  *(_QWORD *)&data[19].Size = 1LL;
  *(_QWORD *)&data[18].Size = 1LL;
  *(_QWORD *)&data[17].Size = 1LL;
  *(_QWORD *)&data[16].Size = 1LL;
  *(_QWORD *)&data[15].Size = 1LL;
  *(_QWORD *)&data[14].Size = 1LL;
  *(_QWORD *)&data[13].Size = 1LL;
  *(_QWORD *)&data[12].Size = 1LL;
  *(_QWORD *)&data[11].Size = 1LL;
  *(_QWORD *)&data[10].Size = 1LL;
  *(_QWORD *)&data[9].Size = 1LL;
  *(_QWORD *)&data[8].Size = 1LL;
  *(_QWORD *)&data[7].Size = 1LL;
  *(_QWORD *)&data[6].Size = 1LL;
  *(_QWORD *)&data[5].Size = 1LL;
  *(_QWORD *)&data[4].Size = 1LL;
  if ( v48 )
  {
    do
      ++v35;
    while ( v48[v35] );
    v49 = v35 + 1;
  }
  else
  {
    v48 = a5;
    v49 = 1;
  }
  data[3].Size = v49;
  data[3].Ptr = (unsigned __int64)v48;
  data[3].Reserved = 0;
  data[2].Ptr = (unsigned __int64)<wrappedArgs_3>->Ptr;
  *(_QWORD *)&data[2].Size = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer(&Tlgg_TelemetryProviderProv, <wrappedArgs_0>, 0LL, 0LL, 0x20u, data);
}
