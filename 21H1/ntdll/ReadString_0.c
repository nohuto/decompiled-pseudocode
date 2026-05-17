/*
 * XREFs of ReadString_0 @ 0x4B3013DC
 * Callers:
 *     ReadStringDelimited_0 @ 0x4B301548 (ReadStringDelimited_0.c)
 *     __input_s @ 0x4B30166C (__input_s.c)
 * Callees:
 *     _inc @ 0x4B2FE3FC (_inc.c)
 *     __ungetc_nolock @ 0x4B2FEE9C (__ungetc_nolock.c)
 */

int __cdecl ReadString_0(char a1, int a2, int *a3, _DWORD *a4, _WORD **a5, int a6, FILE *Stream, int a8, _DWORD *a9)
{
  _DWORD *v9; // ecx
  _WORD *v11; // edi
  int i; // eax
  int v14; // eax
  _WORD *v15; // ecx
  _WORD *v17; // eax
  int v18; // [esp+Ch] [ebp-8h]
  int v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+1Ch] [ebp+8h]

  v9 = a4;
  v18 = -((a1 & 8) != 0);
  v11 = *a5;
  --*a4;
  if ( *a3 != -1 )
  {
    _ungetc_nolock(*a3, Stream);
    v9 = a4;
  }
  v19 = a1 & 0x10;
  if ( (a1 & 0x10) != 0 )
    v20 = a8;
  else
    v20 = a8 - 1;
  for ( i = a1 & 1; ; i = a1 & 1 )
  {
    if ( i )
    {
      if ( !a6-- )
        goto LABEL_32;
    }
    ++*v9;
    v14 = inc(Stream);
    *a3 = v14;
    if ( v14 == -1 )
      break;
    if ( !v19 && ((a1 & 0x20) == 0 || v14 >= 9 && v14 <= 13 || v14 == 32) )
    {
      if ( (a1 & 0x40) == 0 )
        break;
      if ( v14 < 0 )
        break;
      a8 = v14 >> 3;
      if ( v14 < v14 >> 3 || ((1 << (v14 & 7)) & (v18 ^ *(char *)(a8 + a2))) == 0 )
        break;
    }
    if ( (a1 & 4) != 0 )
    {
      v11 = (_WORD *)((char *)v11 + 1);
    }
    else
    {
      if ( !v20 )
      {
        if ( (a1 & 2) != 0 )
          *v11 = 0;
        else
          *(_BYTE *)v11 = 0;
        return -1;
      }
      v15 = *a5;
      --v20;
      if ( (a1 & 2) != 0 )
      {
        *v15 = (unsigned __int16)&a8;
        ++*a5;
      }
      else
      {
        *(_BYTE *)v15 = *(_BYTE *)a3;
        *a5 = (_WORD *)((char *)*a5 + 1);
      }
    }
    v9 = a4;
  }
  --*a4;
  if ( *a3 != -1 )
    _ungetc_nolock(*a3, Stream);
LABEL_32:
  if ( v11 == *a5 )
    return -1;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( !v19 )
    {
      v17 = *a5;
      if ( (a1 & 2) != 0 )
        *v17 = 0;
      else
        *(_BYTE *)v17 = 0;
    }
  }
  return 0;
}
