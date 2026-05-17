/*
 * XREFs of _TppAreNodeWorkersSteadyState@4 @ 0x4B3850CA
 * Callers:
 *     _TppWorkerFindTask@12 @ 0x4B2B6930 (_TppWorkerFindTask@12.c)
 * Callees:
 *     <none>
 */

int __thiscall TppAreNodeWorkersSteadyState(_DWORD *this)
{
  int v1; // edi
  int result; // eax
  int v3; // esi
  int v4; // edx
  int *v5; // ecx

  v1 = TppNumberNodes;
  result = 0;
  v3 = 0x7FFFFFFF;
  v4 = 0;
  if ( TppNumberNodes )
  {
    v5 = (int *)this[7];
    do
    {
      if ( v4 < *v5 )
        v4 = *v5;
      if ( v3 > *v5 )
        v3 = *v5;
      ++v5;
      --v1;
    }
    while ( v1 );
  }
  if ( v3 > 0 && v4 - v3 < 4 )
    return 1;
  return result;
}
