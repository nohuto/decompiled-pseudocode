/*
 * XREFs of _IsAnyCharsetDbcs@4 @ 0xDCCBA
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDC780 (-bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall IsAnyCharsetDbcs(int a1)
{
  char v1; // al
  int v2; // eax
  char *v3; // ecx
  char *v4; // edx
  char v5; // al

  v1 = *(_BYTE *)(a1 + 44);
  if ( v1 == (char)0x80 || v1 == -127 || v1 == -120 || v1 == -122 )
    return 1;
  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 )
  {
    v3 = (char *)(v2 + a1);
    v4 = v3 + 16;
    while ( v3 < v4 )
    {
      v5 = *v3;
      if ( *v3 == 1 )
        break;
      if ( v5 == (char)0x80 || v5 == -122 || v5 == -120 || v5 == -127 )
        return 1;
      ++v3;
    }
  }
  return 0;
}
