/*
 * XREFs of ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x1800773EC
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x180078AA0 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(
        ISMTracing *this,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        bool a6)
{
  __int64 v9; // rcx
  LPVOID v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r10
  bool v14; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-55h] BYREF
  int v16; // [rsp+40h] [rbp-51h] BYREF
  __int64 v17; // [rsp+48h] [rbp-49h] BYREF
  __int64 v18; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v20; // [rsp+78h] [rbp-19h]
  int v21; // [rsp+80h] [rbp-11h]
  int v22; // [rsp+84h] [rbp-Dh]
  __int64 *v23; // [rsp+88h] [rbp-9h]
  int v24; // [rsp+90h] [rbp-1h]
  int v25; // [rsp+94h] [rbp+3h]
  int *v26; // [rsp+98h] [rbp+7h]
  int v27; // [rsp+A0h] [rbp+Fh]
  int v28; // [rsp+A4h] [rbp+13h]
  unsigned int *v29; // [rsp+A8h] [rbp+17h]
  int v30; // [rsp+B0h] [rbp+1Fh]
  int v31; // [rsp+B4h] [rbp+23h]
  bool *v32; // [rsp+B8h] [rbp+27h]
  int v33; // [rsp+C0h] [rbp+2Fh]
  int v34; // [rsp+C4h] [rbp+33h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v10 = wil::details::static_lazy<ISMTracing>::get(
            v9,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v10 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v10 + 1), 1LL) )
    {
      v34 = 0;
      v31 = 0;
      v28 = 0;
      v25 = 0;
      v22 = 0;
      v14 = a6;
      v15 = a5;
      v32 = &v14;
      v29 = &v15;
      v26 = &v16;
      v23 = &v17;
      v20 = &v18;
      v33 = v11;
      v30 = v12;
      v27 = v12;
      v24 = v11 + 7;
      v21 = v11 + 7;
      v16 = a4;
      v17 = a3;
      v18 = a2;
      tlgWriteTransfer_EventWriteTransfer(v13, (unsigned __int8 *)dword_1801C89EF, 0LL, 0LL, 7u, &v19);
    }
  }
}
