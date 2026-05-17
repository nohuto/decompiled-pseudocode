/*
 * XREFs of _LdrpConstructModernAppKeyName@8 @ 0x4B331983
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _RtlQueryPackageIdentityEx@28 @ 0x4B2E4E20 (_RtlQueryPackageIdentityEx@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlStringCbPrintfExW @ 0x4B32DF38 (_RtlStringCbPrintfExW.c)
 */

int __thiscall LdrpConstructModernAppKeyName(wchar_t *Buffer)
{
  int result; // eax
  int v3; // [esp+10h] [ebp-1A0h] BYREF
  int v4; // [esp+18h] [ebp-198h] BYREF
  int v5; // [esp+1Ch] [ebp-194h] BYREF
  char Args[256]; // [esp+20h] [ebp-190h] BYREF
  _BYTE v7[140]; // [esp+120h] [ebp-90h] BYREF

  v4 = 256;
  v5 = 132;
  memset(Args, 0, sizeof(Args));
  memset(v7, 0, 0x84u);
  result = RtlQueryPackageIdentityEx(-4, (int)Args, (int)&v4, (int)v7, (int)&v5, 0, &v3);
  if ( result >= 0 )
    return RtlStringCbPrintfExW(Buffer, 0x184u, 0, 0, 0, (wchar_t *)L"%s!%s", Args, v7);
  return result;
}
