/*
 * XREFs of ?OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180171640
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x1800491D0 (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18007F8DC (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_J@Z @ 0x1800974F8 (--0-$extent_type@$0-0@details@gsl@@QEAA@_J@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18009902C (-terminate@details@gsl@@YAXXZ.c)
 *     ?Provider@TestCursorTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18014011C (-Provider@TestCursorTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorSuppressionProcessor::OnInput(
        CursorSuppressionProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  char *v7; // rbx
  gsl::details *v8; // rcx
  char *v9; // rax
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  const wchar_t **v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  volatile signed __int32 *v17; // r14
  __int64 v18; // r12
  __int64 v19; // rdi
  int (__fastcall *v20)(__int64, __int64 *); // rbx
  __int64 v21; // rbx
  int (__fastcall *v22)(__int64, __int64 *); // rdi
  void (__fastcall *v23)(__int64, _QWORD, __int64); // rbx
  _QWORD *v24; // rax
  __int64 v25; // r8
  const wchar_t *v26; // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v28[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29[5]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+48h] BYREF

  *((_DWORD *)a4 + 2) = 0;
  v7 = (char *)a2 + 216;
  gsl::details::extent_type<-1>::extent_type<-1>(v29, *((unsigned int *)a2 + 53));
  if ( v29[0] < 0 || a2 == (struct InputInfo *)-216LL && v29[0] )
  {
    gsl::details::terminate(v8);
    __debugbreak();
  }
  v9 = &v7[144 * v29[0]];
  while ( 1 )
  {
    if ( v7 == v9 )
    {
      if ( *((_DWORD *)this + 20) )
        return 0LL;
      *((_DWORD *)this + 20) = 1;
      v10 = TestCursorTraceLogging::Provider((__int64)v8);
      if ( *(_DWORD *)v10 > 4u )
      {
        v27 = (__int64)L"Pending";
        v13 = (const wchar_t **)&v27;
        goto LABEL_11;
      }
      goto LABEL_12;
    }
    if ( (v7[12] & 6) != 0 )
      break;
    v7 += 144;
  }
  *((_DWORD *)a4 + 2) = 4;
  if ( *((_DWORD *)this + 20) )
  {
    if ( *((_DWORD *)this + 20) == 2 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 9) + 184LL) + 8LL;
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 216LL))(v15);
      v17 = *(volatile signed __int32 **)(v16 + 104);
      if ( v17 )
      {
        _InterlockedIncrement(v17 + 2);
        v17 = *(volatile signed __int32 **)(v16 + 104);
      }
      v18 = *(_QWORD *)(v16 + 96);
      v29[2] = v18;
      v29[3] = (__int64)v17;
      if ( v18 )
      {
        v31 = 0LL;
        v30 = 0LL;
        v19 = *((_QWORD *)this + 8);
        v20 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 72LL);
        Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v31);
        if ( v20(v19, &v31) >= 0 )
        {
          v21 = v31;
          v22 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 40LL);
          Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v30);
          if ( v22(v21, &v30) >= 0 )
          {
            v23 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v18 + 24LL);
            v24 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 40LL))(v30, v28);
            LOBYTE(v25) = 1;
            v23(v18, *v24, v25);
          }
        }
        Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v30);
        Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v31);
      }
      if ( v17 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v17);
    }
    *((_DWORD *)this + 20) = 0;
    v10 = TestCursorTraceLogging::Provider((__int64)v8);
    if ( *(_DWORD *)v10 > 4u )
    {
      v26 = L"Suppressed";
      v13 = &v26;
LABEL_11:
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (__int64)v10,
        (unsigned __int8 *)dword_1801D1271,
        v11,
        v12,
        v13);
    }
LABEL_12:
    InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((_DWORD *)this + 20));
  }
  return 0LL;
}
