/*
 * XREFs of ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x1800B8AC8
 * Callers:
 *     ??$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z @ 0x1800B6EC8 (--$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Update3DFocusWNF_(
        ISMTracing *this,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v10; // rcx
  LPVOID v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r10
  unsigned int v15; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-6Dh] BYREF
  unsigned int v17; // [rsp+40h] [rbp-69h] BYREF
  int v18; // [rsp+44h] [rbp-65h] BYREF
  __int64 v19; // [rsp+48h] [rbp-61h] BYREF
  __int64 v20; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+58h] [rbp-51h] BYREF
  __int64 *v22; // [rsp+78h] [rbp-31h]
  int v23; // [rsp+80h] [rbp-29h]
  int v24; // [rsp+84h] [rbp-25h]
  __int64 *v25; // [rsp+88h] [rbp-21h]
  int v26; // [rsp+90h] [rbp-19h]
  int v27; // [rsp+94h] [rbp-15h]
  int *v28; // [rsp+98h] [rbp-11h]
  int v29; // [rsp+A0h] [rbp-9h]
  int v30; // [rsp+A4h] [rbp-5h]
  unsigned int *v31; // [rsp+A8h] [rbp-1h]
  int v32; // [rsp+B0h] [rbp+7h]
  int v33; // [rsp+B4h] [rbp+Bh]
  unsigned int *v34; // [rsp+B8h] [rbp+Fh]
  int v35; // [rsp+C0h] [rbp+17h]
  int v36; // [rsp+C4h] [rbp+1Bh]
  unsigned int *v37; // [rsp+C8h] [rbp+1Fh]
  int v38; // [rsp+D0h] [rbp+27h]
  int v39; // [rsp+D4h] [rbp+2Bh]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v11 = wil::details::static_lazy<ISMTracing>::get(
            v10,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v11 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v11 + 1), 1LL) )
    {
      v39 = 0;
      v36 = 0;
      v33 = 0;
      v30 = 0;
      v27 = 0;
      v24 = 0;
      v15 = a7;
      v16 = a6;
      v17 = a5;
      v37 = &v15;
      v34 = &v16;
      v31 = &v17;
      v28 = &v18;
      v25 = &v19;
      v22 = &v20;
      v38 = v13;
      v35 = v13;
      v32 = v13;
      v29 = v13;
      v26 = v12 + 7;
      v23 = v12 + 7;
      v18 = a4;
      v19 = a3;
      v20 = a2;
      tlgWriteTransfer_EventWriteTransfer(v14, (unsigned __int8 *)dword_1801CA898, 0LL, 0LL, v12 + 7, &v21);
    }
  }
}
