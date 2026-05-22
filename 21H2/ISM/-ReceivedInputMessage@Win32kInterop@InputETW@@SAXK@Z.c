/*
 * XREFs of ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800B27B0
 * Callers:
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N2@Z @ 0x1800B14BC (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180028B34 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029560 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall InputETW::Win32kInterop::ReceivedInputMessage(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  LPVOID v3; // rax
  __int64 v4; // r10
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v1 = (unsigned int)a1;
  if ( InputETW::IsEnabled(a1) )
  {
    v3 = wil::details::static_lazy<InputETW>::get(v2, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v3 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v3 + 1), 1LL) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = v1;
      v8 = 8;
      tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1801CB756, 0LL, 0LL, 3u, &v6);
    }
  }
}
