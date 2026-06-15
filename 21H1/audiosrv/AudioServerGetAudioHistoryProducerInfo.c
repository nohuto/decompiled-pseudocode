/*
 * XREFs of AudioServerGetAudioHistoryProducerInfo @ 0x1800DE850
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180045D10 (MIDL_user_allocate.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180046C04 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057AD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800BE53C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800C5A68 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_6ce62ec4f03bb3a216d20b2b9ab0e365___::_lambda_call__lambda_6ce62ec4f03bb3a216d20b2b9ab0e365___ @ 0x1800DB45C (wil--details--lambda_call__lambda_6ce62ec4f03bb3a216d20b2b9ab0e365___--_lambda_call__lambda_6ce6.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800DE260 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall AudioServerGetAudioHistoryProducerInfo(
        char *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        void **a5,
        _DWORD *a6,
        _QWORD *a7)
{
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  HRESULT v14; // eax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rbx
  char *v17; // rcx
  char *v18; // r8
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int16 *v22; // rbx
  void *v23; // rax
  void **v25; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-48h] BYREF
  char v27; // [rsp+30h] [rbp-40h]
  void *v28; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v29[32]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v25 = a5;
  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v29, a1);
  v28 = 0LL;
  *a5 = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 280);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 296);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 312);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 328);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 344);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 360);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 376);
  *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 392);
  *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 408);
  *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 424);
  *(_OWORD *)(a2 + 72) = 0LL;
  *(_OWORD *)(a2 + 88) = 0LL;
  *(_OWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 120) = 0LL;
  if ( !*(_DWORD *)(a2 + 144) )
  {
    v11 = -2147024809;
    v12 = 4830LL;
LABEL_7:
    v15 = v11;
    goto LABEL_8;
  }
  v13 = *((_QWORD *)a1 + 66);
  v26 = 0LL;
  *a3 = v13;
  *a4 = *((_QWORD *)a1 + 67);
  v14 = StringCchLengthW(*((const unsigned __int16 **)a1 + 26), 0x104uLL, &v26);
  v11 = v14;
  if ( v14 >= 0 )
  {
    v16 = v26;
    *v25 = MIDL_user_allocate(2 * v26 + 2);
    v17 = (char *)*v25;
    if ( !*v25 )
    {
      v11 = -2147024882;
      v12 = 4838LL;
      goto LABEL_7;
    }
    v18 = (char *)*((_QWORD *)a1 + 26);
    v26 = (unsigned __int64)&v25;
    v27 = 1;
    v19 = StringCchCopyW(v17, v16 + 1, v18);
    v11 = v19;
    if ( v19 >= 0 )
    {
      v22 = (unsigned __int16 *)*((_QWORD *)a1 + 22);
      v23 = MIDL_user_allocate(v22[8] + 18LL);
      *a7 = v23;
      if ( v23 )
      {
        memcpy_0(v23, v22, v22[8] + 18LL);
        v27 = 0;
        v11 = 0;
        *a6 = *((_DWORD *)a1 + 138) == 3;
        goto LABEL_15;
      }
      v11 = -2147024882;
      v21 = 4849LL;
      v20 = 2147942414LL;
    }
    else
    {
      v20 = (unsigned int)v19;
      v21 = 4845LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v20);
LABEL_15:
    wil::details::lambda_call__lambda_6ce62ec4f03bb3a216d20b2b9ab0e365___::_lambda_call__lambda_6ce62ec4f03bb3a216d20b2b9ab0e365___((__int64)&v26);
    goto LABEL_16;
  }
  v15 = (unsigned int)v14;
  v12 = 4836LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v15);
LABEL_16:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v28);
  TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v29);
  return v11;
}
