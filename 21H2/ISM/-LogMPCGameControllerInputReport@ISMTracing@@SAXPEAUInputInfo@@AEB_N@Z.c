/*
 * XREFs of ?LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180083A28
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800840A0 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogMPCGameControllerInputReport(struct InputInfo *a1, const bool *a2)
{
  LPVOID v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  char v7; // [rsp+30h] [rbp-49h] BYREF
  int v8; // [rsp+34h] [rbp-45h] BYREF
  int v9; // [rsp+38h] [rbp-41h] BYREF
  int v10; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-29h] BYREF
  int *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  int *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  int *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  __int64 *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  char *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  v4 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)a1,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v4 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v4 + 1), 1LL) )
  {
    v7 = *a2;
    v11 = *((_QWORD *)a1 + 2);
    v8 = *((_DWORD *)a1 + 2);
    v9 = *((_DWORD *)a1 + 1);
    v10 = *(_DWORD *)a1;
    v21 = &v7;
    v19 = &v11;
    v17 = &v8;
    v15 = &v9;
    v13 = &v10;
    v22 = v5;
    v20 = 8LL;
    v18 = 4LL;
    v16 = 4LL;
    v14 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1801C9C18, 0LL, 0LL, 7u, &v12);
  }
}
