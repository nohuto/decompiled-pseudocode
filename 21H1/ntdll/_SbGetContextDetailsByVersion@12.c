/*
 * XREFs of _SbGetContextDetailsByVersion@12 @ 0x4B2B820A
 * Callers:
 *     _SbpDetermineDllContext@8 @ 0x4B2B9AA4 (_SbpDetermineDllContext@8.c)
 *     _SbpUpdateCacheWithCurrentImpl@8 @ 0x4B3860EA (_SbpUpdateCacheWithCurrentImpl@8.c)
 * Callees:
 *     <none>
 */

int __fastcall SbGetContextDetailsByVersion(unsigned __int16 a1, unsigned __int16 a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // edi
  int v5; // ebx
  unsigned int v6; // eax
  unsigned __int16 v7; // cx
  bool v8; // cf
  bool v9; // zf

  v3 = 1;
  v4 = -1;
  if ( !a3 )
    return 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = word_4B2810D4[v6];
    v8 = a1 < v7;
    v9 = a1 == v7;
    if ( a1 <= v7 )
    {
      if ( a1 != v7 )
        goto LABEL_10;
      if ( a2 < (unsigned __int16)word_4B2810D6[v6] )
        break;
    }
    v4 = v5;
LABEL_7:
    v6 += 14;
    ++v5;
    if ( v6 >= 70 )
      goto LABEL_11;
  }
  v8 = a1 < v7;
  v9 = a1 == v7;
LABEL_10:
  if ( !v8 && (!v9 || a2 >= (unsigned __int16)word_4B2810D6[v6]) )
    goto LABEL_7;
LABEL_11:
  if ( v4 == -1 )
    *a3 = SbSupportedOsList;
  else
    *a3 = &SbSupportedOsList[7 * v4];
  return v3;
}
