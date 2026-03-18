/*
 * XREFs of ?StartPixel@@YGPAEPAEKK@Z @ 0x1F1C2A
 * Callers:
 *     ?ReadScanLine@@YGKPAEKKKK@Z @ 0x1F1ABC (-ReadScanLine@@YGKPAEKKKK@Z.c)
 *     ?SkipScanLine@@YGKPAEKKKK@Z @ 0x1F1B73 (-SkipScanLine@@YGKPAEKKKK@Z.c)
 *     ?vTransparentCopy@@YGXPAUBLTINFO@@@Z @ 0x1F1C70 (-vTransparentCopy@@YGXPAUBLTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__userpurge StartPixel@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5)
{
  if ( a3 == (unsigned __int8 *)1 )
  {
    a1 >>= 3;
    goto LABEL_12;
  }
  if ( a3 == (unsigned __int8 *)2 )
  {
    a1 >>= 1;
    goto LABEL_12;
  }
  if ( a3 == (unsigned __int8 *)3 )
  {
LABEL_12:
    a2 += a1;
    return (unsigned __int8 *)a2;
  }
  if ( a3 == (unsigned __int8 *)4 )
  {
    a2 += 2 * a1;
  }
  else if ( a3 == (unsigned __int8 *)5 )
  {
    a2 += 3 * a1;
  }
  else if ( a3 == (unsigned __int8 *)6 )
  {
    a2 += 4 * a1;
  }
  return (unsigned __int8 *)a2;
}
