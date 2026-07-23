/*
 * XREFs of _LdrpResCompareResourceNames@32 @ 0x4B2BF6C8
 * Callers:
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _wcsncmp @ 0x4B2FA7E0 (_wcsncmp.c)
 *     _LdrpResReadFile@16 @ 0x4B343482 (_LdrpResReadFile@16.c)
 */

int __fastcall LdrpResCompareResourceNames(
        int a1,
        void *a2,
        int a3,
        wchar_t *String1,
        int a5,
        int *a6,
        __int16 a7,
        int *a8)
{
  int *v8; // eax
  int v9; // ecx
  wchar_t *v10; // edi
  int v11; // ebx
  int File; // esi
  int result; // eax
  int v14; // ebx
  unsigned __int16 *v15; // ebx
  int v16; // ecx
  size_t v18; // [esp-4h] [ebp-234h]
  unsigned __int16 *v20; // [esp+14h] [ebp-21Ch] BYREF
  int v21; // [esp+18h] [ebp-218h]
  int *v22; // [esp+1Ch] [ebp-214h]
  unsigned int Buffer; // [esp+20h] [ebp-210h] BYREF
  _BYTE v24[520]; // [esp+24h] [ebp-20Ch] BYREF
  int v25; // [esp+248h] [ebp+18h]

  v8 = a8;
  v21 = a1;
  v9 = a7 & 0x1000;
  Buffer = a5;
  v22 = a8;
  v25 = a7 & 0x8800;
  v10 = String1;
  if ( !a5 || !a6 )
    return -1073741811;
  v11 = *a6;
  File = 0;
  if ( ((unsigned int)String1 & 0xFFFF0000) == 0 )
  {
    if ( v11 >= 0 )
    {
      if ( !v9 || (v11 & 0xFFFF0000) == 0 )
      {
        *a8 = (int)String1 - v11;
        return File;
      }
      return -1073741701;
    }
    if ( v9 && (v11 & 0xFFFF0000) == 0 )
      return -1073741701;
LABEL_29:
    *v8 = 1;
    return File;
  }
  if ( v11 >= 0 )
  {
    *a8 = -1;
    return File;
  }
  v14 = v11 & 0x7FFFFFFF;
  if ( v9 )
  {
    if ( (RtlULongPtrAdd(Buffer, v14, (int *)&v20) & 0x80000000) != 0 || v14 + Buffer > a3 + (v21 & 0xFFFFFFFC) )
      return -1073741701;
    v15 = v20;
  }
  else
  {
    v15 = (unsigned __int16 *)(a5 + v14);
  }
  if ( v25 != 34816 )
  {
LABEL_16:
    if ( ((unsigned int)(v15 + 1) & 0xFFFF0000) == 0 )
      return -1073741701;
    LODWORD(v18) = *v15;
    v16 = wcsncmp(String1, v15 + 1, v18);
    if ( v16 )
      goto LABEL_20;
    while ( *v10++ )
      ;
    if ( v10 - (String1 + 1) == *v15 )
    {
LABEL_20:
      *v22 = v16;
      return File;
    }
    v8 = v22;
    goto LABEL_29;
  }
  result = LdrpResReadFile(a2, &Buffer, 2u);
  if ( result >= 0 )
  {
    if ( (unsigned int)(unsigned __int16)Buffer + 3 > 0x104 )
      return -1073741701;
    File = LdrpResReadFile(a2, v24, 2 * (unsigned __int16)Buffer + 2);
    if ( File < 0 )
      return File;
    v15 = (unsigned __int16 *)v24;
    goto LABEL_16;
  }
  return result;
}
