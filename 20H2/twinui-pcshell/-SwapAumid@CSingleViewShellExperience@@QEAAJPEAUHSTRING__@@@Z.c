/*
 * XREFs of ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180475B44
 * Callers:
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801E7830 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180016310 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x1804749E4 (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::SwapAumid(CSingleViewShellExperience *this, HSTRING a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 56LL))(
         *((_QWORD *)this + 13),
         *((_QWORD *)this + 14));
  if ( v3 < 0 )
  {
    v4 = 193LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 1, &v7);
  if ( v3 < 0 )
  {
    v4 = 194LL;
    goto LABEL_3;
  }
  v3 = CSingleViewShellExperience::RegisterAumid(
         this,
         *((HSTRING *)this + 1),
         (struct EventRegistrationToken *)this + 14);
  if ( v3 < 0 )
  {
    v4 = 195LL;
    goto LABEL_3;
  }
  return 0LL;
}
