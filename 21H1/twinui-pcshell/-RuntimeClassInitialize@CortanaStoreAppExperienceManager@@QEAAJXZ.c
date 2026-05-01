/*
 * XREFs of ?RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ @ 0x1801D117C
 * Callers:
 *     ??$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCortanaStoreAppExperienceManager@@@Z @ 0x1801CE724 (--$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18012AF84 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801C3658 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801C5870 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::RuntimeClassInitialize(CortanaStoreAppExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v5 = GUID_749f2714_937d_445e_9d22_666f49e7ff32;
  v6 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (CortanaStoreAppExperienceManager *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  if ( v2 < 0 )
  {
    v3 = 209LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 34);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 34);
  if ( v2 < 0 )
  {
    v3 = 210LL;
    goto LABEL_3;
  }
  return 0LL;
}
