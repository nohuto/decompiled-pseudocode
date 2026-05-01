/*
 * XREFs of ?value@?$optional@UAppTitlebarConfiguration@@@std@@QEGAAAEAUAppTitlebarConfiguration@@XZ @ 0x180159D80
 * Callers:
 *     _lambda_34e39aef9b6af58545d6992c86a4e9be_::operator() @ 0x1800591F0 (_lambda_34e39aef9b6af58545d6992c86a4e9be_--operator().c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180156D90 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18008DA74 (_CxxThrowException_0.c)
 */

__int64 __fastcall std::optional<AppTitlebarConfiguration>::value(__int64 a1)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 2) )
  {
    pExceptionObject = &std::bad_optional_access::`vftable';
    v3 = 0LL;
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  return a1;
}
