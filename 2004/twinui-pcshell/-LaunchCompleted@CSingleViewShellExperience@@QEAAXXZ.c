/*
 * XREFs of ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18001481C
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002C4D0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?LaunchCompleted@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x18008A2E0 (-LaunchCompleted@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B3F40 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801C3C80 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801D40E0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18000EF14 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800119D8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180011A64 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180014544 (--1-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ??$?0PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1@Z @ 0x180014680 (--$-0PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@AEAA@U-$integral_constant@D$0A@@wis.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSingleViewShellExperience::LaunchCompleted(HSTRING *this)
{
  char v2; // dl
  WINBOOL v3; // edx
  PCWSTR StringRawBuffer; // [rsp+20h] [rbp-168h] BYREF
  PCWSTR v5; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v5 = WindowsGetStringRawBuffer(this[1], 0LL);
  SingleViewExperienceTelemetry::LaunchCompleted::LaunchCompleted(
    (__int64)v6,
    v2,
    (__int64 *)&v5,
    (__int64 *)&StringRawBuffer);
  CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6, v3);
  v6[0] = &SingleViewExperienceTelemetry::LaunchCompleted::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
}
