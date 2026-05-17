/*
 * XREFs of _wcstok_s @ 0x4B3007F0
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *String, const wchar_t *Delimiter, wchar_t **Context)
{
  wchar_t **v3; // esi
  const wchar_t *v4; // edi
  wchar_t *v5; // ecx
  wchar_t v6; // dx
  wchar_t v7; // ax
  __int16 v8; // bx
  wchar_t v9; // si
  wchar_t *v10; // edx
  wchar_t v11; // bx
  wchar_t v12; // dx
  wchar_t v13; // si
  wchar_t v15; // [esp+8h] [ebp-10h]
  wchar_t *v16; // [esp+14h] [ebp-4h]

  v3 = Context;
  if ( !Context )
    goto LABEL_29;
  v4 = Delimiter;
  if ( !Delimiter )
    goto LABEL_29;
  v5 = String;
  if ( !String )
  {
    if ( *Context )
    {
      v5 = *Context;
      goto LABEL_6;
    }
LABEL_29:
    _invalid_parameter();
    return 0;
  }
LABEL_6:
  v6 = *v5;
  if ( *v5 )
  {
    v7 = *Delimiter;
    do
    {
      v8 = v7;
      if ( v7 )
      {
        v9 = v7;
        do
        {
          v8 = v9;
          if ( v9 == v6 )
            break;
          v9 = *++v4;
          v8 = *v4;
        }
        while ( *v4 );
        v4 = Delimiter;
        v7 = *Delimiter;
      }
      if ( !v8 )
        break;
      v6 = *++v5;
    }
    while ( *v5 );
    v3 = Context;
  }
  v10 = v5;
  v16 = v5;
  if ( *v5 )
  {
    v11 = *v4;
    v15 = *v4;
    while ( 1 )
    {
      v12 = v11;
      if ( v11 )
      {
        v13 = v11;
        do
        {
          v12 = v13;
          if ( v13 == *v5 )
            break;
          v13 = *++v4;
          v12 = *v4;
        }
        while ( *v4 );
        v3 = Context;
        v4 = Delimiter;
        v11 = v15;
      }
      if ( v12 )
        break;
      if ( !*++v5 )
        goto LABEL_27;
    }
    *v5++ = 0;
LABEL_27:
    v10 = v16;
  }
  *v3 = v5;
  return v5 != v10 ? v10 : 0;
}
