/*
 * XREFs of _BuildOverlayFilePath@20 @ 0x4B2B8CDD
 * Callers:
 *     _GetOverlayFilePath@16 @ 0x4B2B8D7B (_GetOverlayFilePath@16.c)
 * Callees:
 *     _GetOverlayRootFolder@12 @ 0x4B2D1DAC (_GetOverlayRootFolder@12.c)
 *     _wcscat_s @ 0x4B300500 (_wcscat_s.c)
 */

int __fastcall BuildOverlayFilePath(int a1, const wchar_t *a2, wchar_t *Source, unsigned int *a4, wchar_t *Destination)
{
  const wchar_t *v5; // esi
  int OverlayRootFolder; // eax
  _WORD *v7; // ecx
  int v8; // edx
  unsigned int v10; // edi
  unsigned int v13; // [esp+14h] [ebp-4h]

  v5 = a2;
  if ( *a2 != 92 || *Source != 92 )
    return -1073741637;
  v13 = *a4;
  OverlayRootFolder = GetOverlayRootFolder(Destination);
  v7 = v5 + 1;
  v8 = OverlayRootFolder;
  while ( *v5++ )
    ;
  v10 = v13 + 2 * (v5 - v7 + wcslen(Source));
  if ( v8 >= 0 && v10 > *a4 )
    v8 = -1073741789;
  if ( v8 == -1073741789 )
    *a4 = v10;
  if ( v8 < 0 )
    return v8;
  wcscat_s(Destination, v10 >> 1, Source);
  wcscat_s(Destination, v10 >> 1, a2);
  *a4 = v10;
  return 0;
}
