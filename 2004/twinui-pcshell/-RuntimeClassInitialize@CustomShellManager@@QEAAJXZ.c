/*
 * XREFs of ?RuntimeClassInitialize@CustomShellManager@@QEAAJXZ @ 0x18019BAD8
 * Callers:
 *     ??$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019B2DC (--$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F674 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall CustomShellManager::RuntimeClassInitialize(CustomShellManager *this)
{
  int v1; // eax
  const char *v2; // r9
  unsigned int v3; // ebx
  __int64 result; // rax
  _OWORD v5[2]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v5[0] = IID_ICustomShellManager;
    v5[1] = 0LL;
    v1 = CImmersiveShellComponent::RegisterServiceInformation(
           (CustomShellManager *)((char *)this + 40),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
           1LL);
    v3 = v1;
    if ( v1 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
        (const char *)(unsigned int)v1);
      result = v3;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x41,
                           (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
                           v2);
  }
  return result;
}
