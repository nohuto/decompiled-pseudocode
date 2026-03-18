/*
 * XREFs of SepSddlParseWideStringUlong @ 0x1C00BE95C
 * Callers:
 *     SepSddlGetAclForString @ 0x1C00BE464 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlParseWideStringUlong(wchar_t *Buffer, wchar_t **FinalPosition, unsigned int *Value)
{
  wchar_t v3; // r9
  int v5; // r8d
  const wchar_t *v6; // r11
  unsigned int v7; // r10d
  int v8; // eax
  __int64 result; // rax

  v3 = *Buffer;
  *Value = 0;
  *FinalPosition = Buffer;
  if ( v3 != 48 )
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
      goto LABEL_4;
LABEL_9:
    v5 = 10;
    goto LABEL_5;
  }
  if ( ((Buffer[1] - 88) & 0xFFDF) != 0 )
    goto LABEL_9;
  v3 = Buffer[2];
  Buffer += 2;
LABEL_4:
  v5 = 16;
LABEL_5:
  v6 = Buffer;
  v7 = 0;
  if ( !v3 )
    return 0LL;
  do
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
    {
      if ( v5 != 16 )
        break;
      if ( (unsigned __int16)(v3 - 65) > 5u )
      {
        if ( (unsigned __int16)(v3 - 97) > 5u )
          break;
        v8 = v3 - 87;
      }
      else
      {
        v8 = v3 - 55;
      }
    }
    else
    {
      v8 = v3 - 48;
    }
    if ( v8 + v7 * v5 < v7 )
      return 0LL;
    ++Buffer;
    v7 = v8 + v7 * v5;
    v3 = *Buffer;
  }
  while ( *Buffer );
  if ( Buffer == v6 )
    return 0LL;
  *FinalPosition = Buffer;
  result = 1LL;
  *Value = v7;
  return result;
}
