/*
 * XREFs of ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x18007C7A8
 * Callers:
 *     ?Update2DCursor@MPCCursorManager@@AEAAX_N@Z @ 0x18007C9B0 (-Update2DCursor@MPCCursorManager@@AEAAX_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCCursorManager_Update2DCursor_(ISMTracing *this, const bool *a2)
{
  __int64 v3; // rcx
  LPVOID v4; // rax
  int v5; // edx
  __int64 v6; // r10
  char v7; // al
  char v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  char *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v4 = wil::details::static_lazy<ISMTracing>::get(
           v3,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 1LL) )
    {
      v7 = *a2;
      v12 = 0;
      v8 = v7;
      v11 = v5;
      v10 = &v8;
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1801C91DE, 0LL, 0LL, 3u, &v9);
    }
  }
}
