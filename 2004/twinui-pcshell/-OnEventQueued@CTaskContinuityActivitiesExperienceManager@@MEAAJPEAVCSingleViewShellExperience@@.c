/*
 * XREFs of ?OnEventQueued@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801C01C0
 * Callers:
 *     <none>
 * Callees:
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x18002FD58 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Hide@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ @ 0x1801C0170 (-Hide@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ.c)
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::OnEventQueued(
        CTaskContinuityActivitiesExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9[2]; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v10; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)v9 = a3;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v10,
         (const WCHAR **)off_1804CFF08,
         (unsigned int)a3);
  if ( !Microsoft::WRL::Wrappers::operator==((HSTRING *)v9, (__int64)v5) )
    return 0LL;
  v6 = CTaskContinuityActivitiesExperienceManager::Hide((CTaskContinuityActivitiesExperienceManager *)((char *)this - 48));
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x79,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
