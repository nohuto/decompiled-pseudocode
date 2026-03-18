/*
 * XREFs of ?vHorizontalLine24@@YGXPAEJJK@Z @ 0x2401EB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vHorizontalLine24(unsigned __int8 *a1, int a2, int a3, unsigned int a4)
{
  unsigned __int8 v4; // bl
  unsigned __int8 *v5; // edx
  unsigned __int8 *i; // ecx

  v4 = a4;
  v5 = &a1[3 * a3];
  for ( i = &a1[3 * a2]; i < v5; i += 3 )
  {
    *i = v4;
    i[2] = BYTE2(a4);
    v4 = a4;
    i[1] = BYTE1(a4);
  }
}
