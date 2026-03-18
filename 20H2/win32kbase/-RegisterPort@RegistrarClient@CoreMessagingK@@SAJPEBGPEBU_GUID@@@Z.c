/*
 * XREFs of ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C00A9894
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00A916C (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1C00A3A40 (CoreUICallSend.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01F9044 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01F95F0 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterPort(const unsigned __int16 *a1, const struct _GUID *a2)
{
  struct _GUID v3; // xmm0
  int v4; // eax
  int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v9; // [rsp+50h] [rbp-29h]
  struct _GUID v10; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v11[20]; // [rsp+70h] [rbp-9h]
  __int64 v12; // [rsp+84h] [rbp+Bh]
  __int128 v13; // [rsp+90h] [rbp+17h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+27h]
  int v15; // [rsp+A8h] [rbp+2Fh]
  const unsigned __int16 *v16; // [rsp+E0h] [rbp+67h] BYREF
  const struct _GUID *v17; // [rsp+E8h] [rbp+6Fh] BYREF
  void *v18; // [rsp+F0h] [rbp+77h] BYREF
  const wchar_t *v19; // [rsp+F8h] [rbp+7Fh]

  v16 = a1;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 24;
  v12 = 0LL;
  *(_OWORD *)&v11[4] = 0LL;
  v3 = *a2;
  v18 = &CoreMessagingK::SendHost::s_Vtbl;
  v9 = 1;
  v15 = 0;
  *(_DWORD *)v11 = 1;
  v10 = v3;
  v13 = *(_OWORD *)v11;
  v14 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v4 = CoreUICallSend(
         (int)&v18,
         (int)&v17,
         1,
         1,
         10,
         (__int64)&unk_1C0208B0D,
         L"Kernel\\MIT\\InputPort",
         &v13,
         &v16,
         &v10,
         v9);
  if ( v4 < 0 )
    v7 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v4, v5);
  else
    v7 = CoreMessagingK::RegistrarClient::s_Reply_Result != 0 ? 0xC0000001 : 0;
  if ( (unsigned int)dword_1C0243450 > 5 )
  {
    LODWORD(v16) = v7;
    v17 = a2;
    v19 = L"Kernel\\MIT\\InputPort";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v6,
      &unk_1C021C19A);
  }
  return v7;
}
