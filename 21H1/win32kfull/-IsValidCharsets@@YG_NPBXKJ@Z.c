/*
 * XREFs of ?IsValidCharsets@@YG_NPBXKJ@Z @ 0x20A20E
 * Callers:
 *     ?IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z @ 0x20A333 (-IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z.c)
 * Callees:
 *     <none>
 */

char __userpurge IsValidCharsets@<al>(unsigned int a1@<edx>, int a2@<ecx>, char *a3, unsigned int a4, int a5)
{
  char *v6; // ecx
  int v7; // edx
  char *v8; // esi

  if ( !a3 )
    return 1;
  if ( (int)a3 >= 0 && (unsigned int)a3 < a1 )
  {
    v6 = &a3[a2];
    v7 = 0;
    v8 = (char *)(a3 - v6);
    while ( &v6[(int)v8] < (char *)a1 )
    {
      if ( *v6 != 1 )
      {
        ++v7;
        ++v6;
        if ( v7 < 16 )
          continue;
      }
      return 1;
    }
  }
  return 0;
}
