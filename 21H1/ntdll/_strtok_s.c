/*
 * XREFs of _strtok_s @ 0x4B3002F0
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     ___report_rangecheckfailure @ 0x4B2F4C38 (___report_rangecheckfailure.c)
 */

char *__cdecl strtok_s(char *String, const char *Delimiter, char **Context)
{
  char *v3; // esi
  int v4; // eax
  bool v5; // cf
  const char *v6; // edi
  char v7; // bl
  unsigned int v8; // ecx
  unsigned __int8 v9; // bl
  char v10; // bh
  char *v11; // ecx
  char *v13; // [esp+Ch] [ebp-28h]
  _BYTE v14[32]; // [esp+10h] [ebp-24h]

  v3 = String;
  if ( Context && Delimiter && (String || *Context) )
  {
    v4 = 0;
    v5 = 1;
    do
    {
      if ( !v5 )
        __report_rangecheckfailure();
      v14[v4++] = 0;
      v5 = (unsigned int)v4 < 0x20;
    }
    while ( v4 < 32 );
    v6 = Delimiter;
    do
    {
      v7 = *v6;
      v8 = *(unsigned __int8 *)v6++;
      v14[v8 >> 3] |= 1 << (v8 & 7);
    }
    while ( v7 );
    if ( !String )
      v3 = *Context;
    v9 = *v3;
    if ( ((unsigned __int8)(1 << (*v3 & 7)) & v14[(unsigned __int8)*v3 >> 3]) != 0 )
    {
      v10 = *v3;
      do
      {
        v9 = v10;
        if ( !v10 )
          break;
        v9 = *++v3;
        v10 = *v3;
      }
      while ( ((unsigned __int8)(1 << (*v3 & 7)) & v14[(unsigned __int8)*v3 >> 3]) != 0 );
    }
    v11 = v3;
    v13 = v3;
    if ( v9 )
    {
      while ( ((unsigned __int8)(1 << (v9 & 7)) & v14[v9 >> 3]) == 0 )
      {
        v9 = *++v3;
        if ( !*v3 )
          goto LABEL_21;
      }
      *v3++ = 0;
LABEL_21:
      v11 = v13;
    }
    *Context = v3;
    return v3 != v11 ? v11 : 0;
  }
  else
  {
    _invalid_parameter();
    return 0;
  }
}
