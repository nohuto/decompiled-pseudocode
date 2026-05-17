/*
 * XREFs of __input_s @ 0x4B30166C
 * Callers:
 *     __sinput_s @ 0x4B301E1A (__sinput_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _inc @ 0x4B2FE3FC (_inc.c)
 *     __ungetc_nolock @ 0x4B2FEE9C (__ungetc_nolock.c)
 *     ReadString_0 @ 0x4B3013DC (ReadString_0.c)
 *     ReadStringDelimited_0 @ 0x4B301548 (ReadStringDelimited_0.c)
 *     _hextodec_0 @ 0x4B30164A (_hextodec_0.c)
 *     _whiteout_0 @ 0x4B301E7E (_whiteout_0.c)
 */

int __cdecl _input_s(FILE *Stream, unsigned __int8 *a2, int *a3)
{
  int v3; // ebx
  unsigned __int8 v4; // cl
  int v5; // esi
  int v6; // edi
  int v7; // eax
  unsigned __int8 *v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // ebx
  int v11; // edi
  char v12; // dl
  char v13; // dh
  unsigned int v14; // ecx
  bool v15; // zf
  char v16; // cl
  unsigned __int8 *v17; // eax
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // al
  int v20; // eax
  unsigned __int8 *v21; // ecx
  int v22; // edx
  unsigned int v23; // esi
  int v24; // eax
  int *v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  char v29; // al
  char v30; // al
  int v31; // eax
  char v32; // al
  int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int *v40; // eax
  int v41; // eax
  int v42; // eax
  char v44; // [esp-4h] [ebp-5Ch]
  int v45; // [esp-4h] [ebp-5Ch]
  int v46; // [esp+10h] [ebp-48h] BYREF
  int *v47; // [esp+14h] [ebp-44h]
  int v48; // [esp+18h] [ebp-40h] BYREF
  int *v49; // [esp+1Ch] [ebp-3Ch]
  int v50; // [esp+20h] [ebp-38h]
  int v51; // [esp+24h] [ebp-34h]
  int v52; // [esp+28h] [ebp-30h]
  int v53; // [esp+2Ch] [ebp-2Ch]
  int v54; // [esp+30h] [ebp-28h]
  int v55; // [esp+34h] [ebp-24h]
  int v56; // [esp+38h] [ebp-20h]
  int Character; // [esp+3Ch] [ebp-1Ch] BYREF
  int v58; // [esp+40h] [ebp-18h]
  unsigned int v59; // [esp+44h] [ebp-14h]
  int v60; // [esp+48h] [ebp-10h] BYREF
  unsigned __int8 *v61; // [esp+4Ch] [ebp-Ch]
  char v62; // [esp+52h] [ebp-6h]
  char v63; // [esp+53h] [ebp-5h]
  char v64; // [esp+54h] [ebp-4h]
  char v65; // [esp+55h] [ebp-3h]
  char v66; // [esp+56h] [ebp-2h]
  char v67; // [esp+57h] [ebp-1h]

  v56 = 0;
  v59 = 0;
  v51 = 0;
  v47 = 0;
  v61 = a2;
  v3 = 0;
  Character = 0;
  if ( !a2 || !Stream )
  {
    v5 = -1;
LABEL_219:
    _invalid_parameter();
    return v5;
  }
  v4 = *a2;
  v5 = 0;
  v65 = 0;
  v6 = 0;
  v60 = 0;
  v55 = 0;
  v48 = 0;
  if ( !v4 )
    return v5;
  while ( (_pctype[v4] & 8) != 0 )
  {
    v60 = v6 - 1;
    v7 = whiteout_0(&v60, Stream);
    if ( v7 != -1 )
      _ungetc_nolock(v7, Stream);
    v8 = v61;
    do
      ++v8;
    while ( (_pctype[*v8] & 8) != 0 );
    v6 = v60;
    v61 = v8;
LABEL_198:
    v4 = *v8;
    if ( !*v8 )
      goto LABEL_208;
  }
  v9 = v61;
  if ( v4 != 37 )
    goto LABEL_194;
  if ( v61[1] == 37 )
  {
    ++v61;
LABEL_194:
    v60 = ++v6;
    v3 = inc(Stream);
    Character = v3;
    v42 = *v61;
    v8 = ++v61;
    if ( v42 == v3 )
      goto LABEL_195;
    v22 = -1;
LABEL_206:
    if ( v3 == -1 )
      goto LABEL_214;
    _ungetc_nolock(v3, Stream);
LABEL_208:
    v5 = v55;
    goto LABEL_209;
  }
  v64 = 1;
  v54 = 0;
  v10 = 0;
  v50 = 0;
  v11 = 0;
  v12 = 0;
  v62 = 0;
  v13 = 0;
  v67 = 0;
  v52 = 0;
  do
  {
    v61 = ++v9;
    a2 = v9;
    v14 = *v9;
    if ( (_pctype[v14] & 4) != 0 )
    {
      ++v10;
      v11 = v14 + 10 * v11 - 48;
LABEL_52:
      v16 = v67;
      goto LABEL_53;
    }
    if ( v14 > 0x68 )
    {
      switch ( v14 )
      {
        case 'j':
          goto LABEL_31;
        case 'l':
          v9 = v61 + 1;
          if ( v61[1] == 108 )
          {
LABEL_34:
            ++v52;
            v56 = 0;
            v59 = 0;
            v61 = v9;
            a2 = v9;
            goto LABEL_25;
          }
          ++v64;
          break;
        case 't':
          goto LABEL_31;
        case 'w':
          break;
        case 'z':
          goto LABEL_31;
        default:
          goto LABEL_51;
      }
      ++v13;
      goto LABEL_52;
    }
    if ( v14 == 104 )
    {
      --v64;
      --v13;
LABEL_25:
      v16 = v67;
      continue;
    }
    if ( v14 != 42 )
    {
      if ( v14 == 70 )
        goto LABEL_52;
      if ( v14 != 73 )
      {
        if ( v14 == 76 )
        {
          ++v64;
          goto LABEL_52;
        }
        v15 = v14 == 78;
        goto LABEL_50;
      }
LABEL_31:
      if ( v14 == 73 )
      {
        v17 = v61;
        v18 = v61[1];
        if ( v18 == 54 )
        {
          v9 = v61 + 2;
          if ( v61[2] == 52 )
            goto LABEL_34;
          v17 = v61;
        }
        if ( v18 == 51 )
        {
          v9 = v17 + 2;
          if ( *v9 == 50 )
          {
            v61 = v9;
            a2 = v9;
            goto LABEL_25;
          }
        }
      }
      else if ( v14 == 106 )
      {
        ++v52;
        v56 = 0;
        v59 = 0;
        goto LABEL_52;
      }
      v19 = v61[1];
      if ( v19 == 100 || v19 == 105 || v19 == 111 || v19 == 117 || v19 == 120 )
        goto LABEL_52;
      v15 = v19 == 88;
LABEL_50:
      if ( v15 )
        goto LABEL_52;
LABEL_51:
      ++v12;
      goto LABEL_52;
    }
    v16 = ++v67;
LABEL_53:
    v9 = v61;
  }
  while ( !v12 );
  v53 = v10;
  v3 = Character;
  v58 = v11;
  v6 = v60;
  v63 = v13;
  if ( v16 )
  {
    v20 = 0;
  }
  else
  {
    v47 = a3++;
    v20 = *(a3 - 1);
  }
  v21 = v61;
  v49 = (int *)v20;
  v46 = v20;
  v66 = 0;
  if ( !v13 )
  {
    if ( *v61 != 83 && *v61 != 67 )
    {
      v22 = -1;
      v63 = -1;
      goto LABEL_64;
    }
    v63 = 1;
  }
  v22 = -1;
LABEL_64:
  v23 = *v61 | 0x20;
  if ( v23 == 110 )
  {
LABEL_71:
    if ( v53 && !v58 )
      goto LABEL_206;
    if ( !v67 && (v23 == 99 || v23 == 115 || v23 == 123) )
    {
      v25 = (int *)*v47++;
      a3 = v47 + 1;
      v49 = v25;
      v46 = (int)v25;
      v26 = *v47;
      if ( !*v47 )
      {
        v5 = v55;
        if ( v63 > 0 )
        {
          *(_WORD *)v25 = 0;
          v27 = 0;
          goto LABEL_210;
        }
        *(_BYTE *)v25 = 0;
        goto LABEL_209;
      }
    }
    else
    {
      v26 = 0;
    }
    if ( v23 > 0x70 )
    {
      switch ( v23 )
      {
        case 's':
          v44 = 32;
          break;
        case 'u':
          goto LABEL_88;
        case 'x':
          goto LABEL_93;
        case '{':
          v44 = 64;
          break;
        default:
          goto LABEL_102;
      }
      v29 = v44;
      if ( !v53 )
        goto LABEL_182;
    }
    else
    {
      if ( v23 == 112 )
      {
        v64 = 1;
        goto LABEL_88;
      }
      if ( v23 != 99 )
      {
        if ( v23 == 100 )
        {
LABEL_88:
          if ( v3 == 45 )
          {
            v62 = 1;
            goto LABEL_128;
          }
          if ( v3 == 43 )
          {
LABEL_128:
            if ( !--v58 && v53 )
            {
              v32 = 1;
LABEL_134:
              if ( v52 )
              {
                if ( !v32 )
                {
                  while ( 1 )
                  {
                    if ( v23 == 120 || v23 == 112 )
                    {
                      if ( SLOBYTE(_pctype[(unsigned __int8)v3]) >= 0 )
                      {
LABEL_148:
                        v60 = --v6;
                        if ( v3 != -1 )
                          _ungetc_nolock(v3, Stream);
                        break;
                      }
                      v59 = __PAIR64__(v59, v56) >> 28;
                      v56 *= 16;
                      v34 = hextodec_0(v3);
                      v33 = v56;
                      v3 = v34;
                      Character = v34;
                    }
                    else
                    {
                      if ( (_pctype[(unsigned __int8)v3] & 4) == 0 )
                        goto LABEL_148;
                      if ( v23 == 111 )
                      {
                        if ( v3 >= 56 )
                          goto LABEL_148;
                        v59 = __PAIR64__(v59, v56) >> 29;
                        v33 = 8 * v56;
                      }
                      else
                      {
                        v59 *= 10;
                        v59 += (10 * (unsigned __int64)(unsigned int)v56) >> 32;
                        v33 = 10 * v56;
                      }
                    }
                    ++v50;
                    v56 = v3 - 48 + v33;
                    v35 = (v3 - 48 + __PAIR64__(v59, v33)) >> 32;
                    v36 = v56;
                    v59 = v35;
                    if ( v53 )
                    {
                      if ( !--v58 )
                        goto LABEL_151;
                    }
                    v60 = ++v6;
                    v3 = inc(Stream);
                    Character = v3;
                  }
                }
                v36 = v56;
                v35 = v59;
LABEL_151:
                if ( v62 )
                {
                  v37 = -v36;
                  v56 = v37;
                  v59 = (unsigned __int64)-__SPAIR64__(v35, v37) >> 32;
                }
              }
              else
              {
                if ( !v32 )
                {
                  while ( 1 )
                  {
                    if ( v23 == 120 || v23 == 112 )
                    {
                      if ( SLOBYTE(_pctype[(unsigned __int8)v3]) >= 0 )
                      {
LABEL_166:
                        v60 = --v6;
                        if ( v3 != -1 )
                          _ungetc_nolock(v3, Stream);
                        break;
                      }
                      v54 *= 16;
                      v3 = hextodec_0(v3);
                      v38 = v54;
                      Character = v3;
                    }
                    else
                    {
                      if ( (_pctype[(unsigned __int8)v3] & 4) == 0 )
                        goto LABEL_166;
                      if ( v23 == 111 )
                      {
                        if ( v3 >= 56 )
                          goto LABEL_166;
                        v38 = 8 * v54;
                      }
                      else
                      {
                        v38 = 10 * v54;
                      }
                    }
                    ++v50;
                    v39 = v3 + v38 - 48;
                    v54 = v39;
                    if ( v53 )
                    {
                      if ( !--v58 )
                        goto LABEL_169;
                    }
                    v60 = ++v6;
                    v3 = inc(Stream);
                    Character = v3;
                  }
                }
                v39 = v54;
LABEL_169:
                if ( v62 )
                  v54 = -v39;
              }
              if ( !v50 )
                goto LABEL_208;
              if ( v67 )
                goto LABEL_191;
              v28 = v54;
              v48 = ++v55;
              goto LABEL_174;
            }
            v60 = ++v6;
            v3 = inc(Stream);
            goto LABEL_132;
          }
LABEL_133:
          v32 = v66;
          goto LABEL_134;
        }
        if ( v23 != 105 )
        {
          if ( v23 != 110 )
          {
            if ( v23 == 111 )
              goto LABEL_88;
LABEL_102:
            if ( *v21 != v3 )
            {
              if ( v3 != -1 )
                _ungetc_nolock(v3, Stream);
              v5 = v55;
              v27 = 1;
LABEL_210:
              v22 = -1;
              if ( v3 == -1 )
                goto LABEL_214;
              if ( v27 != 1 )
                return v5;
              goto LABEL_219;
            }
            v30 = v65 - 1;
            if ( !v67 )
              a3 = v47;
            goto LABEL_192;
          }
          v28 = v6;
          if ( !v67 )
          {
LABEL_174:
            v40 = v49;
            if ( v52 )
            {
              *v49 = v56;
              v40[1] = v59;
            }
            else if ( v64 )
            {
              *v49 = v28;
            }
            else
            {
              *(_WORD *)v49 = v28;
            }
          }
LABEL_191:
          v30 = v65;
LABEL_192:
          v8 = v61 + 1;
          v65 = v30 + 1;
          ++v61;
LABEL_195:
          if ( v3 == -1 && (*v8 != 37 || v8[1] != 110) )
          {
            v22 = -1;
            goto LABEL_214;
          }
          goto LABEL_198;
        }
        v23 = 100;
LABEL_93:
        if ( v3 == 45 )
        {
          v62 = 1;
        }
        else if ( v3 != 43 )
        {
          goto LABEL_111;
        }
        if ( --v58 || !v53 )
        {
          v60 = ++v6;
          v3 = inc(Stream);
          Character = v3;
        }
        else
        {
          v66 = 1;
        }
LABEL_111:
        if ( v3 == 48 )
        {
          v60 = ++v6;
          v31 = inc(Stream);
          v3 = v31;
          Character = v31;
          if ( (_BYTE)v31 == 120 || (_BYTE)v31 == 88 )
          {
            v60 = ++v6;
            v3 = inc(Stream);
            Character = v3;
            if ( v53 )
            {
              v58 -= 2;
              if ( v58 < 1 )
                ++v66;
            }
            v45 = 120;
          }
          else
          {
            v50 = 1;
            if ( v23 == 120 )
            {
              v60 = --v6;
              if ( v31 != -1 )
                _ungetc_nolock(v31, Stream);
              v3 = 48;
LABEL_132:
              Character = v3;
              goto LABEL_133;
            }
            if ( v53 )
            {
              if ( !--v58 )
                ++v66;
            }
            v45 = 111;
          }
          v23 = v45;
        }
        goto LABEL_133;
      }
      v29 = 16;
      if ( !v53 )
        ++v58;
    }
    v29 |= 1u;
LABEL_182:
    if ( v63 > 0 )
      v29 |= 2u;
    if ( v67 )
      v29 |= 4u;
    if ( v23 == 123 )
    {
      v41 = ReadStringDelimited_0(v29, &a2, &Character, &v60, (_WORD **)&v46, v58, Stream, v26, &v48);
      v61 = a2;
    }
    else
    {
      v41 = ReadString_0(v29, 0, &Character, &v60, (_WORD **)&v46, v58, Stream, v26, &v48);
    }
    v3 = Character;
    if ( !v41 )
    {
      v6 = v60;
      v55 = v48;
      goto LABEL_191;
    }
    v5 = v48;
    v55 = v48;
LABEL_209:
    v27 = v51;
    goto LABEL_210;
  }
  if ( v23 == 99 || v23 == 123 )
  {
    v6 = ++v60;
    v24 = inc(Stream);
  }
  else
  {
    v24 = whiteout_0(&v60, Stream);
    v6 = v60;
  }
  v3 = v24;
  v22 = -1;
  Character = v24;
  if ( v24 != -1 )
  {
    v21 = v61;
    goto LABEL_71;
  }
LABEL_214:
  if ( v55 || v65 )
    return v55;
  return v22;
}
