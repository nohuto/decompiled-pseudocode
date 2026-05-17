/*
 * XREFs of __tlgCreate1Sz_wchar_t@8 @ 0x4B330F0A
 * Callers:
 *     _LdrpLogRelativePathWithAlteredSearchError@4 @ 0x4B2A81DB (_LdrpLogRelativePathWithAlteredSearchError@4.c)
 *     _LdrpResReportResourceAccessInternal@16 @ 0x4B2B0BD2 (_LdrpResReportResourceAccessInternal@16.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall _tlgCreate1Sz_wchar_t(int **a1, int *a2)
{
  int *v2; // esi
  __int16 result; // ax
  int v4; // esi

  if ( a2 )
  {
    v2 = a2;
    do
    {
      result = *(_WORD *)v2;
      v2 = (int *)((char *)v2 + 2);
    }
    while ( result );
    v4 = 2 * (((char *)v2 - ((char *)a2 + 2)) >> 1) + 2;
  }
  else
  {
    a2 = &dword_4B285DEC;
    v4 = 2;
  }
  a1[2] = (int *)v4;
  a1[1] = 0;
  a1[3] = 0;
  *a1 = a2;
  return result;
}
