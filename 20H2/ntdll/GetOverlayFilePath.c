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

NTSTATUS __fastcall GetOverlayFilePath(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  wchar_t *Buffer; // rbx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  char v10; // [rsp+50h] [rbp-B0h] BYREF

  if ( !a1 || !a2 || !a3 )
    return -1073741811;
  *(_DWORD *)&Destination.Length = 46006272;
  Destination.Buffer = (wchar_t *)&v10;
  result = RtlAppendUnicodeToString(&Destination, a2);
  if ( result >= 0 )
  {
    Buffer = Destination.Buffer;
    result = IsOverlaySupportedPath(Destination.Buffer);
    if ( result >= 0 )
      return BuildOverlayFilePath(a1, Buffer, 0LL, a3, a4);
  }
  return result;
}
