/*
 * XREFs of _wcsncat_s @ 0x4B300610
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  const wchar_t *v4; // edx
  wchar_t *v5; // edi
  const wchar_t *v7; // eax
  __int16 *v8; // ebx
  wchar_t *v9; // esi
  char *v10; // esi
  __int16 v11; // ax
  const wchar_t *v12; // edi
  int v13; // ebx
  wchar_t v14; // ax
  errno_t v15; // [esp-4h] [ebp-10h]
  errno_t v16; // [esp-4h] [ebp-10h]
  const wchar_t *Sourcea; // [esp+20h] [ebp+14h]

  v4 = Source;
  v5 = Destination;
  if ( Source )
  {
    if ( !Destination )
    {
LABEL_31:
      _invalid_parameter();
      return 22;
    }
  }
  else if ( !Destination )
  {
    if ( !(_DWORD)SizeInWords )
      return 0;
    goto LABEL_31;
  }
  v7 = (const wchar_t *)SizeInWords;
  if ( !(_DWORD)SizeInWords )
    goto LABEL_31;
  v8 = (__int16 *)HIDWORD(SizeInWords);
  if ( Source && !HIDWORD(SizeInWords) )
    goto LABEL_13;
  v9 = Destination;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    v7 = (const wchar_t *)((char *)v7 - 1);
  }
  while ( v7 );
  Sourcea = v7;
  if ( !v7 )
  {
LABEL_13:
    v15 = 22;
LABEL_30:
    *v5 = 0;
    _invalid_parameter();
    return v15;
  }
  if ( v4 == (const wchar_t *)-1 )
  {
    v10 = (char *)v9 - HIDWORD(SizeInWords);
    do
    {
      v11 = *v8;
      *(__int16 *)((char *)v8 + (_DWORD)v10) = *v8;
      ++v8;
      if ( !v11 )
        break;
      Sourcea = (const wchar_t *)((char *)Sourcea - 1);
    }
    while ( Sourcea );
  }
  else
  {
    if ( !v4 )
      goto LABEL_25;
    v12 = v7;
    v13 = HIDWORD(SizeInWords) - (_DWORD)v9;
    do
    {
      v14 = *(wchar_t *)((char *)v9 + v13);
      *v9++ = v14;
      if ( !v14 )
        break;
      v12 = (const wchar_t *)((char *)v12 - 1);
      if ( !v12 )
        break;
      v4 = (const wchar_t *)((char *)v4 - 1);
    }
    while ( v4 );
    Sourcea = v12;
    v5 = Destination;
    if ( !v4 )
LABEL_25:
      *v9 = 0;
  }
  if ( Sourcea )
    return 0;
  if ( v4 != (const wchar_t *)-1 )
  {
    v15 = 34;
    goto LABEL_30;
  }
  v16 = 80;
  v5[(_DWORD)SizeInWords - 1] = 0;
  return v16;
}
