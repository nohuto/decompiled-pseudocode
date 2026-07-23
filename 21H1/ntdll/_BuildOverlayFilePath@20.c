/*
 * XREFs of _BuildOverlayFilePath@20 @ 0x4B2B8CDD
 * Callers:
 *     _GetOverlayFilePath@16 @ 0x4B2B8D7B (_GetOverlayFilePath@16.c)
 * Callees:
 *     _GetOverlayRootFolder@12 @ 0x4B2D1DAC (_GetOverlayRootFolder@12.c)
 *     _wcscat_s @ 0x4B300500 (_wcscat_s.c)
 */

int __fastcall BuildOverlayFilePath(
        int a1,
        _WORD *a2,
        const unsigned __int16 *a3,
        unsigned int *a4,
        wchar_t *Destination)
{
  _WORD *v5; // esi
  int OverlayRootFolder; // eax
  _WORD *v7; // ecx
  int v8; // edx
  unsigned int v10; // edi
  rsize_t v12; // [esp-14h] [ebp-2Ch]
  const wchar_t *v13; // [esp-Ch] [ebp-24h]
  rsize_t v14; // [esp-8h] [ebp-20h]
  const wchar_t *v15; // [esp+0h] [ebp-18h]
  unsigned int v17; // [esp+14h] [ebp-4h]

  v5 = a2;
  if ( *a2 != 92 || *a3 != 92 )
    return -1073741637;
  v17 = *a4;
  OverlayRootFolder = GetOverlayRootFolder(Destination);
  v7 = v5 + 1;
  v8 = OverlayRootFolder;
  while ( *v5++ )
    ;
  v10 = v17 + 2 * (v5 - v7 + wcslen(a3));
  if ( v8 >= 0 && v10 > *a4 )
    v8 = -1073741789;
  if ( v8 == -1073741789 )
    *a4 = v10;
  if ( v8 < 0 )
    return v8;
  HIDWORD(v14) = a3;
  LODWORD(v14) = v10 >> 1;
  wcscat_s(Destination, v14, v15);
  HIDWORD(v12) = a2;
  LODWORD(v12) = v10 >> 1;
  wcscat_s(Destination, v12, v13);
  *a4 = v10;
  return 0;
}
