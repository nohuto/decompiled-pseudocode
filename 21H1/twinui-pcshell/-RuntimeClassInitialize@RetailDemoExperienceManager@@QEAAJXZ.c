/*
 * XREFs of ?RuntimeClassInitialize@RetailDemoExperienceManager@@QEAAJXZ @ 0x1801CA29C
 * Callers:
 *     ??$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetailDemoExperienceManager@@@Z @ 0x1801C85CC (--$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetai.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18012AF84 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801357D0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall RetailDemoExperienceManager::RuntimeClassInitialize(void **this)
{
  int v2; // eax
  HANDLE EventW; // rax
  _OWORD v5[2]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5[0] = GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f;
  v5[1] = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveShellComponent *)(this + 6),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      599LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 57,
    EventW);
  return 0LL;
}
