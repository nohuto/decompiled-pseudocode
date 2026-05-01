/*
 * XREFs of ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18005D7EC
 * Callers:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18005D3B4 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _lambda_66b4be155c180cbf0fecfe62468dbd4c_::operator() @ 0x18005D518 (_lambda_66b4be155c180cbf0fecfe62468dbd4c_--operator().c)
 *     ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1802CB7CC (--$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXA.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CommitImportanceVector_(
        ViewManagerInteropTraceLogging *this,
        int a2,
        const union _RM_ACTIVITY_IMPORTANCE *a3)
{
  __int64 v5; // r10
  unsigned __int16 v6; // cx
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v8; // [rsp+38h] [rbp-D0h] BYREF
  char v9; // [rsp+39h] [rbp-CFh] BYREF
  __int16 v10; // [rsp+3Ah] [rbp-CEh] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v12; // [rsp+3Eh] [rbp-CAh] BYREF
  __int16 v13; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v14; // [rsp+42h] [rbp-C6h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+60h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v23; // [rsp+88h] [rbp-80h]
  int v24; // [rsp+90h] [rbp-78h]
  int v25; // [rsp+94h] [rbp-74h]
  __int64 *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  int *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  char *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  int *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  __int16 *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  __int16 *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  __int16 *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int16 *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  __int16 *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  char *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CD530;
    qword_1805CD530[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD548 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD530, qword_1805CD548, v7);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CD530);
  }
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *(_WORD *)a3;
    v8 = *((_BYTE *)a3 + 2);
    LODWORD(v18) = a2;
    v10 = HIBYTE(v6) & 1;
    v45 = 1LL;
    v43 = 2LL;
    v11 = v6 & 1;
    v41 = 2LL;
    v12 = (v6 >> 7) & 1;
    v39 = 2LL;
    v13 = (v6 >> 6) & 1;
    v14 = (v6 >> 4) & 3;
    v9 = *((_BYTE *)a3 + 3);
    v17 = *(_DWORD *)a3;
    v44 = &v8;
    v42 = &v10;
    v40 = &v11;
    v38 = &v12;
    v36 = &v13;
    v34 = &v14;
    v32 = &v15;
    v30 = &v9;
    v28 = &v17;
    v26 = &v18;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    LOWORD(v15) = (v6 >> 1) & 7;
    v37 = 2LL;
    v35 = 2LL;
    v33 = 2LL;
    v31 = 1LL;
    v29 = 4LL;
    v27 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v23 = &unk_180514A8D;
    UserData.Reserved = 2;
    v24 = 175;
    v25 = 1;
    v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
  }
}
