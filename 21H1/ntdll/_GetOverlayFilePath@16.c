/*
 * XREFs of _GetOverlayFilePath@16 @ 0x4B2B8D7B
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _RtlpGetMUIRedirectedFilePath@32 @ 0x4B35421A (_RtlpGetMUIRedirectedFilePath@32.c)
 * Callees:
 *     _BuildOverlayFilePath@20 @ 0x4B2B8CDD (_BuildOverlayFilePath@20.c)
 *     _IsOverlaySupportedPath@12 @ 0x4B2B8E4D (_IsOverlaySupportedPath@12.c)
 *     _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0 (_LdrStandardizeSystemPath@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall GetOverlayFilePath(int a1, const WCHAR *a2, unsigned int *a3, wchar_t *a4)
{
  NTSTATUS result; // eax
  wchar_t *Buffer; // ebx
  _UNICODE_STRING Destination; // [esp+10h] [ebp-2D8h] BYREF
  int v8; // [esp+18h] [ebp-2D0h]
  const unsigned __int16 *v9; // [esp+1Ch] [ebp-2CCh] BYREF
  char v10; // [esp+20h] [ebp-2C8h] BYREF

  if ( !a1 || !a2 || !a3 )
    return -1073741811;
  *(_DWORD *)&Destination.Length = 46006272;
  Destination.Buffer = (wchar_t *)&v10;
  result = RtlAppendUnicodeToString(&Destination, a2);
  if ( result >= 0 )
  {
    LdrStandardizeSystemPath(&Destination);
    Buffer = Destination.Buffer;
    v8 = 0;
    v9 = 0;
    result = IsOverlaySupportedPath(&v9);
    if ( result >= 0 )
      return BuildOverlayFilePath(a1, &Buffer[v8], v9, a3, a4);
  }
  return result;
}
