/*
 * XREFs of ?vRop2FunctionE@@YAXPEAK00K@Z @ 0x1C00FD350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vRop2FunctionE(char *a1, char *a2, char *a3, int a4)
{
  signed __int64 v4; // r8
  signed __int64 v5; // r10

  if ( a4 )
  {
    v4 = a3 - a2;
    v5 = a1 - a2;
    do
    {
      *(_DWORD *)&a2[v5] = *(_DWORD *)a2 | *(_DWORD *)&a2[v4];
      a2 += 4;
      --a4;
    }
    while ( a4 );
  }
}
