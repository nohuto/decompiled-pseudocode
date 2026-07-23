/*
 * XREFs of AslpFileStringTokenize @ 0x1403BD8D0
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1407B2B5C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x1407B3130 (AslpFileVerQueryBlock.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall AslpFileStringTokenize(_WORD *a1, __int64 a2, _WORD **a3)
{
  const WCHAR *v4; // r10
  WCHAR v5; // r8
  __int16 v6; // r9
  _WORD *v7; // r8
  _WORD *v8; // rdi
  const WCHAR *v9; // r10
  WCHAR v10; // dx
  WCHAR v11; // r9
  _WORD *v12; // r9

  if ( !a3 )
    return 0LL;
  if ( !a1 )
  {
    a1 = *a3;
    if ( !*a3 )
      return 0LL;
  }
  while ( *a1 )
  {
    v4 = L"\\";
    if ( !asc_14000DE60[0] )
      break;
    v5 = asc_14000DE60[0];
    do
    {
      v6 = v5;
      if ( v5 == *a1 )
        break;
      v5 = *++v4;
      v6 = *v4;
    }
    while ( *v4 );
    if ( !v6 )
      break;
    ++a1;
  }
  v7 = a1;
  v8 = a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v9 = L"\\";
      v10 = asc_14000DE60[0];
      if ( asc_14000DE60[0] )
      {
        v11 = asc_14000DE60[0];
        do
        {
          v10 = v11;
          if ( v11 == *a1 )
            break;
          v10 = *++v9;
          v11 = *v9;
        }
        while ( *v9 );
      }
      v12 = a1 + 1;
      if ( v10 )
        break;
      ++a1;
      if ( !*v12 )
        goto LABEL_19;
    }
    *a1++ = 0;
  }
LABEL_19:
  *a3 = a1;
  if ( a1 == v8 )
    return 0LL;
  return v7;
}
