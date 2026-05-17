/*
 * XREFs of __winput_s @ 0x4B302E38
 * Callers:
 *     __swinput_s @ 0x4B302D82 (__swinput_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 *     ReadString_1 @ 0x4B3029D2 (ReadString_1.c)
 *     ReadStringDelimited_1 @ 0x4B302B96 (ReadStringDelimited_1.c)
 *     _hextodec_1 @ 0x4B302D54 (_hextodec_1.c)
 *     _un_inc @ 0x4B302DE8 (_un_inc.c)
 *     _whiteout_1 @ 0x4B302E00 (_whiteout_1.c)
 *     __fgetwc_nolock @ 0x4B30365C (__fgetwc_nolock.c)
 */

int __cdecl _winput_s(FILE *Stream, wint_t *a2, int *a3)
{
  int result; // eax
  wint_t *v4; // edi
  int v5; // ebx
  wint_t v6; // cx
  int v7; // esi
  wint_t v8; // ax
  int v9; // edx
  char v10; // ch
  char v11; // cl
  char v12; // bh
  char v13; // bl
  unsigned int v14; // eax
  bool v15; // zf
  char v16; // cl
  int v17; // ecx
  int v18; // eax
  unsigned __int64 *v19; // ecx
  int v20; // eax
  unsigned int v21; // esi
  wint_t v22; // ax
  int v23; // eax
  char v24; // al
  char v25; // al
  unsigned int v26; // ecx
  unsigned __int16 v27; // ax
  unsigned int v28; // eax
  unsigned int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned __int16 v32; // ax
  int v33; // ecx
  int v34; // eax
  wint_t v35; // ax
  int v36; // ecx
  int v37; // esi
  char v38; // [esp-4h] [ebp-58h]
  int v39; // [esp+Ch] [ebp-48h] BYREF
  int v40; // [esp+10h] [ebp-44h]
  unsigned __int64 *v41; // [esp+14h] [ebp-40h]
  int *v42; // [esp+18h] [ebp-3Ch]
  int v43; // [esp+20h] [ebp-34h] BYREF
  int v44; // [esp+24h] [ebp-30h]
  int v45; // [esp+28h] [ebp-2Ch]
  int v46; // [esp+2Ch] [ebp-28h]
  int v47; // [esp+30h] [ebp-24h]
  int v48; // [esp+34h] [ebp-20h]
  unsigned __int64 v49; // [esp+38h] [ebp-1Ch]
  int v50; // [esp+40h] [ebp-14h] BYREF
  int v51; // [esp+44h] [ebp-10h]
  int v52; // [esp+48h] [ebp-Ch] BYREF
  char v53; // [esp+4Eh] [ebp-6h]
  char v54; // [esp+4Fh] [ebp-5h]
  char v55; // [esp+50h] [ebp-4h]
  char v56; // [esp+51h] [ebp-3h]
  char v57; // [esp+52h] [ebp-2h]
  char v58; // [esp+53h] [ebp-1h]

  result = 0;
  v4 = a2;
  LOWORD(v5) = 0;
  v49 = 0LL;
  v50 = 0;
  v42 = 0;
  if ( !a2 || !Stream )
  {
    v37 = -1;
    goto LABEL_213;
  }
  v6 = *a2;
  v7 = 0;
  v54 = 0;
  v52 = 0;
  v48 = 0;
  v43 = 0;
  if ( !v6 )
    return result;
  while ( 2 )
  {
    if ( iswctype(v6, 8u) )
    {
      v52 = v7 - 1;
      v8 = whiteout_1(&v52, Stream);
      un_inc(v8, Stream);
      do
        ++v4;
      while ( iswctype(*v4, 8u) );
      v9 = 0;
      goto LABEL_192;
    }
    if ( *v4 != 37 )
      goto LABEL_187;
    if ( v4[1] == 37 )
    {
      ++v4;
LABEL_187:
      v52 = v7 + 1;
      v5 = _fgetwc_nolock(Stream);
      v35 = *v4++;
      v50 = v5;
      if ( v35 == (_WORD)v5 )
      {
        v9 = 0;
        goto LABEL_189;
      }
      un_inc(v5, Stream);
      result = v48;
      v9 = 0;
      goto LABEL_209;
    }
    v10 = 1;
    v11 = 0;
    v46 = 0;
    v44 = 0;
    v12 = 0;
    v47 = 0;
    v13 = 0;
    v51 = 0;
    v40 = 0;
    v53 = 0;
    v57 = 0;
    v56 = 1;
    v45 = 0;
    do
    {
      a2 = ++v4;
      v14 = *v4;
      if ( (v14 & 0xFF00) == 0 )
      {
        if ( (_pctype[(unsigned __int8)v14] & 4) != 0 )
        {
          ++v47;
          v51 = v14 + 10 * v51 - 48;
          goto LABEL_53;
        }
        v11 = v57;
        v10 = v56;
      }
      if ( v14 > 0x68 )
      {
        if ( v14 == 106 )
          goto LABEL_31;
        if ( v14 == 108 )
        {
          if ( v4[1] == 108 )
          {
            ++v4;
            goto LABEL_35;
          }
          v56 = v10 + 1;
LABEL_40:
          v16 = v11 + 1;
LABEL_25:
          v57 = v16;
          goto LABEL_53;
        }
        if ( v14 != 116 )
        {
          if ( v14 == 119 )
            goto LABEL_40;
          if ( v14 != 122 )
            goto LABEL_52;
        }
      }
      else
      {
        switch ( v14 )
        {
          case 'h':
            v16 = v11 - 1;
            v56 = v10 - 1;
            goto LABEL_25;
          case '*':
            ++v12;
            goto LABEL_53;
          case 'F':
            goto LABEL_53;
        }
        if ( v14 != 73 )
        {
          if ( v14 == 76 )
          {
            v56 = v10 + 1;
            goto LABEL_53;
          }
          v15 = v14 == 78;
LABEL_51:
          if ( v15 )
            goto LABEL_53;
LABEL_52:
          ++v13;
          goto LABEL_53;
        }
      }
LABEL_31:
      if ( v14 == 73 )
      {
        v17 = v4[1];
        if ( v17 == 54 && v4[2] == 52 )
        {
          v4 += 2;
LABEL_35:
          a2 = v4;
LABEL_36:
          ++v45;
          v49 = 0LL;
          goto LABEL_53;
        }
        if ( v17 == 51 && v4[2] == 50 )
        {
          v4 += 2;
          a2 = v4;
          goto LABEL_53;
        }
      }
      else if ( v14 == 106 )
      {
        goto LABEL_36;
      }
      v18 = v4[1];
      if ( (_WORD)v18 != 100 && v18 != 105 && (_WORD)v18 != 111 && v18 != 117 && (_WORD)v18 != 120 )
      {
        v15 = (_WORD)v18 == 88;
        goto LABEL_51;
      }
LABEL_53:
      v11 = v57;
      v10 = v56;
    }
    while ( !v13 );
    v55 = v12;
    LOWORD(v5) = v50;
    if ( v55 )
    {
      v19 = 0;
    }
    else
    {
      v42 = a3++;
      v19 = (unsigned __int64 *)*(a3 - 1);
    }
    v41 = v19;
    v39 = (int)v19;
    v58 = 0;
    if ( !v57 )
    {
      v20 = *v4;
      if ( v20 == 83 || (v57 = 1, v20 == 67) )
        v57 = -1;
    }
    v21 = *v4 | 0x20;
    if ( v21 == 110 )
    {
LABEL_68:
      if ( v47 && !v51 )
      {
        un_inc(v5, Stream);
      }
      else
      {
        if ( v55
          || v21 != 99 && v21 != 115 && v21 != 123
          || (++v42, v19 = (unsigned __int64 *)*(v42 - 1), a3 = v42 + 1, v41 = v19, v39 = (int)v19, (v40 = *v42) != 0) )
        {
          if ( v21 > 0x70 )
          {
            switch ( v21 )
            {
              case 's':
                v38 = 32;
                break;
              case 'u':
                goto LABEL_82;
              case 'x':
                goto LABEL_87;
              case '{':
                v38 = 64;
                break;
              default:
LABEL_96:
                if ( *v4 == (_WORD)v5 )
                {
                  --v54;
                  v9 = 0;
                  if ( !v55 )
                    a3 = v42;
                  goto LABEL_185;
                }
                un_inc(v5, Stream);
                v36 = 1;
                v9 = 0;
LABEL_197:
                result = v48;
LABEL_198:
                if ( (_WORD)v5 == 0xFFFF )
                  goto LABEL_199;
                if ( v36 != 1 )
                  return result;
                v37 = v48;
LABEL_213:
                _invalid_parameter();
                return v37;
            }
            v24 = v38;
            if ( v47 )
LABEL_175:
              v24 |= 1u;
            if ( v57 > 0 )
              v24 |= 2u;
            if ( v55 )
              v24 |= 4u;
            if ( v21 == 123 )
            {
              v34 = ReadStringDelimited_1(v24, &a2, (__int16 *)&v50, &v52, (void **)&v39, v51, Stream, v40, &v43);
              v4 = a2;
            }
            else
            {
              v34 = ReadString_1(v24, 0, (__int16 *)&v50, &v52, (void **)&v39, v51, Stream, v40, &v43);
            }
            LOWORD(v5) = v50;
            v9 = 0;
            if ( !v34 )
            {
              v48 = v43;
              goto LABEL_185;
            }
            result = v43;
            v48 = v43;
LABEL_209:
            v36 = 0;
            goto LABEL_198;
          }
          switch ( v21 )
          {
            case 'p':
              v56 = 1;
LABEL_82:
              if ( (_WORD)v5 == 45 )
              {
                v53 = 1;
              }
              else if ( (_WORD)v5 != 43 )
              {
                goto LABEL_124;
              }
              if ( --v51 || !v47 )
              {
                ++v52;
                v5 = _fgetwc_nolock(Stream);
                goto LABEL_123;
              }
              v25 = 1;
              goto LABEL_125;
            case 'c':
              v24 = 16;
              if ( !v47 )
                ++v51;
              goto LABEL_175;
            case 'd':
              goto LABEL_82;
            case 'i':
              v21 = 100;
LABEL_87:
              if ( (_WORD)v5 == 45 )
              {
                v53 = 1;
                goto LABEL_101;
              }
              if ( (_WORD)v5 == 43 )
              {
LABEL_101:
                if ( --v51 || !v47 )
                {
                  ++v52;
                  LOWORD(v5) = _fgetwc_nolock(Stream);
                  v50 = (unsigned __int16)v5;
                }
                else
                {
                  v58 = 1;
                }
              }
              if ( (_WORD)v5 == 48 )
              {
                ++v52;
                LOWORD(v5) = _fgetwc_nolock(Stream);
                v50 = (unsigned __int16)v5;
                if ( (_WORD)v5 != 120 && (_WORD)v5 != 88 )
                {
                  v44 = 1;
                  if ( v21 != 120 )
                  {
                    if ( v47 )
                    {
                      if ( !--v51 )
                        ++v58;
                    }
                    v21 = 111;
                    goto LABEL_124;
                  }
                  --v52;
                  un_inc(v5, Stream);
                  v5 = 48;
LABEL_123:
                  v50 = v5;
                  goto LABEL_124;
                }
                ++v52;
                LOWORD(v5) = _fgetwc_nolock(Stream);
                v50 = (unsigned __int16)v5;
                if ( v47 )
                {
                  v51 -= 2;
                  if ( v51 < 1 )
                    ++v58;
                }
                v21 = 120;
              }
LABEL_124:
              v25 = v58;
LABEL_125:
              if ( v45 )
              {
                if ( !v25 )
                {
                  while ( 1 )
                  {
                    if ( v21 == 120 || v21 == 112 )
                    {
                      if ( (v5 & 0xFF00) != 0 || SLOBYTE(_pctype[(unsigned __int8)v5]) >= 0 )
                      {
LABEL_141:
                        --v52;
                        un_inc(v5, Stream);
                        break;
                      }
                      v49 *= 16LL;
                      v27 = hextodec_1(v5);
                      v26 = v49;
                      LOWORD(v5) = v27;
                      v50 = v27;
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (_pctype[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_141;
                      if ( v21 == 111 )
                      {
                        if ( (unsigned __int16)v5 >= 0x38u )
                          goto LABEL_141;
                        HIDWORD(v49) = v49 >> 29;
                        v26 = 8 * v49;
                      }
                      else
                      {
                        HIDWORD(v49) = (10 * v49) >> 32;
                        v26 = 10 * v49;
                      }
                    }
                    ++v44;
                    v28 = ((unsigned __int16)v5 - 48LL + __PAIR64__(HIDWORD(v49), v26)) >> 32;
                    v29 = (unsigned __int16)v5 - 48 + v26;
                    v49 = __PAIR64__(v28, v29);
                    if ( v47 )
                    {
                      if ( !--v51 )
                        goto LABEL_143;
                    }
                    ++v52;
                    LOWORD(v5) = _fgetwc_nolock(Stream);
                    v50 = (unsigned __int16)v5;
                  }
                }
                v28 = HIDWORD(v49);
                v29 = v49;
LABEL_143:
                if ( v53 )
                {
                  v30 = -v29;
                  v9 = 0;
                  LODWORD(v49) = v30;
                  HIDWORD(v49) = (unsigned __int64)-__SPAIR64__(v28, v30) >> 32;
LABEL_165:
                  if ( !v44 )
                    goto LABEL_196;
                  if ( v55 )
                    goto LABEL_185;
                  v19 = v41;
                  v43 = ++v48;
                  v23 = v46;
LABEL_168:
                  if ( v45 )
                  {
                    *v19 = v49;
                  }
                  else if ( v56 )
                  {
                    *(_DWORD *)v19 = v23;
                  }
                  else
                  {
                    *(_WORD *)v19 = v23;
                  }
                  goto LABEL_185;
                }
              }
              else
              {
                if ( !v25 )
                {
                  while ( 1 )
                  {
                    if ( v21 == 120 || v21 == 112 )
                    {
                      if ( (v5 & 0xFF00) != 0 || SLOBYTE(_pctype[(unsigned __int8)v5]) >= 0 )
                      {
LABEL_160:
                        --v52;
                        un_inc(v5, Stream);
                        break;
                      }
                      v46 *= 16;
                      v32 = hextodec_1(v5);
                      v31 = v46;
                      LOWORD(v5) = v32;
                      v50 = v32;
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (_pctype[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_160;
                      if ( v21 == 111 )
                      {
                        if ( (unsigned __int16)v5 >= 0x38u )
                          goto LABEL_160;
                        v31 = 8 * v46;
                      }
                      else
                      {
                        v31 = 10 * v46;
                      }
                    }
                    ++v44;
                    v33 = (unsigned __int16)v5 + v31 - 48;
                    v46 = v33;
                    if ( v47 )
                    {
                      if ( !--v51 )
                        goto LABEL_162;
                    }
                    ++v52;
                    LOWORD(v5) = _fgetwc_nolock(Stream);
                    v50 = (unsigned __int16)v5;
                  }
                }
                v33 = v46;
LABEL_162:
                if ( v53 )
                  v46 = -v33;
              }
              v9 = 0;
              goto LABEL_165;
          }
          if ( v21 != 110 )
          {
            if ( v21 != 111 )
              goto LABEL_96;
            goto LABEL_82;
          }
          v23 = v52;
          v9 = 0;
          if ( !v55 )
            goto LABEL_168;
LABEL_185:
          ++v54;
          ++v4;
LABEL_189:
          if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v4[1] != 110) )
            goto LABEL_199;
LABEL_192:
          v6 = *v4;
          if ( !*v4 )
            goto LABEL_196;
          v7 = v52;
          continue;
        }
        if ( v57 <= 0 )
          *(_BYTE *)v19 = 0;
        else
          *(_WORD *)v19 = 0;
      }
      v9 = 0;
LABEL_196:
      v36 = 0;
      goto LABEL_197;
    }
    break;
  }
  if ( v21 == 99 || v21 == 123 )
  {
    ++v52;
    v22 = _fgetwc_nolock(Stream);
  }
  else
  {
    v22 = whiteout_1(&v52, Stream);
  }
  LOWORD(v5) = v22;
  v9 = 0;
  v50 = v22;
  if ( v22 != 0xFFFF )
  {
    v19 = v41;
    goto LABEL_68;
  }
LABEL_199:
  if ( v48 || v54 )
    return v48;
  return v9;
}
