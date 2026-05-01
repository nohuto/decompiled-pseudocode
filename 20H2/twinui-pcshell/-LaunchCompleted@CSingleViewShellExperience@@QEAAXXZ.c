/*
 * XREFs of ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18004430C
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180025040 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?LaunchCompleted@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x180089E40 (-LaunchCompleted@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B3B50 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801C37F0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801D3A10 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180016088 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180016114 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??$?0PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1@Z @ 0x1800443C4 (--$-0PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@AEAA@U-$integral_constant@D$0A@@wis.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180044494 (--1-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180046354 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSingleViewShellExperience::LaunchCompleted(HSTRING *this)
{
  __int64 v2; // rdx
  WINBOOL v3; // edx
  PCWSTR StringRawBuffer; // [rsp+20h] [rbp-168h] BYREF
  PCWSTR v5; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v5 = WindowsGetStringRawBuffer(this[1], 0LL);
  ((void (__fastcall *)(_QWORD *, __int64, PCWSTR *, PCWSTR *))SingleViewExperienceTelemetry::LaunchCompleted::LaunchCompleted)(
    v6,
    v2,
    &v5,
    &StringRawBuffer);
  CSingleViewShellExperience::UnboostPriority(this, 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6, v3);
  v6[0] = &SingleViewExperienceTelemetry::LaunchCompleted::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(v6);
}
