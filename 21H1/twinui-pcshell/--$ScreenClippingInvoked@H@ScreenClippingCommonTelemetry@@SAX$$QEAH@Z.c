/*
 * XREFs of ??$ScreenClippingInvoked@H@ScreenClippingCommonTelemetry@@SAX$$QEAH@Z @ 0x1801C3A54
 * Callers:
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801C75FC (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging@@P6AXXZ@Z @ 0x1801C8380 (-get@-$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging.c)
 */

char __fastcall ScreenClippingCommonTelemetry::ScreenClippingInvoked<int>(int *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<ShellScreenClippingLogging>::get(
         a1,
         _lambda_d71f6d60408a6de3c75f9a9c93a2d5fc_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(v2 + 8);
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      v11 = 0;
      v7 = v5;
      v10 = 4;
      v9 = &v7;
      LOBYTE(v2) = tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1804DCECB, 0LL, 0LL, 3u, &v8);
    }
  }
  return v2;
}
