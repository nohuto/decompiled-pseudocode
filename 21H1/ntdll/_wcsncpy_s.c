/*
 * XREFs of _wcsncpy_s @ 0x4B300710
 * Callers:
 *     __wsplitpath_s @ 0x4B2FFC60 (__wsplitpath_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  const wchar_t *v4; // edx
  wchar_t *v6; // esi
  wchar_t *v7; // ebx
  int v8; // edi
  wchar_t v9; // ax
  wchar_t v10; // ax
  errno_t v11; // [esp-4h] [ebp-8h]
  errno_t v12; // [esp-4h] [ebp-8h]

  v4 = Source;
  if ( Source )
  {
    if ( !Destination )
      goto LABEL_4;
  }
  else if ( !Destination )
  {
    if ( (_DWORD)SizeInWords )
    {
LABEL_4:
      _invalid_parameter();
      return 22;
    }
    return 0;
  }
  if ( !(_DWORD)SizeInWords )
    goto LABEL_4;
  if ( !Source )
  {
    *Destination = 0;
    return 0;
  }
  v6 = (wchar_t *)HIDWORD(SizeInWords);
  if ( HIDWORD(SizeInWords) )
  {
    v7 = Destination;
    v8 = SizeInWords;
    if ( Source == (const wchar_t *)-1 )
    {
      do
      {
        v9 = *v6;
        *(wchar_t *)((char *)v6 + (_DWORD)Destination - HIDWORD(SizeInWords)) = *v6;
        ++v6;
        if ( !v9 )
          break;
        --v8;
      }
      while ( v8 );
    }
    else
    {
      do
      {
        v10 = *(wchar_t *)((char *)v7 + HIDWORD(SizeInWords) - (_DWORD)Destination);
        *v7++ = v10;
        if ( !v10 )
          break;
        if ( !--v8 )
          break;
        v4 = (const wchar_t *)((char *)v4 - 1);
      }
      while ( v4 );
      if ( !v4 )
        *v7 = 0;
    }
    if ( v8 )
      return 0;
    if ( v4 == (const wchar_t *)-1 )
    {
      v11 = 80;
      Destination[(_DWORD)SizeInWords - 1] = 0;
      return v11;
    }
    v12 = 34;
  }
  else
  {
    v12 = 22;
  }
  *Destination = 0;
  _invalid_parameter();
  return v12;
}
