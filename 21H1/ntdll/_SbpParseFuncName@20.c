/*
 * XREFs of _SbpParseFuncName@20 @ 0x4B385FBD
 * Callers:
 *     _SbpResolveBasedOnName@4 @ 0x4B386048 (_SbpResolveBasedOnName@4.c)
 * Callees:
 *     _StringCchCopyW@12 @ 0x4B33B6B7 (_StringCchCopyW@12.c)
 *     _StringCchCopyNW@16 @ 0x4B38628E (_StringCchCopyNW@16.c)
 */

int __fastcall SbpParseFuncName(wchar_t *a1, _WORD *a2, int a3, _WORD *a4, int a5)
{
  wchar_t *v5; // esi
  wchar_t v7; // dx
  wchar_t v8; // cx
  int result; // eax
  const wchar_t *v10; // [esp+0h] [ebp-10h]
  size_t v11; // [esp+0h] [ebp-10h]
  size_t v12; // [esp+4h] [ebp-Ch]
  const wchar_t *v13; // [esp+4h] [ebp-Ch]

  v5 = a1;
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
  if ( StringCchCopyNW(a1, v5 - a1, v10, v12) >= 0 && StringCchCopyW(v5 + 1, v11, v13) >= 0 )
    return 1;
LABEL_9:
  result = 0;
  if ( a2 )
    *a2 = 0;
  if ( a4 )
    *a4 = 0;
  return result;
}
