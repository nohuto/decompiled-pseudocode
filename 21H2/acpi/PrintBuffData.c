/*
 * XREFs of PrintBuffData @ 0x1C0066874
 * Callers:
 *     Buffer @ 0x1C000B340 (Buffer.c)
 *     PrintObject @ 0x1C0066934 (PrintObject.c)
 *     DumpObject @ 0x1C0067738 (DumpObject.c)
 * Callees:
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 */

ULONG __fastcall PrintBuffData(unsigned __int8 *a1, unsigned int a2)
{
  __int64 v3; // rbx
  int v4; // edi
  const char *v5; // rcx
  int v6; // eax

  v3 = a2;
  ConPrintf("{");
  v4 = 0;
  if ( (int)v3 > 0 )
  {
    do
    {
      v5 = "\n\t0x%02x";
      if ( v4 )
        v5 = ",0x%02x";
      ConPrintf(v5, *a1);
      v6 = v4 + 1;
      ++a1;
      v4 = 0;
      if ( v6 < 14 )
        v4 = v6;
      --v3;
    }
    while ( v3 );
  }
  return ConPrintf("}");
}
