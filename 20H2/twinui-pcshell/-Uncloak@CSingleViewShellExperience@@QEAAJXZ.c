/*
 * XREFs of ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18004456C
 * Callers:
 *     ?Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800898F0 (-Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?Uncloak@CStartExperienceManager@@UEAAJXZ @ 0x180089EA0 (-Uncloak@CStartExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x1800A9CF0 (-Uncloak@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020CA0 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??$?0PEBGPEBG@Uncloak@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1@Z @ 0x180044664 (--$-0PEBGPEBG@Uncloak@SingleViewExperienceTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@$$QE.c)
 *     ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180044708 (--1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::Uncloak(HSTRING *this)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8[2]; // [rsp+20h] [rbp-168h] BYREF
  PCWSTR StringRawBuffer; // [rsp+28h] [rbp-160h] BYREF
  _BYTE v10[320]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  *(_QWORD *)v8 = WindowsGetStringRawBuffer(this[2], 0LL);
  StringRawBuffer = WindowsGetStringRawBuffer(this[1], 0LL);
  SingleViewExperienceTelemetry::Uncloak::Uncloak(v10, v2, &StringRawBuffer, v8);
  if ( *((_DWORD *)this + 10) != 2 )
  {
    v4 = -2147024809;
    v6 = 2147942487LL;
    v7 = 1072LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v6,
      v8[0]);
    goto LABEL_5;
  }
  v3 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 32LL))(this[11], this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = (unsigned int)v3;
    v7 = 1073LL;
    goto LABEL_8;
  }
  v4 = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)this[10] + 40LL))(this[10]);
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 40LL))(this[11], this);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v10);
    v4 = 0;
  }
LABEL_5:
  SingleViewExperienceTelemetry::Uncloak::~Uncloak((SingleViewExperienceTelemetry::Uncloak *)v10);
  return (unsigned int)v4;
}
