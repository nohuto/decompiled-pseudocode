/*
 * XREFs of _SbpParseFuncName@20 @ 0x4B385FBD
 * Callers:
 *     _SbpResolveBasedOnName@4 @ 0x4B386048 (_SbpResolveBasedOnName@4.c)
 * Callees:
 *     _StringCchCopyW@12 @ 0x4B33B6B7 (_StringCchCopyW@12.c)
 *     _StringCchCopyNW@16 @ 0x4B38628E (_StringCchCopyNW@16.c)
 */

int __fastcall SbpParseFuncName(_WORD *a1, _WORD *a2, int a3, _WORD *a4, int a5)
{
  _WORD *v5; // esi
  __int16 v7; // dx
  __int16 v8; // cx
  int result; // eax
  size_t v10; // [esp-4h] [ebp-14h]
  size_t v11; // [esp+0h] [ebp-10h]
  const wchar_t *v12; // [esp+4h] [ebp-Ch]
  size_t v13; // [esp+8h] [ebp-8h]
  const wchar_t *v14; // [esp+8h] [ebp-8h]

  v5 = a1;
  HIDWORD(v13) = a1;
  v7 = *a1;
  if ( *a1 )
  {
    v8 = *a1;
    while ( v8 != 33 )
    {
      v8 = *++v5;
      v7 = *v5;
      if ( !*v5 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( v7 != 33 )
      goto LABEL_9;
  }
  LODWORD(v10) = ((int)v5 - HIDWORD(v13)) >> 1;
  if ( StringCchCopyNW((STRSAFE_LPWSTR)HIDWORD(v13), v10, v12, v13) >= 0 && StringCchCopyW(v5 + 1, v11, v14) >= 0 )
    return 1;
LABEL_9:
  result = 0;
  if ( a2 )
    *a2 = 0;
  if ( a4 )
    *a4 = 0;
  return result;
}
