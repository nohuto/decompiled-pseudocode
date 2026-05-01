/*
 * XREFs of ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1800B6238
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800B637C (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1800B5ECC (--$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV-$unique_ptr@U_TOKEN_USER@@U-$de.c)
 *     ?reset@?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKEN_USER@@@Z @ 0x1800B6B60 (-reset@-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKE.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019BD18 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
LPWSTR *__fastcall KioskPositioner::GetUserSidString(__int64 a1, LPWSTR *a2, __int64 a3)
{
  int token_information; // eax
  wil::details::in1diag3 *v5; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSID *v9; // [rsp+40h] [rbp+8h] BYREF
  LPWSTR *v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v9 = 0LL;
  token_information = wil::get_token_information_nothrow<_TOKEN_USER,0>((__int64)&v9, a3);
  v5 = retaddr;
  if ( token_information < 0 )
  {
LABEL_5:
    wil::details::in1diag3::Throw_Hr(
      v5,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)token_information);
    __debugbreak();
  }
  *a2 = 0LL;
  if ( !ConvertSidToStringSidW(*v9, a2) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x47B,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      v6);
    goto LABEL_5;
  }
  wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(&v9, 0LL);
  return a2;
}
