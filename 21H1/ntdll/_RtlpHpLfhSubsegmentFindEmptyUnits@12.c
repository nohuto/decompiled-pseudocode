/*
 * XREFs of _RtlpHpLfhSubsegmentFindEmptyUnits@12 @ 0x4B377324
 * Callers:
 *     _RtlpHpLfhSubsegmentCountEmptyUnits@4 @ 0x4B376F07 (_RtlpHpLfhSubsegmentCountEmptyUnits@4.c)
 *     _RtlpHpLfhSubsegmentDecommitPages@20 @ 0x4B37719A (_RtlpHpLfhSubsegmentDecommitPages@20.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpLfhSubsegmentFindEmptyUnits(int a1, int a2, _DWORD *a3)
{
  int v3; // edi
  unsigned int v4; // ecx
  _WORD *v5; // eax
  int v6; // esi
  _WORD *i; // edx

  v3 = a1 + *(unsigned __int16 *)(a1 + 30);
  v4 = v3 + 2 * *(unsigned __int8 *)(a1 + 29);
  v5 = (_WORD *)(v3 + 2 * a2);
  if ( *v5 )
  {
    if ( (unsigned int)v5 >= v4 )
      return -1;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
    }
    while ( (unsigned int)v5 < v4 );
    if ( (unsigned int)v5 >= v4 )
      return -1;
    a2 = ((int)v5 - v3) >> 1;
  }
  else
  {
    do
      --v5;
    while ( !*v5 );
    ++v5;
  }
  for ( i = (_WORD *)(v3 + 2 * (a2 + 1)); !*i && (unsigned int)i < v4; ++i )
    ;
  v6 = ((int)v5 - v3) >> 1;
  *a3 = i - v5;
  return v6;
}
