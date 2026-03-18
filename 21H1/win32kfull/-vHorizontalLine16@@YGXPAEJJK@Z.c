/*
 * XREFs of ?vHorizontalLine16@@YGXPAEJJK@Z @ 0x2400D2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vHorizontalLine16(unsigned __int8 *a1, int a2, int a3, ULONG Pattern)
{
  unsigned __int8 *v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // edi

  v4 = &a1[2 * a2];
  v5 = a3 - a2;
  if ( a3 != a2 )
  {
    if ( (a2 & 1) != 0 )
    {
      *(_WORD *)v4 = Pattern;
      v4 += 2;
      --v5;
    }
    v6 = v5 >> 1;
    if ( v5 >> 1 )
      RtlFillMemoryUlong(v4, 4 * v6, Pattern);
    if ( (v5 & 1) != 0 )
      *(_WORD *)&v4[4 * v6] = Pattern;
  }
}
