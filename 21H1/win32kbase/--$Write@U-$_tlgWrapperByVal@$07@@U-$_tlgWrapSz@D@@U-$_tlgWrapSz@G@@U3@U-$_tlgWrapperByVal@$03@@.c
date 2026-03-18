/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01331B4
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C0141360 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ExtractAggregateFieldTypes @ 0x1C0200FA8 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C020115C (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        __int64 a8)
{
  __int64 v8; // rcx
  const WCHAR *v10; // r8
  __int64 v11; // rax
  int v12; // edx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  _BYTE *v16; // rdx
  int v17; // ecx
  NTSTATUS result; // eax
  char v19; // al
  int v20; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int8 *v24; // [rsp+60h] [rbp-39h]
  int v25; // [rsp+68h] [rbp-31h]
  int v26; // [rsp+6Ch] [rbp-2Dh]
  __int64 v27; // [rsp+70h] [rbp-29h]
  __int64 v28; // [rsp+78h] [rbp-21h]
  _BYTE *v29; // [rsp+80h] [rbp-19h]
  int v30; // [rsp+88h] [rbp-11h]
  int v31; // [rsp+8Ch] [rbp-Dh]
  const WCHAR *v32; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+98h] [rbp-1h]
  int v34; // [rsp+9Ch] [rbp+3h]
  const WCHAR *v35; // [rsp+A0h] [rbp+7h]
  int v36; // [rsp+A8h] [rbp+Fh]
  int v37; // [rsp+ACh] [rbp+13h]
  __int64 v38; // [rsp+B0h] [rbp+17h]
  __int64 v39; // [rsp+B8h] [rbp+1Fh]

  v38 = a8;
  v8 = -1LL;
  v39 = 4LL;
  v10 = *a7;
  if ( *a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &word_1C0211C10;
    v12 = 2;
  }
  v36 = v12;
  v35 = v10;
  v37 = 0;
  v13 = *a6;
  if ( *a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &word_1C0211C10;
    v15 = 2;
  }
  v32 = v13;
  v33 = v15;
  v34 = 0;
  v16 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v16[v8] );
    v17 = v8 + 1;
  }
  else
  {
    v16 = &unk_1C0225CC8;
    v17 = 1;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v30 = v17;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v29 = v16;
  v31 = 0;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C024B1E8;
  v27 = a4;
  v28 = 8LL;
  UserData.Size = *(unsigned __int16 *)off_1C024B1E8;
  v25 = *(unsigned __int16 *)(a2 + 11);
  v24 = a2 + 11;
  UserData.Reserved = 2;
  v26 = 1;
  v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C024B208 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v19 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v19 )
    {
      LOBYTE(v20) = 7;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C024B1E0,
               (unsigned int)&EventDescriptor,
               v20,
               (unsigned int)&UserData,
               v19);
    }
    else
    {
      return EtwWriteTransfer(qword_1C024B200, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
    }
  }
  return result;
}
