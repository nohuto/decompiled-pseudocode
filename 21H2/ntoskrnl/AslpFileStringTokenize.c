/*
 * XREFs of AslpFileStringTokenize @ 0x1403CB368
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x140841B4C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x14084205C (AslpFileVerQueryBlock.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall AslpFileStringTokenize(_WORD *a1, __int64 a2, _WORD **a3)
{
  const WCHAR *v4; // r9
  WCHAR v5; // r8
  _WORD *v6; // r8
  _WORD *v7; // rdi
  const WCHAR *v8; // r11
  WCHAR v9; // dx
  WCHAR v10; // r9
  _WORD *v11; // r9

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
    if ( !asc_1400126A8[0] )
      break;
    v5 = asc_1400126A8[0];
    while ( v5 != *a1 )
    {
      v5 = *++v4;
      if ( !*v4 )
        goto LABEL_9;
    }
    ++a1;
  }
LABEL_9:
  v6 = a1;
  v7 = a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v8 = L"\\";
      v9 = asc_1400126A8[0];
      if ( asc_1400126A8[0] )
      {
        v10 = asc_1400126A8[0];
        do
        {
          v9 = v10;
          if ( v10 == *a1 )
            break;
          v9 = *++v8;
          v10 = *v8;
        }
        while ( *v8 );
      }
      v11 = a1 + 1;
      if ( v9 )
        break;
      ++a1;
      if ( !*v11 )
        goto LABEL_18;
    }
    *a1++ = 0;
  }
LABEL_18:
  *a3 = a1;
  if ( a1 == v7 )
    return 0LL;
  return v6;
}
