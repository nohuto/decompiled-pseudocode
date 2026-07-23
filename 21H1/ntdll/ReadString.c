/*
 * XREFs of ReadString @ 0x4B2FE156
 * Callers:
 *     ReadStringDelimited @ 0x4B2FE2D6 (ReadStringDelimited.c)
 *     __input_l @ 0x4B2FE430 (__input_l.c)
 * Callees:
 *     _isleadbyte @ 0x4B2F85A1 (_isleadbyte.c)
 *     _inc @ 0x4B2FE3FC (_inc.c)
 *     _mbtowc @ 0x4B2FEE55 (_mbtowc.c)
 *     __ungetc_nolock @ 0x4B2FEE9C (__ungetc_nolock.c)
 */

int __cdecl ReadString(char a1, int a2, int *a3, _DWORD *a4, _DWORD *a5, int a6, FILE *Stream, _DWORD *a8)
{
  int i; // eax
  int v10; // eax
  int *v11; // edx
  unsigned __int8 v12; // al
  _WORD *v13; // eax
  size_t v15; // [esp-4h] [ebp-28h]
  _WORD *v16; // [esp+14h] [ebp-10h]
  char SrcCh[4]; // [esp+1Ch] [ebp-8h] BYREF
  wchar_t DstCh; // [esp+20h] [ebp-4h] BYREF

  v16 = (_WORD *)*a5;
  DstCh = 0;
  --*a4;
  if ( *a3 != -1 )
    _ungetc_nolock(*a3, Stream);
  for ( i = a1 & 1; ; i = a1 & 1 )
  {
    if ( i )
    {
      if ( !a6-- )
        break;
    }
    ++*a4;
    v10 = inc(Stream);
    v11 = a3;
    *a3 = v10;
    if ( v10 == -1
      || (a1 & 0x10) == 0
      && ((a1 & 0x20) == 0 || v10 >= 9 && v10 <= 13 || v10 == 32)
      && ((a1 & 0x40) == 0
       || v10 < 0
       || v10 < v10 >> 3
       || (v11 = a3, ((1 << (v10 & 7)) & (-((a1 & 8) != 0) ^ *(char *)((v10 >> 3) + a2))) == 0)) )
    {
      --*a4;
      if ( *v11 != -1 )
        _ungetc_nolock(*v11, Stream);
      break;
    }
    if ( (a1 & 4) != 0 )
    {
      v16 = (_WORD *)((char *)v16 + 1);
    }
    else
    {
      v12 = *(_BYTE *)v11;
      if ( (a1 & 2) != 0 )
      {
        SrcCh[0] = *(_BYTE *)v11;
        if ( isleadbyte(v12) )
        {
          ++*a4;
          SrcCh[1] = inc(Stream);
        }
        LODWORD(v15) = __mb_cur_max;
        DstCh = 63;
        mbtowc(&DstCh, SrcCh, v15);
        *(_WORD *)*a5 = DstCh;
        *a5 += 2;
      }
      else
      {
        *(_BYTE *)(*a5)++ = v12;
      }
    }
  }
  if ( v16 == (_WORD *)*a5 )
    return -1;
  if ( (a1 & 4) == 0 )
  {
    ++*a8;
    if ( (a1 & 0x10) == 0 )
    {
      v13 = (_WORD *)*a5;
      if ( (a1 & 2) != 0 )
        *v13 = 0;
      else
        *(_BYTE *)v13 = 0;
    }
  }
  return 0;
}
