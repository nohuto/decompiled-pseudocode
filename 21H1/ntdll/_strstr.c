/*
 * XREFs of _strstr @ 0x4B2FA160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  unsigned __int8 v2; // dl
  const char *v3; // edi
  char v4; // dh
  const char *v5; // ecx
  char *v6; // esi
  char v7; // al
  char v9; // ah
  char v10; // al
  char v11; // al

  v2 = *SubStr;
  v3 = Str;
  if ( !*SubStr )
    return (char *)Str;
  v4 = SubStr[1];
  if ( !v4 )
    return __from_strstr_to_strchr(v2, (char *)Str);
LABEL_3:
  v5 = SubStr;
  v6 = (char *)(v3 + 1);
  if ( *v3 == v2 )
    goto LABEL_9;
  if ( *v3 )
  {
    while ( 2 )
    {
      v7 = *v6++;
      while ( v7 == v2 )
      {
LABEL_9:
        v7 = *v6++;
        if ( v7 == v4 )
        {
          v3 = v6 - 1;
          while ( 1 )
          {
            v9 = v5[2];
            if ( !v9 )
              break;
            v10 = *v6;
            v6 += 2;
            if ( v10 != v9 )
              goto LABEL_3;
            v11 = v5[3];
            if ( !v11 )
              break;
            v5 += 2;
            if ( v11 != *(v6 - 1) )
              goto LABEL_3;
          }
          return (char *)(v3 - 1);
        }
      }
      if ( v7 )
        continue;
      break;
    }
  }
  return 0;
}
