/*
 * XREFs of ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x1800B8B8C
 * Callers:
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800B8800 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800B8020 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_IsTargetHolographic_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        __int64 a4,
        bool a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _DWORD *v10; // rbx
  bool v11; // [rsp+30h] [rbp-51h] BYREF
  int PIDOfTarget; // [rsp+34h] [rbp-4Dh] BYREF
  int v13; // [rsp+38h] [rbp-49h] BYREF
  __int64 v14; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-31h] BYREF
  bool *v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+7Ch] [rbp-5h]
  int *v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+8Ch] [rbp+Bh]
  __int64 *v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+98h] [rbp+17h]
  int v24; // [rsp+9Ch] [rbp+1Bh]
  int *p_PIDOfTarget; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A8h] [rbp+27h]
  int v27; // [rsp+ACh] [rbp+2Bh]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v9 = wil::details::static_lazy<ISMTracing>::get(
           v8,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v10 = (_DWORD *)v9[1];
    if ( *v10 > 5u && tlgKeywordOn(v9[1], 1LL) )
    {
      v27 = 0;
      v24 = 0;
      v21 = 0;
      v18 = 0;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
      v11 = a5;
      p_PIDOfTarget = &PIDOfTarget;
      v22 = &v14;
      v19 = &v13;
      v16 = &v11;
      v26 = 4;
      v20 = 4;
      v14 = a4;
      v13 = a3;
      v23 = 8;
      v17 = 1;
      tlgWriteTransfer_EventWriteTransfer((__int64)v10, (unsigned __int8 *)dword_1801CBBE5, 0LL, 0LL, 6u, &v15);
    }
  }
}
