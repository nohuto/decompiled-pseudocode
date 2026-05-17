/*
 * XREFs of GetOverlayFilePath @ 0x18004CFBC
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180046810 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     IsOverlaySupportedPath @ 0x18004D098 (IsOverlaySupportedPath.c)
 *     BuildOverlayFilePath @ 0x18004D138 (BuildOverlayFilePath.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

__int64 __fastcall GetOverlayFilePath(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  wchar_t *v8; // rbx
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t *String1; // [rsp+48h] [rbp-B8h]
  char v11; // [rsp+50h] [rbp-B0h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v9 = 46006272;
  String1 = (wchar_t *)&v11;
  result = RtlAppendUnicodeToString((unsigned __int16 *)&v9, a2);
  if ( (int)result >= 0 )
  {
    v8 = String1;
    result = IsOverlaySupportedPath(String1);
    if ( (int)result >= 0 )
      return BuildOverlayFilePath(a1, v8, 0LL, a3, a4);
  }
  return result;
}
