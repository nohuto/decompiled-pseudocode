/*
 * XREFs of _bCvtVts_FlToFl@16 @ 0xEECF0
 * Callers:
 *     <none>
 * Callees:
 *     _addff@0 @ 0xEEFF5 (_addff@0.c)
 *     _mulff@0 @ 0xEF0E3 (_mulff@0.c)
 */

int __stdcall bCvtVts_FlToFl(int a1, int a2, _DWORD *a3, int a4)
{
  int v5; // ecx
  int v6; // ecx

  do
  {
    mulff();
    mulff();
    *a3 = addff();
    a3[1] = v5;
    mulff();
    mulff();
    a3[2] = addff();
    a3[3] = v6;
    a2 += 16;
    a3 += 4;
    --a4;
  }
  while ( a4 );
  return 1;
}
