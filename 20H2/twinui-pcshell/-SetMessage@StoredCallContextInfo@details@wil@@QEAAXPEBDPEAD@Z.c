/*
 * XREFs of ?SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z @ 0x18034FDD8
 * Callers:
 *     ?SetMessage@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXPEBDZZ @ 0x18034FD78 (-SetMessage@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007C198 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800F0360 (_alloca_probe.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180140BB8 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x1801895C8 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
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
