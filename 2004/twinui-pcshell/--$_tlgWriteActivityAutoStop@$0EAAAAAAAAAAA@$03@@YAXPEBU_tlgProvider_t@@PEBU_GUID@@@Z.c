/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802686B4
 * Callers:
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18026A434 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_18026A434.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$03@@IEAA@XZ @ 0x1803DF600 (--1-$_TlgActivityBase@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_P_ea_1803DF600.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

void __fastcall _tlgWriteActivityAutoStop<70368744177664,4>(_DWORD *a1)
{
  __int64 v1; // rcx
  const GUID *v2; // r10
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 > 4u )
  {
    if ( tlgKeywordOn((__int64)a1, 0x400000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_18050BA91, v2, 0LL, 2u, &v3);
  }
}
