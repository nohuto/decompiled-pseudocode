/*
 * XREFs of ?IsValidAXESLISTW@@YG_NPBXKJ@Z @ 0x20A1C9
 * Callers:
 *     ?IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z @ 0x20A333 (-IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __userpurge IsValidAXESLISTW@<al>(unsigned int a1@<edx>, int a2@<ecx>, char *a3, unsigned int a4, int a5)
{
  unsigned int v6; // edx
  unsigned int v7; // eax

  if ( !a3 )
    return 1;
  if ( (int)a3 <= 0 )
    return 0;
  if ( (unsigned int)a3 >= a1 )
    return 0;
  v6 = a1 - (_DWORD)a3;
  if ( &a3[a2 + 8] > &a3[a2 + v6] )
    return 0;
  v7 = *(_DWORD *)&a3[a2 + 4];
  return v7 <= 0x10 && 40 * v7 + 8 < v6;
}
