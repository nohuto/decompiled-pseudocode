/*
 * XREFs of ?ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z @ 0x10003D78
 * Callers:
 *     ?ReportFailure_Hr@details@wil@@YGXPAXIPBD110W4FailureType@2@J@Z @ 0x10003E4A (-ReportFailure_Hr@details@wil@@YGXPAXIPBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x10003AA3 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z.c)
 *     ?ThrowResultException@wil@@YGXABUFailureInfo@1@@Z @ 0x10003CC2 (-ThrowResultException@wil@@YGXABUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z @ 0x10003D06 (-WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z.c)
 *     @__security_check_cookie@4 @ 0x10004280 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 *     __chkstk @ 0x10004CD0 (__chkstk.c)
 */

void __fastcall wil::details::ReportFailure(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        wil::details *a8,
        int a9,
        int a10)
{
  bool v10; // bl
  wil::details *v11; // [esp+0h] [ebp-1470h]
  const struct wil::FailureInfo *v12; // [esp+4h] [ebp-146Ch]
  _BYTE v13[80]; // [esp+10h] [ebp-1460h] BYREF
  int v14; // [esp+60h] [ebp-1410h]
  int v15; // [esp+64h] [ebp-140Ch]
  WCHAR v16[2048]; // [esp+68h] [ebp-1408h] BYREF
  _BYTE v17[1028]; // [esp+1068h] [ebp-408h] BYREF

  v14 = a5;
  v15 = a6;
  v10 = !a7 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, v14, v15, a7, a8, 0, a1, v16, a1, v17, a1, (wil *)v13);
  if ( a7 == 3 )
LABEL_11:
    wil::details::WilFailFast((int)v13, v11, v12);
  if ( !a7 )
  {
    if ( v10 )
      g_pfnThrowPlatformException(g_pfnThrowPlatformException, v13, v16);
    wil::ThrowResultException((const struct wil::FailureInfo *)v13);
    goto LABEL_11;
  }
}
