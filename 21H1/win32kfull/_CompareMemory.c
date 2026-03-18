/*
 * XREFs of _CompareMemory @ 0x1C60B6
 * Callers:
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

int __fastcall CompareMemory(int a1, char *a2, int a3)
{
  char *v3; // esi
  int v5; // ecx
  char v6; // al
  char *v7; // edx

  v3 = a2;
  v5 = a1 - (_DWORD)a2;
  while ( 1 )
  {
    v6 = *v3;
    v7 = &v3[v5];
    --a3;
    ++v3;
    if ( *v7 != v6 )
      break;
    if ( !a3 )
      return 1;
  }
  return 0;
}
