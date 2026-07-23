/*
 * XREFs of __makepath_s @ 0x4B2FF550
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl _makepath_s(
        char *Buffer,
        size_t BufferCount,
        const char *Drive,
        const char *Dir,
        const char *Filename,
        const char *Ext)
{
  int v6; // edx
  char *v7; // ecx
  const char *v8; // edi
  char v9; // al
  const char *v10; // edi
  char v11; // ah
  const char *v12; // edi
  errno_t v14; // [esp-4h] [ebp-10h]

  if ( !Buffer || !(_DWORD)BufferCount )
  {
    v14 = 22;
    goto LABEL_33;
  }
  v6 = 0;
  v7 = Buffer;
  if ( HIDWORD(BufferCount) && *(_BYTE *)HIDWORD(BufferCount) )
  {
    v6 = 2;
    if ( (unsigned int)BufferCount <= 2 )
      goto LABEL_30;
    *Buffer = *(_BYTE *)HIDWORD(BufferCount);
    Buffer[1] = 58;
    v7 = Buffer + 2;
  }
  v8 = Drive;
  if ( Drive && *Drive )
  {
    while ( ++v6 < (unsigned int)BufferCount )
    {
      *v7++ = *v8;
      if ( !*++v8 )
      {
        v9 = *(v8 - 1);
        if ( v9 != 47 && v9 != 92 )
        {
          if ( ++v6 >= (unsigned int)BufferCount )
            goto LABEL_30;
          *v7++ = 92;
        }
        goto LABEL_15;
      }
    }
    goto LABEL_30;
  }
LABEL_15:
  if ( Dir && *Dir )
  {
    v10 = (const char *)(Dir - v7);
    while ( ++v6 < (unsigned int)BufferCount )
    {
      *v7 = v7[(_DWORD)v10];
      if ( !(++v7)[(_DWORD)v10] )
        goto LABEL_20;
    }
    goto LABEL_30;
  }
LABEL_20:
  if ( !Filename )
    goto LABEL_29;
  v11 = *Filename;
  if ( !*Filename || *Filename == 46 )
  {
LABEL_25:
    if ( v11 )
    {
      v12 = (const char *)(Filename - v7);
      while ( ++v6 < (unsigned int)BufferCount )
      {
        *v7 = v7[(_DWORD)v12];
        if ( !(++v7)[(_DWORD)v12] )
          goto LABEL_29;
      }
      goto LABEL_30;
    }
LABEL_29:
    if ( v6 + 1 <= (unsigned int)BufferCount )
    {
      *v7 = 0;
      return 0;
    }
    goto LABEL_30;
  }
  if ( ++v6 < (unsigned int)BufferCount )
  {
    *v7++ = 46;
    v11 = *Filename;
    goto LABEL_25;
  }
LABEL_30:
  *Buffer = 0;
  v14 = 34;
LABEL_33:
  _invalid_parameter();
  return v14;
}
