/*
 * XREFs of ?IsValidString@@YG_NPBXKJ@Z @ 0x20A423
 * Callers:
 *     ?IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z @ 0x20A333 (-IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z.c)
 * Callees:
 *     <none>
 */

char __userpurge IsValidString@<al>(unsigned int a1@<edx>, int a2@<ecx>, char *a3, unsigned int a4, int a5)
{
  char *v5; // eax
  unsigned int v6; // edx

  v5 = a3;
  if ( (int)a3 >= 0 && (unsigned int)a3 < a1 )
  {
    v6 = a1 - 1;
    while ( (unsigned int)v5 < v6 )
    {
      if ( !*(_WORD *)&v5[a2] )
        return 1;
      v5 += 2;
    }
  }
  return 0;
}
