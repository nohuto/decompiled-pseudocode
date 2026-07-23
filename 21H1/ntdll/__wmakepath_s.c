/*
 * XREFs of __wmakepath_s @ 0x4B2FFB10
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl _wmakepath_s(
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Drive,
        const wchar_t *Dir,
        const wchar_t *Filename,
        const wchar_t *Ext)
{
  wchar_t *v6; // ebx
  int v7; // edx
  wchar_t *v8; // ecx
  const wchar_t *v9; // edi
  wchar_t v10; // ax
  int v11; // eax
  char *v12; // edi
  wchar_t v13; // ax
  char *v14; // edi
  errno_t result; // eax
  errno_t v16; // [esp-4h] [ebp-14h]
  wchar_t v17; // [esp+Ch] [ebp-4h]

  v6 = Buffer;
  if ( !Buffer || !(_DWORD)BufferCount )
  {
    v16 = 22;
    goto LABEL_34;
  }
  v7 = 0;
  v8 = Buffer;
  if ( HIDWORD(BufferCount) && *(_WORD *)HIDWORD(BufferCount) )
  {
    v7 = 2;
    if ( (unsigned int)BufferCount <= 2 )
      goto LABEL_31;
    *Buffer = *(_WORD *)HIDWORD(BufferCount);
    Buffer[1] = 58;
    v8 = Buffer + 2;
  }
  v9 = Drive;
  if ( Drive && *Drive )
  {
    while ( ++v7 < (unsigned int)BufferCount )
    {
      v10 = *v9++;
      *v8++ = v10;
      if ( !*v9 )
      {
        v11 = *(v9 - 1);
        if ( v11 != 47 && (_WORD)v11 != 92 )
        {
          if ( ++v7 >= (unsigned int)BufferCount )
            goto LABEL_31;
          *v8++ = 92;
        }
        goto LABEL_15;
      }
    }
    goto LABEL_31;
  }
LABEL_15:
  if ( Dir && *Dir )
  {
    v12 = (char *)((char *)Dir - (char *)v8);
    while ( ++v7 < (unsigned int)BufferCount )
    {
      *v8 = *(wchar_t *)((char *)v8 + (_DWORD)v12);
      if ( !*(wchar_t *)((char *)++v8 + (_DWORD)v12) )
        goto LABEL_20;
    }
    goto LABEL_31;
  }
LABEL_20:
  if ( !Filename )
    goto LABEL_30;
  v17 = *Filename;
  v6 = Buffer;
  if ( !*Filename || (v17 = *Filename, v6 = Buffer, *Filename == 46) )
  {
    v13 = v17;
LABEL_26:
    if ( v13 )
    {
      v14 = (char *)((char *)Filename - (char *)v8);
      while ( ++v7 < (unsigned int)BufferCount )
      {
        *v8 = *(wchar_t *)((char *)v8 + (_DWORD)v14);
        if ( !*(wchar_t *)((char *)++v8 + (_DWORD)v14) )
          goto LABEL_30;
      }
      goto LABEL_31;
    }
LABEL_30:
    if ( v7 + 1 <= (unsigned int)BufferCount )
    {
      result = 0;
      *v8 = 0;
      return result;
    }
    goto LABEL_31;
  }
  if ( ++v7 < (unsigned int)BufferCount )
  {
    *v8++ = 46;
    v13 = *Filename;
    goto LABEL_26;
  }
LABEL_31:
  *v6 = 0;
  v16 = 34;
LABEL_34:
  _invalid_parameter();
  return v16;
}
