/*
 * XREFs of ReadString_1 @ 0x4B3029D2
 * Callers:
 *     ReadStringDelimited_1 @ 0x4B302B96 (ReadStringDelimited_1.c)
 *     __winput_s @ 0x4B302E38 (__winput_s.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _un_inc @ 0x4B302DE8 (_un_inc.c)
 *     __fgetwc_nolock @ 0x4B30365C (__fgetwc_nolock.c)
 */

int __cdecl ReadString_1(
        char a1,
        int a2,
        __int16 *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        FILE *Stream,
        unsigned int a8,
        _DWORD *a9)
{
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // edx
  wint_t v15; // ax
  unsigned __int16 v16; // dx
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  _WORD *v21; // eax
  size_t v22; // [esp-4h] [ebp-20h]
  _BYTE Src[8]; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v24; // [esp+14h] [ebp-8h]
  int v25; // [esp+18h] [ebp-4h]
  int v26; // [esp+24h] [ebp+8h]
  _WORD *v27; // [esp+34h] [ebp+18h]

  v27 = *a5;
  v25 = -((a1 & 8) != 0);
  --*a4;
  un_inc(*a3);
  v11 = a8;
  v12 = a1 & 0x10;
  v26 = v12;
  if ( (a1 & 0x10) == 0 )
    v11 = a8 - 1;
  v13 = a1 & 1;
  while ( 1 )
  {
    if ( v13 )
    {
      if ( !a6-- )
        goto LABEL_35;
    }
    ++*a4;
    v15 = _fgetwc_nolock(Stream);
    v16 = v15;
    v24 = v15;
    *a3 = v15;
    if ( v15 == 0xFFFF )
      break;
    v12 = v26;
    if ( v26 || (a1 & 0x20) != 0 && (v15 < 9u || v15 > 0xDu) && v15 != 32 )
      goto LABEL_16;
    if ( (a1 & 0x40) == 0 )
      break;
    v17 = v15 >> 3;
    if ( v16 < (unsigned __int16)v17 || ((1 << (v16 & 7)) & (v25 ^ *(char *)(v17 + a2))) == 0 )
      break;
    v16 = v24;
    v12 = 0;
LABEL_16:
    if ( (a1 & 4) != 0 )
    {
      ++v27;
LABEL_29:
      v13 = a1 & 1;
    }
    else
    {
      if ( !v11 )
        goto LABEL_30;
      if ( (a1 & 2) != 0 )
      {
        v12 = v26;
        *(_WORD *)*a5 = v16;
        *a5 = (char *)*a5 + 2;
        --v11;
        goto LABEL_29;
      }
      LOBYTE(v18) = *(_BYTE *)a3;
      if ( v11 < __mb_cur_max )
      {
        Src[0] = *(_BYTE *)a3;
        v18 = (char)v18;
        v24 = v18;
        if ( (char)v18 > 0 && v18 > v11 || v18 > 5 )
        {
LABEL_30:
          if ( (a1 & 2) != 0 )
            *v27 = 0;
          else
            *(_BYTE *)v27 = 0;
          return -1;
        }
        LODWORD(v22) = v18;
        memcpy(*a5, Src, v22);
        v19 = v24;
      }
      else
      {
        *(_BYTE *)*a5 = v18;
        v19 = *(char *)*a5;
      }
      v12 = v26;
      v13 = a1 & 1;
      if ( v19 > 0 )
      {
        *a5 = (char *)*a5 + v19;
        v11 -= v19;
      }
    }
  }
  --*a4;
  un_inc(*a3);
  v12 = v26;
LABEL_35:
  if ( v27 == *a5 )
    return -1;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( !v12 )
    {
      v21 = *a5;
      if ( (a1 & 2) != 0 )
        *v21 = 0;
      else
        *(_BYTE *)v21 = 0;
    }
  }
  return 0;
}
