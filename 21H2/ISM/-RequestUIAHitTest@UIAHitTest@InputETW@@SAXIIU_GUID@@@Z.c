/*
 * XREFs of ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z @ 0x1801395F0
 * Callers:
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x180139470 (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180029518 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029560 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall InputETW::UIAHitTest::RequestUIAHitTest(int a1, int a2, struct _GUID *a3)
{
  __int64 v6; // rcx
  LPVOID v7; // rax
  int v8; // edx
  __int64 v9; // r10
  int v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  struct _GUID *v19; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]

  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v7 = wil::details::static_lazy<InputETW>::get(v6, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v7 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v7 + 1), 1LL) )
    {
      v21 = 0;
      v18 = 0;
      v15 = 0;
      v16 = &v10;
      v17 = v8 + 3;
      v13 = &v11;
      v14 = v8 + 3;
      v10 = a2;
      v11 = a1;
      v19 = a3;
      v20 = 16;
      tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1801CF4C5, 0LL, 0LL, 5u, &v12);
    }
  }
}
