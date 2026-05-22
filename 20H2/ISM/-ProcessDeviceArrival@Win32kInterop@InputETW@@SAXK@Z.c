/*
 * XREFs of ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x180028D2C
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180029AAC (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180028D94 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029640 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

void __fastcall InputETW::Win32kInterop::ProcessDeviceArrival(unsigned int a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // r10d
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = a1;
  if ( InputETW::IsEnabled(a1, a2) )
  {
    v4 = wil::details::static_lazy<InputETW>::get(v3, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v4 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v4 + 8), 1LL) )
    {
      v10 = 0;
      v8 = &v6;
      v6 = v2;
      v9 = 8;
      tlgWriteTransfer_EventWriteTransfer(v5, (int)&dword_1801CA303, 0, 0, 3u, &v7);
    }
  }
}
