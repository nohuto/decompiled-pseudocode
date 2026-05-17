/*
 * XREFs of __woutput_s @ 0x4B301F94
 * Callers:
 *     __swoutput_s @ 0x4B301EAA (__swoutput_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __aulldvrm @ 0x4B2F6720 (__aulldvrm.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __safecrt_mbtowc @ 0x4B3011FE (__safecrt_mbtowc.c)
 *     write_char_1 @ 0x4B3028FC (write_char_1.c)
 *     write_multi_char_1 @ 0x4B302952 (write_multi_char_1.c)
 *     write_string_2 @ 0x4B302980 (write_string_2.c)
 */

int __cdecl _woutput_s(int a1, unsigned __int16 *a2, int *a3)
{
  __int16 *v3; // esi
  unsigned __int16 v4; // dx
  int j; // edi
  unsigned __int16 *v6; // ecx
  int v7; // eax
  int v8; // ebx
  signed __int64 v9; // rax
  unsigned int v10; // ebx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int16 v15; // ax
  int v16; // eax
  int v17; // eax
  unsigned __int16 *v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  unsigned __int16 v21; // ax
  _WORD *k; // edi
  int v23; // edi
  int *v24; // esi
  int v25; // ecx
  int v26; // ebx
  __int16 *i; // esi
  unsigned __int64 v28; // rcx
  int v29; // edi
  _BYTE *v30; // ecx
  int v31; // eax
  _BYTE *v32; // eax
  unsigned __int64 v34; // [esp-14h] [ebp-474h]
  int v35; // [esp-4h] [ebp-464h]
  int v36; // [esp-4h] [ebp-464h]
  __int16 v37; // [esp-4h] [ebp-464h]
  _BYTE *v38; // [esp+10h] [ebp-450h]
  int v39; // [esp+18h] [ebp-448h] BYREF
  int v40; // [esp+1Ch] [ebp-444h]
  int v41; // [esp+20h] [ebp-440h]
  __int16 *v42; // [esp+24h] [ebp-43Ch]
  int v43; // [esp+28h] [ebp-438h]
  _WORD v44[2]; // [esp+2Ch] [ebp-434h] BYREF
  _BYTE v45[4]; // [esp+30h] [ebp-430h] BYREF
  int v46; // [esp+34h] [ebp-42Ch]
  int v47; // [esp+38h] [ebp-428h]
  int v48; // [esp+3Ch] [ebp-424h]
  int v49; // [esp+40h] [ebp-420h]
  int v50; // [esp+44h] [ebp-41Ch]
  int v51; // [esp+48h] [ebp-418h]
  int v52; // [esp+4Ch] [ebp-414h] BYREF
  int v53; // [esp+50h] [ebp-410h]
  int *v54; // [esp+54h] [ebp-40Ch]
  unsigned int v55; // [esp+58h] [ebp-408h]
  __int16 v56[512]; // [esp+5Ch] [ebp-404h] BYREF
  unsigned __int16 *v57; // [esp+46Ch] [ebp+Ch]

  v54 = a3;
  v41 = 0;
  v47 = 0;
  v3 = 0;
  v53 = 0;
  v50 = 0;
  v40 = 0;
  v48 = a1;
  v55 = 0;
  memset(v56, 0, sizeof(v56));
  v39 = 0;
  v49 = 0;
  if ( a1 && a2 )
  {
    v4 = *a2;
    j = 0;
    v52 = 0;
    v46 = 0;
    if ( !v4 )
      return v52;
    v6 = a2;
    while ( 1 )
    {
      v57 = v6 + 1;
      if ( v52 < 0 )
        break;
      if ( (unsigned __int16)(v4 - 32) > 0x5Au )
        v7 = 0;
      else
        v7 = *((_BYTE *)&_d_max + v4) & 0xF;
      v8 = v55;
      LODWORD(v9) = (unsigned __int8)__lookuptable_s[9 * v7 + v46] >> 4;
      v46 = v9;
      if ( (_DWORD)v9 == 8 )
        goto LABEL_188;
      switch ( (int)v9 )
      {
        case 0:
          goto LABEL_63;
        case 1:
          v53 = -1;
          v40 = 0;
          v47 = 0;
          v50 = 0;
          v55 = 0;
          v49 = 0;
          goto LABEL_183;
        case 2:
          switch ( v4 )
          {
            case ' ':
              v11 = v55 | 2;
              goto LABEL_20;
            case '#':
              v11 = v55 | 0x80;
              goto LABEL_20;
            case '+':
              v11 = v55 | 1;
              goto LABEL_20;
            case '-':
              v11 = v55 | 4;
              goto LABEL_20;
          }
          ++v6;
          if ( v4 != 48 )
            goto LABEL_184;
          v10 = v55 | 8;
          goto LABEL_18;
        case 3:
          if ( v4 != 42 )
          {
            v47 = v4 + 10 * v47 - 48;
            goto LABEL_183;
          }
          ++v6;
          v12 = *v54++;
          v47 = v12;
          if ( v12 < 0 )
          {
            v55 |= 4u;
            v47 = -v12;
          }
          goto LABEL_184;
        case 4:
          v13 = 0;
          goto LABEL_29;
        case 5:
          if ( v4 == 42 )
          {
            ++v54;
            ++v6;
            v53 = *(v54 - 1);
            if ( v53 < 0 )
              v53 = -1;
            goto LABEL_184;
          }
          v13 = v4 + 10 * v53 - 48;
LABEL_29:
          v53 = v13;
          goto LABEL_183;
        case 6:
          switch ( v4 )
          {
            case 'I':
              goto LABEL_41;
            case 'h':
              v16 = 32;
              goto LABEL_49;
            case 'j':
              goto LABEL_41;
            case 'l':
              v15 = *v57;
              if ( *v57 == 108 )
                v57 = v6 + 2;
              v16 = v15 == 108 ? 4096 : 16;
LABEL_49:
              v11 = v16 | v55;
LABEL_20:
              v55 = v11;
LABEL_183:
              v6 = v57;
              goto LABEL_184;
          }
          if ( v4 != 116 )
          {
            if ( v4 == 119 )
            {
              v11 = v55 | 0x800;
              goto LABEL_20;
            }
            if ( v4 != 122 )
              goto LABEL_183;
          }
LABEL_41:
          ++v6;
          if ( v4 == 73 )
          {
            v14 = *v57;
            if ( v14 == 54 && v57[1] == 52 )
            {
              v6 = v57 + 2;
LABEL_55:
              v10 = v55 | 0x8000;
LABEL_18:
              v55 = v10;
              goto LABEL_184;
            }
            if ( v14 == 51 && v57[1] == 50 )
            {
              v6 = v57 + 2;
              v10 = v55 & 0xFFFF7FFF;
              goto LABEL_18;
            }
          }
          else if ( v4 == 106 )
          {
            goto LABEL_55;
          }
          v17 = *v57;
          if ( v17 != 100 && (_WORD)v17 != 105 && v17 != 111 && v17 != 117 && v17 != 120 && v17 != 88 )
          {
            v46 = 0;
LABEL_63:
            v49 = 1;
            write_char_1(v4, v48, &v52);
            goto LABEL_183;
          }
LABEL_184:
          v4 = *v6;
          if ( !*v6 )
            goto LABEL_185;
          break;
        case 7:
          if ( v4 > 0x69u )
          {
            switch ( v4 )
            {
              case 'n':
                goto LABEL_188;
              case 'o':
                v23 = 8;
                v51 = 8;
                if ( (v55 & 0x80u) != 0 )
                {
                  v8 = v55 | 0x200;
                  v35 = 8;
                  goto LABEL_121;
                }
LABEL_123:
                if ( (v8 & 0x8000) != 0 )
                {
                  v24 = v54 + 2;
                  v25 = *v54;
                  HIDWORD(v9) = v54[1];
                  goto LABEL_135;
                }
                if ( (v8 & 0x1000) != 0 )
                {
                  v54 += 2;
                  v25 = *(v54 - 2);
                  HIDWORD(v9) = *(v54 - 1);
                }
                else
                {
                  v24 = ++v54;
                  if ( (v8 & 0x20) != 0 )
                  {
                    if ( (v8 & 0x40) != 0 )
                      LODWORD(v9) = *((__int16 *)v24 - 2);
                    else
                      LODWORD(v9) = *((unsigned __int16 *)v24 - 2);
                    v9 = (int)v9;
                    v25 = v9;
                  }
                  else
                  {
                    if ( (v8 & 0x40) != 0 )
                    {
                      v9 = *(v24 - 1);
                      v25 = *(v24 - 1);
                    }
                    else
                    {
                      v25 = *(v24 - 1);
                      HIDWORD(v9) = 0;
                    }
LABEL_135:
                    v54 = v24;
                  }
                }
                if ( (v8 & 0x40) != 0 && v9 < 0 )
                {
                  v25 = -v25;
                  HIDWORD(v9) = (unsigned __int64)-__SPAIR64__(HIDWORD(v9), v25) >> 32;
                  v8 |= 0x100u;
                  v55 = v8;
                }
                if ( (v8 & 0x9000) == 0 )
                  HIDWORD(v9) = 0;
                if ( v53 >= 0 )
                {
                  v55 = v8 & 0xFFFFFFF7;
                  v26 = v53;
                  if ( v53 > 512 )
                    v26 = 512;
                }
                else
                {
                  v26 = 1;
                }
                if ( !__PAIR64__(v25, HIDWORD(v9)) )
                  v50 = HIDWORD(v9) | v25;
                for ( i = (__int16 *)((char *)&v56[255] + 1); ; i = (__int16 *)((char *)i - 1) )
                {
                  v42 = i;
                  v53 = v26 - 1;
                  if ( v26 <= 0 && !__PAIR64__(v25, HIDWORD(v9)) )
                    break;
                  v34 = __PAIR64__(HIDWORD(v9), v25);
                  v28 = __PAIR64__(HIDWORD(v9), v25) % (unsigned int)v23;
                  v9 = v34 / (unsigned int)v23;
                  v29 = v28;
                  v25 = v9;
                  LOBYTE(v9) = v29 + 48;
                  if ( v29 + 48 > 57 )
                    LOBYTE(v9) = v29 + v41 + 48;
                  v23 = v51;
                  v26 = v53;
                  *(_BYTE *)i = v9;
                }
                LOWORD(v8) = v55;
                j = (char *)&v56[255] + 1 - (char *)i;
                v3 = (__int16 *)((char *)i + 1);
                if ( (v55 & 0x200) != 0 && (!j || *(_BYTE *)v3 != 48) )
                {
                  v3 = v42;
                  ++j;
                  *(_BYTE *)v42 = 48;
                }
                goto LABEL_157;
              case 'p':
                v53 = 8;
LABEL_115:
                v36 = 7;
LABEL_116:
                v41 = v36;
                if ( (v55 & 0x80u) != 0 )
                {
                  v44[0] = 48;
                  v44[1] = v36 + 81;
                  v50 = 2;
                }
                v35 = 16;
                goto LABEL_122;
            }
            if ( v4 != 115 )
            {
              if ( v4 != 117 )
              {
                if ( v4 != 120 )
                  goto LABEL_157;
                v36 = 39;
                goto LABEL_116;
              }
              v35 = 10;
LABEL_122:
              v23 = v35;
              v51 = v35;
              goto LABEL_123;
            }
            goto LABEL_84;
          }
          switch ( v4 )
          {
            case 'i':
              goto LABEL_72;
            case 'C':
              if ( (v55 & 0x830) == 0 )
              {
                LOWORD(v8) = v55 | 0x20;
                v55 |= 0x20u;
              }
LABEL_95:
              v49 = 1;
              v21 = *((_WORD *)++v54 - 2);
              v39 = v21;
              if ( (v8 & 0x20) != 0 )
              {
                v45[0] = v21;
                v45[1] = 0;
                if ( (int)_safecrt_mbtowc(v56, v45, __mb_cur_max) < 0 )
                  v40 = 1;
              }
              else
              {
                v56[0] = v21;
              }
              v3 = v56;
              j = 1;
              goto LABEL_157;
            case 'S':
              if ( (v55 & 0x830) == 0 )
              {
                LOWORD(v8) = v55 | 0x20;
                v55 |= 0x20u;
              }
LABEL_84:
              v20 = v53;
              if ( v53 == -1 )
                v20 = 0x7FFFFFFF;
              v3 = (__int16 *)*v54++;
              if ( (v8 & 0x20) != 0 )
              {
                if ( !v3 )
                  v3 = (__int16 *)"(null)";
                for ( j = 0; j < v20; ++j )
                {
                  if ( !*((_BYTE *)v3 + j) )
                    break;
                }
              }
              else
              {
                if ( !v3 )
                  v3 = L"(null)";
                v49 = 1;
                for ( k = v3; v20; ++k )
                {
                  --v20;
                  if ( !*k )
                    break;
                }
                j = k - v3;
              }
              goto LABEL_157;
            case 'X':
              goto LABEL_115;
          }
          if ( v4 != 90 )
          {
            if ( v4 != 99 )
            {
              if ( v4 != 100 )
                goto LABEL_157;
LABEL_72:
              v8 = v55 | 0x40;
              v35 = 10;
LABEL_121:
              v55 = v8;
              goto LABEL_122;
            }
            goto LABEL_95;
          }
          v18 = (unsigned __int16 *)*v54++;
          if ( v18 && (v3 = (__int16 *)*((_DWORD *)v18 + 1)) != 0 )
          {
            v19 = *v18;
            if ( v18[1] < (unsigned __int16)v19 )
              goto LABEL_188;
            j = *v18;
            if ( (v55 & 0x800) != 0 )
            {
              if ( (v19 & 1) != 0 || ((unsigned __int8)v3 & 1) != 0 )
                goto LABEL_188;
              j = v19 >> 1;
              v49 = 1;
            }
            else
            {
              v49 = 0;
            }
          }
          else
          {
            v3 = (__int16 *)"(null)";
            j = 6;
          }
LABEL_157:
          if ( v40 )
            goto LABEL_183;
          if ( (v8 & 0x40) == 0 )
            goto LABEL_162;
          if ( (v8 & 0x100) != 0 )
          {
            v37 = 45;
LABEL_161:
            v44[0] = v37;
            v50 = 1;
            goto LABEL_162;
          }
          if ( (v8 & 1) != 0 )
          {
            v37 = 43;
            goto LABEL_161;
          }
          if ( (v8 & 2) != 0 )
          {
            v44[0] = 32;
            v50 = 1;
          }
LABEL_162:
          v42 = (__int16 *)(v47 - j - v50);
          v43 = v8 & 0xC;
          if ( (v8 & 0xC) == 0 )
            write_multi_char_1(32, v47 - j - v50, v48, &v52);
          write_string_2(v44, v50, v48, &v52);
          if ( v43 == 8 )
            write_multi_char_1(48, v42, v48, &v52);
          if ( v49 || j <= 0 )
          {
            write_string_2(v3, j, v48, &v52);
          }
          else
          {
            v30 = v3;
            v43 = (int)v3;
            v31 = j;
            while ( 1 )
            {
              v51 = v31 - 1;
              v32 = _safecrt_mbtowc((__int16 *)&v39, v30, __mb_cur_max);
              v38 = v32;
              if ( v32 == (_BYTE *)2 )
                --v51;
              if ( (int)v32 <= 0 )
                break;
              write_char_1(v39, v48, &v52);
              v30 = &v38[v43];
              v31 = v51;
              v43 += (int)v38;
              if ( v51 <= 0 )
                goto LABEL_180;
            }
            v52 = -1;
          }
LABEL_180:
          if ( v52 >= 0 && (v8 & 4) != 0 )
            write_multi_char_1(32, v42, v48, &v52);
          goto LABEL_183;
        default:
          goto LABEL_183;
      }
    }
LABEL_185:
    if ( !v46 || v46 == 7 )
      return v52;
  }
LABEL_188:
  _invalid_parameter();
  return -1;
}
