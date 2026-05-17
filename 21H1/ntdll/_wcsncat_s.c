/*
 * XREFs of _wcsncat_s @ 0x4B300610
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  rsize_t v4; // edx
  wchar_t *v5; // edi
  rsize_t v7; // eax
  const wchar_t *v8; // ebx
  wchar_t *v9; // esi
  int v10; // esi
  wchar_t v11; // ax
  rsize_t v12; // edi
  char *v13; // ebx
  wchar_t v14; // ax
  errno_t v15; // [esp-4h] [ebp-10h]
  errno_t v16; // [esp-4h] [ebp-10h]
  rsize_t MaxCounta; // [esp+20h] [ebp+14h]

  v4 = MaxCount;
  v5 = Destination;
  if ( MaxCount )
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
    if ( !SizeInWords )
      return 0;
    goto LABEL_31;
  }
  v7 = SizeInWords;
  if ( !SizeInWords )
    goto LABEL_31;
  v8 = Source;
  if ( MaxCount && !Source )
    goto LABEL_13;
  v9 = Destination;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v7;
  }
  while ( v7 );
  MaxCounta = v7;
  if ( !v7 )
  {
LABEL_13:
    v15 = 22;
LABEL_30:
    *v5 = 0;
    _invalid_parameter();
    return v15;
  }
  if ( v4 == -1 )
  {
    v10 = (char *)v9 - (char *)Source;
    do
    {
      v11 = *v8;
      *(const wchar_t *)((char *)v8 + v10) = *v8;
      ++v8;
      if ( !v11 )
        break;
      --MaxCounta;
    }
    while ( MaxCounta );
  }
  else
  {
    if ( !v4 )
      goto LABEL_25;
    v12 = v7;
    v13 = (char *)((char *)Source - (char *)v9);
    do
    {
      v14 = *(wchar_t *)((char *)v9 + (_DWORD)v13);
      *v9++ = v14;
      if ( !v14 )
        break;
      if ( !--v12 )
        break;
      --v4;
    }
    while ( v4 );
    MaxCounta = v12;
    v5 = Destination;
    if ( !v4 )
LABEL_25:
      *v9 = 0;
  }
  if ( MaxCounta )
    return 0;
  if ( v4 != -1 )
  {
    v15 = 34;
    goto LABEL_30;
  }
  v16 = 80;
  v5[SizeInWords - 1] = 0;
  return v16;
}
