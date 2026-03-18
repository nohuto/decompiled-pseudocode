/*
 * XREFs of ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C003B49C
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C003B230 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1C0033350 (CoreUICallSend.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0200458 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C0200930 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::UnregisterObject(const unsigned __int16 *a1)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // [rsp+48h] [rbp-9h]
  _BYTE v8[20]; // [rsp+58h] [rbp+7h]
  __int128 v9; // [rsp+78h] [rbp+27h] BYREF
  __int64 v10; // [rsp+88h] [rbp+37h]
  int v11; // [rsp+90h] [rbp+3Fh]
  __int64 v12; // [rsp+C0h] [rbp+6Fh] BYREF
  void *v13; // [rsp+C8h] [rbp+77h] BYREF
  const unsigned __int16 *v14; // [rsp+D0h] [rbp+7Fh]

  v12 = 0LL;
  v13 = &CoreMessagingK::SendHost::s_Vtbl;
  v7 = 1;
  v11 = 0;
  *(_OWORD *)&v8[4] = 0LL;
  *(_DWORD *)v8 = 1;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 24;
  v9 = *(_OWORD *)v8;
  v10 = 0LL;
  v2 = CoreUICallSend((int)&v13, (int)&v12, 1, 1, 12, (__int64)&unk_1C021019A, a1, &v9, v7);
  if ( v2 < 0 )
    v5 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v2, v3);
  else
    v5 = CoreMessagingK::RegistrarClient::s_Reply_Result != 0 ? 0xC0000001 : 0;
  if ( (unsigned int)dword_1C024B450 > 5 )
  {
    LODWORD(v12) = v5;
    v14 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v4,
      &unk_1C0223AC7);
  }
  return v5;
}
