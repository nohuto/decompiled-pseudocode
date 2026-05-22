/*
 * XREFs of ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800B6928
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800B65C0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18013A4C0 (-DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800295C8 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029610 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180086D1C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputETW::InputTarget::DeliverInputReport(struct InputInfo *a1)
{
  __int64 v2; // rcx
  LPVOID v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rbx
  LARGE_INTEGER v10; // rdi
  int v11; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-1h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+7h] BYREF
  LARGE_INTEGER Frequency; // [rsp+60h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+68h] [rbp+17h] BYREF
  unsigned __int64 *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]

  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v3 = wil::details::static_lazy<InputETW>::get(v2, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v3 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v3 + 1), 1LL) )
    {
      v12 = *((_QWORD *)a1 + 2);
      v11 = *((_DWORD *)a1 + 2);
      PerformanceCount.QuadPart = *(int *)a1;
      Frequency.QuadPart = *((unsigned int *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        byte_1801CA736,
        v4,
        v5,
        (__int64)&Frequency,
        (__int64)&PerformanceCount,
        (__int64)&v11,
        (__int64)&v12);
    }
    if ( InputETW::IsVerboseEnabled(2LL) )
    {
      v7 = wil::details::static_lazy<InputETW>::get(
             v6,
             _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v8 = (_DWORD *)v7[1];
      if ( *v8 > 5u && tlgKeywordOn(v7[1], 1LL) )
      {
        v9 = *((_QWORD *)a1 + 2);
        QueryPerformanceFrequency(&Frequency);
        v10 = Frequency;
        QueryPerformanceCounter(&PerformanceCount);
        v18 = 0;
        v17 = 8;
        v12 = (unsigned __int64)(1000000 * (PerformanceCount.QuadPart - v9)) / v10.QuadPart;
        v16 = &v12;
        tlgWriteTransfer_EventWriteTransfer((__int64)v8, (unsigned __int8 *)dword_1801CA6F7, 0LL, 0LL, 3u, &v15);
      }
    }
  }
}
