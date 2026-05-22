/*
 * XREFs of ?SetForegroundActivatableEntity@ForegroundManager@InputTraceLogging@@SAX_K@Z @ 0x180105010
 * Callers:
 *     ?SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x180046CC0 (-SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018CC0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ForegroundManager::SetForegroundActivatableEntity(__int64 a1)
{
  LPVOID v2; // rax
  __int64 v3; // r10
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v2 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v2 + 1), 0x8000LL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = a1;
    v7 = 8;
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1801CED5D, 0LL, 0LL, 3u, &v5);
  }
}
