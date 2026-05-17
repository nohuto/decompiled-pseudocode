/*
 * XREFs of _TelemetryCoverageTableLocateInternal@8 @ 0x4B380A01
 * Callers:
 *     _EtwCheckCoverage@4 @ 0x4B380290 (_EtwCheckCoverage@4.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall TelemetryCoverageTableLocateInternal(unsigned int *a1, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  _DWORD *result; // eax

  v3 = a1[1];
  v4 = a2 & a1[2];
  v5 = (unsigned int)&a1[v3 + 13];
  if ( v4 >= v3 )
    v4 = v4 - v3 < v3 ? v4 - v3 : 0;
  v6 = (unsigned int)&a1[v4 + 13];
  result = (_DWORD *)v6;
  if ( v6 >= v5 )
  {
LABEL_7:
    for ( result = a1 + 13; (unsigned int)result < v6; ++result )
    {
      if ( !*result || *result == a2 )
        return result;
    }
    return 0;
  }
  else
  {
    while ( *result && *result != a2 )
    {
      if ( (unsigned int)++result >= v5 )
        goto LABEL_7;
    }
  }
  return result;
}
