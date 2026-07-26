/*
 * XREFs of SepSddlParseWideStringUlong @ 0x1C0128554
 * Callers:
 *     SepSddlGetAclForString @ 0x1C012804C (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlParseWideStringUlong(unsigned __int16 *a1, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned __int16 v3; // r9
  int v5; // r8d
  unsigned __int16 *v6; // r11
  unsigned int v7; // r10d
  int v8; // eax
  __int64 result; // rax

  v3 = *a1;
  *a3 = 0;
  *a2 = a1;
  if ( v3 != 48 )
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
      goto LABEL_4;
LABEL_9:
    v5 = 10;
    goto LABEL_5;
  }
  if ( ((a1[1] - 88) & 0xFFDF) != 0 )
    goto LABEL_9;
  v3 = a1[2];
  a1 += 2;
LABEL_4:
  v5 = 16;
LABEL_5:
  v6 = a1;
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
    ++a1;
    v7 = v8 + v7 * v5;
    v3 = *a1;
  }
  while ( *a1 );
  if ( a1 == v6 )
    return 0LL;
  *a2 = a1;
  result = 1LL;
  *a3 = v7;
  return result;
}
