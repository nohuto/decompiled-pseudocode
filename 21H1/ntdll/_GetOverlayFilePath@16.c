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

int __fastcall GetOverlayFilePath(int a1, void *a2, unsigned int *a3, wchar_t *a4)
{
  int result; // eax
  char *v6; // ebx
  int v7; // [esp+10h] [ebp-2D8h] BYREF
  char *v8; // [esp+14h] [ebp-2D4h]
  int v9; // [esp+18h] [ebp-2D0h]
  wchar_t *Source; // [esp+1Ch] [ebp-2CCh] BYREF
  char v11; // [esp+20h] [ebp-2C8h] BYREF

  if ( !a1 || !a2 || !a3 )
    return -1073741811;
  v7 = 46006272;
  v8 = &v11;
  result = RtlAppendUnicodeToString((int)&v7, a2);
  if ( result >= 0 )
  {
    LdrStandardizeSystemPath(&v7);
    v6 = v8;
    v9 = 0;
    Source = 0;
    result = IsOverlaySupportedPath(&Source);
    if ( result >= 0 )
      return BuildOverlayFilePath(a1, (const wchar_t *)&v6[2 * v9], Source, a3, a4);
  }
  return result;
}
