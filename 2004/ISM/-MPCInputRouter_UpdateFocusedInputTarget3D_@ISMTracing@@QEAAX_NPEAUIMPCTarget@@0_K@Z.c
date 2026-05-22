/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z @ 0x1800B8C08
 * Callers:
 *     ??$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAEA_N$$QEAPEAUIMPCFocusTarget@@$$QEA_NAEA_K@Z @ 0x1800B6F4C (--$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800B7C60 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(
        ISMTracing *this,
        char a2,
        struct IMPCTarget *a3,
        char a4,
        unsigned __int64 a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _DWORD *v10; // rbx
  char v11; // [rsp+30h] [rbp-61h] BYREF
  char v12; // [rsp+31h] [rbp-60h] BYREF
  int PIDOfTarget; // [rsp+34h] [rbp-5Dh] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-59h] BYREF
  struct IMPCTarget *v15; // [rsp+40h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-41h] BYREF
  char *v17; // [rsp+70h] [rbp-21h]
  int v18; // [rsp+78h] [rbp-19h]
  int v19; // [rsp+7Ch] [rbp-15h]
  struct IMPCTarget **v20; // [rsp+80h] [rbp-11h]
  int v21; // [rsp+88h] [rbp-9h]
  int v22; // [rsp+8Ch] [rbp-5h]
  char *v23; // [rsp+90h] [rbp-1h]
  int v24; // [rsp+98h] [rbp+7h]
  int v25; // [rsp+9Ch] [rbp+Bh]
  int *p_PIDOfTarget; // [rsp+A0h] [rbp+Fh]
  int v27; // [rsp+A8h] [rbp+17h]
  int v28; // [rsp+ACh] [rbp+1Bh]
  unsigned __int64 *v29; // [rsp+B0h] [rbp+1Fh]
  int v30; // [rsp+B8h] [rbp+27h]
  int v31; // [rsp+BCh] [rbp+2Bh]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v9 = wil::details::static_lazy<ISMTracing>::get(
           v8,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v10 = (_DWORD *)v9[1];
    if ( *v10 > 4u && tlgKeywordOn(v9[1], 1LL) )
    {
      v14 = a5;
      v31 = 0;
      v28 = 0;
      v25 = 0;
      v22 = 0;
      v19 = 0;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a3);
      v29 = &v14;
      p_PIDOfTarget = &PIDOfTarget;
      v23 = &v11;
      v20 = &v15;
      v17 = &v12;
      v30 = 8;
      v21 = 8;
      v11 = a4;
      v15 = a3;
      v12 = a2;
      v27 = 4;
      v24 = 1;
      v18 = 1;
      tlgWriteTransfer_EventWriteTransfer((__int64)v10, (unsigned __int8 *)dword_1801CAB76, 0LL, 0LL, 7u, &v16);
    }
  }
}
