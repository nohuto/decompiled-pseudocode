/*
 * XREFs of _RtlHashUnicodeString@16 @ 0x4B2A7970
 * Callers:
 *     _RtlpFindUnicodeStringInSection@32 @ 0x4B2CA720 (_RtlpFindUnicodeStringInSection@32.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

int __stdcall RtlHashUnicodeString(unsigned __int16 *a1, char a2, unsigned int a3, int *a4)
{
  int v4; // esi
  int v5; // ebx
  int *v6; // edx
  unsigned __int16 *v7; // ecx
  int v8; // edi
  unsigned __int16 *v9; // esi
  int v10; // ecx
  int v12; // eax

  v4 = 0;
  v5 = 0;
  if ( !a1 )
    return -1073741811;
  v6 = a4;
  if ( !a4 )
    return -1073741811;
  v7 = (unsigned __int16 *)*((_DWORD *)a1 + 1);
  *a4 = 0;
  v8 = *a1 >> 1;
  if ( a3 > 1 )
    return -1073741811;
  if ( v8 )
  {
    if ( a2 )
    {
      v9 = v7;
      do
      {
        v10 = *v9++;
        v5 = (unsigned __int16)NLS_UPCASE(v10) + 65599 * v5;
        --v8;
      }
      while ( v8 );
      v6 = a4;
      v4 = 0;
    }
    else
    {
      do
      {
        v12 = *v7++;
        v5 = v12 + 65599 * v5;
        --v8;
      }
      while ( v8 );
    }
  }
  *v6 = v5;
  return v4;
}
