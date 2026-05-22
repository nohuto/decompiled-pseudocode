/*
 * XREFs of ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x180181D88
 * Callers:
 *     ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801822C0 (-OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180028D94 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029640 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

void __fastcall InputETW::RawButtonProcessor::ButtonEvent(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v5; // esi
  __int64 v6; // rcx
  LPVOID v7; // rax
  int v8; // edx
  __int64 v9; // r10
  int v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v12; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  int *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  int *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  __int64 *v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]

  v3 = a3;
  v5 = a1;
  if ( InputETW::IsEnabled(a1) )
  {
    v7 = wil::details::static_lazy<InputETW>::get(v6, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v7 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v7 + 1), 1LL) )
    {
      v22 = 0;
      v19 = 0;
      v16 = 0;
      v20 = &v12;
      v18 = v8 + 3;
      v17 = &v10;
      v15 = v8 + 3;
      v14 = &v11;
      v12 = v3;
      v10 = a2;
      v11 = v5;
      v21 = 8;
      tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1801D15EE, 0LL, 0LL, 5u, &v13);
    }
  }
}
