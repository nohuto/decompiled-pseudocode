/*
 * XREFs of ?do_in@?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@MEBAHAEAU_Mbstatet@@PEBD1AEAPEBDPEAG3AEAPEAG@Z @ 0x1801986C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt_utf8_utf16<unsigned short,1114111,0>::do_in(
        __int64 a1,
        _WORD *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  unsigned int v8; // ebx
  unsigned __int8 *v10; // r10
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rcx
  unsigned __int8 *v14; // rsi
  unsigned int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  unsigned __int8 *v19; // rcx
  int v20; // esi
  unsigned int v21; // r8d
  int v22; // edx

  v8 = 0;
  v10 = a3;
  *a5 = a3;
  *a8 = a6;
  v12 = *a5;
  if ( *a5 != a4 )
  {
    v13 = *a5;
    do
    {
      v14 = v12;
      v12 = v13;
      if ( *a8 == a7 )
        break;
      v15 = *v13;
      if ( *a2 > 1u )
      {
        if ( v15 - 128 > 0x3F )
          return 2LL;
        *a5 = v13 + 1;
        *(_WORD *)*a8 = *a2 | v15 & 0x3F;
        *a8 += 2LL;
        *a2 = 1;
        goto LABEL_38;
      }
      if ( v15 >= 0x80 )
      {
        if ( v15 < 0xC0 )
        {
          *a5 = v13 + 1;
          return 2LL;
        }
        if ( v15 >= 0xE0 )
        {
          if ( v15 >= 0xF0 )
          {
            if ( v15 >= 0xF8 )
            {
              v18 = 3;
              v16 = 4;
              if ( v15 >= 0xFC )
                v16 = 5;
            }
            else
            {
              v18 = 7;
              v16 = 3;
            }
            v17 = 1;
            v15 &= v18;
            goto LABEL_20;
          }
          v15 &= 0xFu;
          v16 = 2;
        }
        else
        {
          v15 &= 0x1Fu;
          v16 = 1;
        }
      }
      else
      {
        v16 = 0;
      }
      v17 = 0;
LABEL_20:
      v10 = v14;
      if ( v16 )
      {
        if ( a4 - v14 < v16 - v17 + 1 )
          goto LABEL_41;
        v19 = v14 + 1;
        *a5 = v14 + 1;
        if ( v17 < (unsigned int)v16 )
        {
          do
          {
            v20 = *v19;
            if ( (unsigned int)(v20 - 128) > 0x3F )
              return 2LL;
            --v16;
            v15 = (v15 << 6) | v20 & 0x3F;
            *a5 = ++v19;
          }
          while ( v17 < v16 );
        }
      }
      else
      {
        v19 = v14 + 1;
        *a5 = v14 + 1;
      }
      v21 = v15 << 6;
      if ( !v17 )
        v21 = v15;
      if ( v21 > 0x10FFFF )
        return 2LL;
      if ( v21 <= 0xFFFF )
      {
        if ( v17 )
        {
          if ( v19 == a4 )
          {
            *a5 = v10;
LABEL_41:
            v12 = v10;
            break;
          }
          v22 = *v19;
          *a5 = v19 + 1;
          if ( (unsigned int)(v22 - 128) > 0x3F )
            return 2LL;
          LOWORD(v21) = v22 & 0x3F | v21;
        }
        if ( !*a2 )
          *a2 = 1;
        *(_WORD *)*a8 = v21;
        *a8 += 2LL;
      }
      else
      {
        *(_WORD *)*a8 = ((v21 >> 10) - 64) | 0xD800;
        *a8 += 2LL;
        *a2 = v21 & 0x3FF | 0xDC00;
      }
LABEL_38:
      v12 = *a5;
      v13 = *a5;
    }
    while ( *a5 != a4 );
  }
  LOBYTE(v8) = v10 == v12;
  return v8;
}
