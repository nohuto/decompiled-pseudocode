/*
 * XREFs of _RtlGetLengthWithoutTrailingPathSeperators@12 @ 0x4B32D310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlGetLengthWithoutTrailingPathSeperators(int a1, unsigned __int16 *a2, int *a3)
{
  int v3; // esi
  int v4; // ecx
  unsigned __int16 *v5; // eax
  int v6; // edi

  v3 = 0;
  if ( a3 )
    *a3 = 0;
  if ( !a2 || !a3 || a1 )
    return -1073741811;
  v4 = *a2 >> 1;
  if ( v4 )
  {
    v5 = (unsigned __int16 *)(*((_DWORD *)a2 + 1) + 2 * v4 - 2);
    do
    {
      v6 = *v5;
      if ( v6 != 92 && v6 != 47 )
        break;
      --v5;
      --v4;
    }
    while ( v4 );
  }
  *a3 = v4;
  return v3;
}
