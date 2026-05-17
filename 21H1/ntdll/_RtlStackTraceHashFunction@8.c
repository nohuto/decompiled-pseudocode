/*
 * XREFs of _RtlStackTraceHashFunction@8 @ 0x4B36A110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlStackTraceHashFunction(int a1, int a2)
{
  int v2; // esi
  unsigned int i; // eax
  int v4; // edx
  int v5; // ecx

  v2 = 0;
  for ( i = 0; i < 2 * a1; v2 += v5 ^ v4 )
  {
    v4 = *(unsigned __int16 *)(a2 + 2 * i + 2);
    v5 = *(unsigned __int16 *)(a2 + 2 * i);
    i += 2;
  }
  return v2;
}
