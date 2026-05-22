/*
 * XREFs of ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x1800B88EC
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800B8DF0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
        ISMTracing *this,
        char a2,
        int a3,
        __int64 a4)
{
  __int64 v7; // rcx
  LPVOID v8; // rax
  int v9; // edx
  __int64 v10; // r10
  char v11; // [rsp+38h] [rbp-19h] BYREF
  int v12; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v13; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-9h] BYREF
  char *v15; // [rsp+68h] [rbp+17h]
  int v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+74h] [rbp+23h]
  int *v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+84h] [rbp+33h]
  __int64 *v21; // [rsp+88h] [rbp+37h]
  int v22; // [rsp+90h] [rbp+3Fh]
  int v23; // [rsp+94h] [rbp+43h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v8 = wil::details::static_lazy<ISMTracing>::get(
           v7,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v8 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v8 + 1), 1LL) )
    {
      v23 = 0;
      v20 = 0;
      v17 = 0;
      v21 = &v13;
      v16 = v9;
      v18 = &v12;
      v13 = a4;
      v15 = &v11;
      v12 = a3;
      v11 = a2;
      v22 = 8;
      v19 = 4;
      tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1801CA9AD, 0LL, 0LL, 5u, &v14);
    }
  }
}
