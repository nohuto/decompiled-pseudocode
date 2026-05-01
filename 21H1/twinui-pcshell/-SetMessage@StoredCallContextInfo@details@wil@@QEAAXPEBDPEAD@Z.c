/*
 * XREFs of ?SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z @ 0x18032EDC8
 * Callers:
 *     ?SetMessage@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXPEBDZZ @ 0x18032ED68 (-SetMessage@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800CA410 (_alloca_probe.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18011C708 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x180165A68 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

void __fastcall wil::details::StoredCallContextInfo::SetMessage(
        wil::details::StoredCallContextInfo *this,
        char *a2,
        va_list a3)
{
  unsigned __int16 v4[2048]; // [rsp+20h] [rbp-1018h] BYREF

  wil::details::PrintLoggingMessage(v4, (unsigned __int16 *)a2, (__int64)a2, a3);
  wil::details::StoredCallContextInfo::ClearMessage(this);
  wil::details::StoredCallContextInfo::AssignMessage(this, v4);
}
