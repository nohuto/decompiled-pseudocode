/*
 * XREFs of ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C00AA1B4
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C00A9DEC (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1C00A3A40 (CoreUICallSend.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@335@Z @ 0x1C01F92A0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01F95F0 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::PrepareConnection(
        const struct tagMsgRoutingInfo *a1,
        enum MsgError *a2,
        struct _GUID *a3)
{
  unsigned int v3; // ebx
  __int128 v5; // xmm1
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+60h] [rbp-69h] BYREF
  void *v15; // [rsp+68h] [rbp-61h] BYREF
  struct _GUID *v16; // [rsp+70h] [rbp-59h] BYREF
  char *v17; // [rsp+78h] [rbp-51h] BYREF
  __int64 v18; // [rsp+80h] [rbp-49h] BYREF
  __int128 v19; // [rsp+88h] [rbp-41h]
  _BYTE v20[24]; // [rsp+A8h] [rbp-21h]
  _OWORD v21[3]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v22; // [rsp+F0h] [rbp+27h]
  __int64 v23; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+138h] [rbp+6Fh] BYREF
  int v25; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0;
  v5 = *((_OWORD *)a1 + 1);
  v19 = *(_OWORD *)a1;
  v15 = &CoreMessagingK::SendHost::s_Vtbl;
  *(_QWORD *)v20 = *((_QWORD *)a1 + 4);
  *(_OWORD *)&v20[8] = 0LL;
  *((_QWORD *)&v19 + 1) = 0LL;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 24;
  v21[0] = (unsigned __int64)v19;
  CoreMessagingK::RegistrarClient::s_Reply_Parameter1 = 0LL;
  v21[1] = v5;
  v21[2] = *(_OWORD *)v20;
  v22 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v20[8], *(__m128d *)&v20[8]);
  v23 = 0LL;
  v8 = CoreUICallSend((int)&v15, (int)&v23, 1, 1, 3, (__int64)&unk_1C0208B03, v21);
  if ( v8 < 0 )
  {
    v3 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v8, v9);
  }
  else
  {
    *(_DWORD *)a2 = CoreMessagingK::RegistrarClient::s_Reply_Result;
    *a3 = *(struct _GUID *)((char *)CoreMessagingK::RegistrarClient::s_Reply_Parameter1 + 24);
  }
  if ( (unsigned int)dword_1C0243450 > 5 )
  {
    LODWORD(v23) = *(_DWORD *)a2;
    v16 = a3;
    v17 = (char *)a1 + 24;
    v18 = *((_QWORD *)a1 + 1);
    v25 = *((_DWORD *)a1 + 1);
    v14 = *(_DWORD *)a1;
    v24 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v10,
      (unsigned int)&unk_1C021C086,
      v11,
      v12,
      (__int64)&v14,
      (__int64)&v25,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v16);
  }
  return v3;
}
