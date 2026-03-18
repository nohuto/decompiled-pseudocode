/*
 * XREFs of _FONTOBJ_pwszFontFilePaths@8 @ 0x1F367D
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 */

LPWSTR __stdcall FONTOBJ_pwszFontFilePaths(FONTOBJ *pfo, ULONG *pcwc)
{
  ULONG *v2; // edx
  WCHAR *v3; // esi
  int *pvConsumer; // eax
  int v5; // ecx

  v2 = pcwc;
  v3 = 0;
  *pcwc = 0;
  if ( pfo )
  {
    pvConsumer = (int *)pfo[1].pvConsumer;
    v5 = *pvConsumer;
    if ( (*(_BYTE *)(*pvConsumer + 32) & 0x30) == 0 )
    {
      v3 = *(WCHAR **)(v5 + 12);
      *v2 = *(_DWORD *)(v5 + 16);
    }
  }
  pcwc = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&pcwc);
  return v3;
}
