/*
 * XREFs of __output_s @ 0x4B3008FA
 * Callers:
 *     __soutput_s @ 0x4B3012D8 (__soutput_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __aulldvrm @ 0x4B2F6720 (__aulldvrm.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     write_char @ 0x4B2FC2B8 (write_char.c)
 *     write_multi_char @ 0x4B2FC302 (write_multi_char.c)
 *     __safecrt_wctomb_s @ 0x4B301240 (__safecrt_wctomb_s.c)
 *     write_string_1 @ 0x4B30138C (write_string_1.c)
 */

int __cdecl _output_s(int a1, signed __int8 *a2, int a3)
{
  CHAR *v3; // esi
  signed __int8 v4; // dl
  int v5; // edi
  unsigned __int8 *v6; // ecx
  int v7; // eax
  int v8; // ebx
  signed __int64 v9; // rax
  unsigned int v10; // ebx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // al
  unsigned __int16 *v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  char *i; // edi
  int v20; // edx
  int v21; // eax
  _BYTE *j; // edi
  int v23; // edi
  int v24; // ecx
  int v25; // esi
  int v26; // ebx
  CHAR *k; // esi
  unsigned __int64 v28; // rcx
  int v29; // edi
  WCHAR *v30; // ecx
  int v31; // eax
  unsigned __int64 v33; // [esp-14h] [ebp-278h]
  size_t v34; // [esp-4h] [ebp-268h]
  int v35; // [esp-4h] [ebp-268h]
  char v36; // [esp-4h] [ebp-268h]
  WCHAR *v37; // [esp+10h] [ebp-254h]
  int v38; // [esp+14h] [ebp-250h]
  unsigned __int8 v39; // [esp+18h] [ebp-24Ch]
  int v40; // [esp+1Ch] [ebp-248h]
  char v41; // [esp+20h] [ebp-244h]
  CHAR *v42; // [esp+24h] [ebp-240h]
  int v43; // [esp+24h] [ebp-240h]
  int v44; // [esp+28h] [ebp-23Ch] BYREF
  int v45; // [esp+2Ch] [ebp-238h]
  int v46; // [esp+30h] [ebp-234h]
  int v47; // [esp+34h] [ebp-230h]
  int v48; // [esp+38h] [ebp-22Ch]
  int v49; // [esp+3Ch] [ebp-228h]
  int v50; // [esp+40h] [ebp-224h] BYREF
  _BYTE v51[4]; // [esp+44h] [ebp-220h] BYREF
  int v52; // [esp+48h] [ebp-21Ch]
  int v53; // [esp+4Ch] [ebp-218h] BYREF
  int v54; // [esp+50h] [ebp-214h]
  unsigned int v55; // [esp+54h] [ebp-210h]
  CHAR MultiByteString[511]; // [esp+58h] [ebp-20Ch] BYREF
  char v57; // [esp+257h] [ebp-Dh] BYREF
  CHAR v58[8]; // [esp+258h] [ebp-Ch] BYREF
  unsigned __int8 *v59; // [esp+270h] [ebp+Ch]

  v54 = a3;
  LODWORD(v34) = 512;
  v41 = 0;
  v47 = 0;
  v3 = 0;
  v52 = 0;
  v49 = 0;
  v40 = 0;
  v48 = a1;
  v55 = 0;
  memset(MultiByteString, 0, v34);
  v46 = 0;
  if ( a1 && a2 )
  {
    v4 = *a2;
    v5 = 0;
    v50 = 0;
    v53 = 0;
    v45 = 0;
    v39 = v4;
    if ( !v4 )
      return v50;
    v6 = (unsigned __int8 *)a2;
    while ( 1 )
    {
      v59 = v6 + 1;
      if ( v50 < 0 )
        break;
      if ( (unsigned __int8)(v4 - 32) > 0x5Au )
        v7 = 0;
      else
        v7 = *((_BYTE *)&_d_max + v4) & 0xF;
      v8 = v55;
      LODWORD(v9) = (unsigned __int8)__lookuptable_s[9 * v7 + v45] >> 4;
      v45 = v9;
      if ( (_DWORD)v9 == 8 )
        goto LABEL_187;
      switch ( (int)v9 )
      {
        case 0:
          goto LABEL_62;
        case 1:
          v52 = -1;
          v40 = 0;
          v47 = 0;
          v49 = 0;
          v55 = 0;
          v46 = 0;
          goto LABEL_182;
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
            goto LABEL_183;
          v10 = v55 | 8;
          goto LABEL_18;
        case 3:
          if ( v4 != 42 )
          {
            v47 = v4 + 10 * v47 - 48;
            goto LABEL_182;
          }
          v54 += 4;
          v12 = *(_DWORD *)(v54 - 4);
          ++v6;
          v47 = v12;
          if ( v12 < 0 )
          {
            v55 |= 4u;
            v47 = -v12;
          }
          goto LABEL_183;
        case 4:
          v13 = 0;
          goto LABEL_29;
        case 5:
          if ( v4 == 42 )
          {
            v54 += 4;
            ++v6;
            v52 = *(_DWORD *)(v54 - 4);
            if ( v52 < 0 )
              v52 = -1;
            goto LABEL_183;
          }
          v13 = v4 + 10 * v52 - 48;
LABEL_29:
          v52 = v13;
          goto LABEL_182;
        case 6:
          if ( v4 == 73 )
            goto LABEL_41;
          if ( v4 == 104 )
          {
            v11 = v55 | 0x20;
            goto LABEL_20;
          }
          if ( v4 != 106 )
          {
            if ( v4 == 108 )
            {
              v14 = *v59;
              if ( *v59 == 108 )
                ++v59;
              v11 = (v14 == 108 ? 4096 : 16) | v55;
              goto LABEL_20;
            }
            if ( v4 != 116 )
            {
              if ( v4 == 119 )
              {
                v11 = v55 | 0x800;
LABEL_20:
                v55 = v11;
LABEL_182:
                v6 = v59;
                goto LABEL_183;
              }
              if ( v4 != 122 )
                goto LABEL_182;
            }
          }
LABEL_41:
          ++v6;
          if ( v4 == 73 )
          {
            if ( *v59 == 54 && v59[1] == 52 )
            {
              v6 = v59 + 2;
LABEL_54:
              v10 = v55 | 0x8000;
LABEL_18:
              v55 = v10;
              goto LABEL_183;
            }
            if ( *v59 == 51 && v59[1] == 50 )
            {
              v6 = v59 + 2;
              v10 = v55 & 0xFFFF7FFF;
              goto LABEL_18;
            }
          }
          else if ( v4 == 106 )
          {
            goto LABEL_54;
          }
          v15 = *v59;
          if ( *v59 != 100 && v15 != 105 && v15 != 111 && v15 != 117 && v15 != 120 && v15 != 88 )
          {
            v45 = 0;
LABEL_62:
            v46 = 0;
            write_char(v39, v48, &v50);
            goto LABEL_182;
          }
LABEL_183:
          v4 = *v6;
          v39 = *v6;
          if ( !*v6 )
            goto LABEL_184;
          break;
        case 7:
          if ( v4 <= 105 )
          {
            switch ( v4 )
            {
              case 'i':
                goto LABEL_71;
              case 'C':
                if ( (v55 & 0x830) == 0 )
                {
                  LOWORD(v8) = v55 | 0x800;
                  v55 |= 0x800u;
                }
LABEL_94:
                v20 = v54 + 4;
                v54 += 4;
                if ( (v8 & 0x810) != 0 )
                {
                  v21 = _safecrt_wctomb_s((int)&v53, MultiByteString, 0x200u, *(_WORD *)(v20 - 4));
                  v5 = v53;
                  if ( v21 )
                    v40 = 1;
                }
                else
                {
                  v5 = 1;
                  MultiByteString[0] = *(_BYTE *)(v20 - 4);
                  v53 = 1;
                }
                v3 = MultiByteString;
                goto LABEL_157;
              case 'S':
                if ( (v55 & 0x830) == 0 )
                {
                  LOWORD(v8) = v55 | 0x800;
                  v55 |= 0x800u;
                }
LABEL_83:
                v18 = v52;
                if ( v52 == -1 )
                  v18 = 0x7FFFFFFF;
                v54 += 4;
                v3 = *(CHAR **)(v54 - 4);
                if ( (v8 & 0x810) != 0 )
                {
                  if ( !v3 )
                    v3 = (CHAR *)L"(null)";
                  v46 = 1;
                  for ( i = v3; v18; i += 2 )
                  {
                    --v18;
                    if ( !*(_WORD *)i )
                      break;
                  }
                  v5 = (i - v3) >> 1;
                }
                else
                {
                  if ( !v3 )
                    v3 = "(null)";
                  for ( j = v3; v18; ++j )
                  {
                    --v18;
                    if ( !*j )
                      break;
                  }
                  v5 = j - v3;
                }
LABEL_156:
                v53 = v5;
                goto LABEL_157;
            }
            if ( v4 != 88 )
            {
              if ( v4 == 90 )
              {
                v54 += 4;
                v16 = *(unsigned __int16 **)(v54 - 4);
                if ( v16 && (v3 = (CHAR *)*((_DWORD *)v16 + 1)) != 0 )
                {
                  v17 = *v16;
                  if ( v16[1] < (unsigned __int16)v17 )
                    goto LABEL_187;
                  v5 = *v16;
                  if ( (v55 & 0x800) != 0 )
                  {
                    if ( (v17 & 1) != 0 || ((unsigned __int8)v3 & 1) != 0 )
                      goto LABEL_187;
                    v5 = v17 >> 1;
                    v46 = 1;
                  }
                  else
                  {
                    v46 = 0;
                  }
                }
                else
                {
                  v3 = "(null)";
                  v5 = 6;
                }
                goto LABEL_156;
              }
              if ( v4 == 99 )
                goto LABEL_94;
              if ( v4 != 100 )
                goto LABEL_157;
LABEL_71:
              v8 = v55 | 0x40;
              v35 = 10;
LABEL_121:
              v55 = v8;
              goto LABEL_122;
            }
            goto LABEL_115;
          }
          switch ( v4 )
          {
            case 'n':
              goto LABEL_187;
            case 'o':
              v23 = 8;
              v53 = 8;
              if ( (v55 & 0x80u) == 0 )
                goto LABEL_123;
              v8 = v55 | 0x200;
              v35 = 8;
              goto LABEL_121;
            case 'p':
              v52 = 8;
LABEL_115:
              v36 = 7;
              goto LABEL_116;
            case 's':
              goto LABEL_83;
            case 'u':
              v35 = 10;
              goto LABEL_122;
          }
          if ( v4 != 120 )
            goto LABEL_157;
          v36 = 39;
LABEL_116:
          v41 = v36;
          if ( (v55 & 0x80u) != 0 )
          {
            v51[0] = 48;
            v51[1] = v36 + 81;
            v49 = 2;
          }
          v35 = 16;
LABEL_122:
          v23 = v35;
          v53 = v35;
LABEL_123:
          if ( (v8 & 0x8000) != 0 )
          {
            v54 += 8;
            v24 = *(_DWORD *)(v54 - 8);
            HIDWORD(v9) = *(_DWORD *)(v54 - 4);
            goto LABEL_135;
          }
          if ( (v8 & 0x1000) != 0 )
          {
            v54 += 8;
            v24 = *(_DWORD *)(v54 - 8);
            HIDWORD(v9) = *(_DWORD *)(v54 - 4);
            goto LABEL_135;
          }
          v25 = v54 + 4;
          v54 += 4;
          if ( (v8 & 0x20) != 0 )
          {
            if ( (v8 & 0x40) != 0 )
              LODWORD(v9) = *(__int16 *)(v25 - 4);
            else
              LODWORD(v9) = *(unsigned __int16 *)(v25 - 4);
            goto LABEL_133;
          }
          v54 = v25;
          if ( (v8 & 0x40) != 0 )
          {
            LODWORD(v9) = *(_DWORD *)(v25 - 4);
LABEL_133:
            v9 = (int)v9;
            v24 = v9;
            goto LABEL_135;
          }
          v9 = 0LL;
          v24 = *(_DWORD *)(v25 - 4);
LABEL_135:
          if ( (v8 & 0x40) != 0 && v9 < 0 )
          {
            v24 = -v24;
            HIDWORD(v9) = (unsigned __int64)-__SPAIR64__(HIDWORD(v9), v24) >> 32;
            v8 |= 0x100u;
            v55 = v8;
          }
          if ( (v8 & 0x9000) == 0 )
            HIDWORD(v9) = 0;
          if ( v52 >= 0 )
          {
            v55 = v8 & 0xFFFFFFF7;
            v26 = v52;
            if ( v52 > 512 )
              v26 = 512;
          }
          else
          {
            v26 = 1;
          }
          if ( !__PAIR64__(v24, HIDWORD(v9)) )
            v49 = 0;
          for ( k = &v57; ; --k )
          {
            v42 = k;
            v52 = v26 - 1;
            if ( v26 <= 0 && !__PAIR64__(v24, HIDWORD(v9)) )
              break;
            v33 = __PAIR64__(HIDWORD(v9), v24);
            v28 = __PAIR64__(HIDWORD(v9), v24) % (unsigned int)v23;
            v9 = v33 / (unsigned int)v23;
            v29 = v28;
            v24 = v9;
            LOBYTE(v9) = v29 + 48;
            if ( v29 + 48 > 57 )
              LOBYTE(v9) = v29 + v41 + 48;
            v23 = v53;
            v26 = v52;
            *k = v9;
          }
          LOWORD(v8) = v55;
          v5 = &v57 - k;
          v3 = k + 1;
          v53 = v5;
          if ( (v55 & 0x200) != 0 && (!v5 || *v3 != 48) )
          {
            v3 = v42;
            ++v5;
            *v42 = 48;
            goto LABEL_156;
          }
LABEL_157:
          if ( v40 )
            goto LABEL_182;
          if ( (v8 & 0x40) == 0 )
            goto LABEL_166;
          if ( (v8 & 0x100) != 0 )
          {
            v51[0] = 45;
          }
          else if ( (v8 & 1) != 0 )
          {
            v51[0] = 43;
          }
          else
          {
            if ( (v8 & 2) == 0 )
              goto LABEL_166;
            v51[0] = 32;
          }
          v49 = 1;
LABEL_166:
          v43 = v47 - v5 - v49;
          v44 = v8 & 0xC;
          if ( (v8 & 0xC) == 0 )
            write_multi_char(0x20u, v47 - v5 - v49, v48, &v50);
          write_string_1(v51, v49, v48, &v50);
          if ( v44 == 8 )
            write_multi_char(0x30u, v43, v48, &v50);
          if ( v46 && v5 > 0 )
          {
            v30 = (WCHAR *)v3;
            v44 = 0;
            v31 = v5;
            while ( 1 )
            {
              v38 = v31 - 1;
              v37 = v30 + 1;
              if ( _safecrt_wctomb_s((int)&v44, v58, 6u, *v30) || !v44 )
                break;
              write_string_1(v58, v44, v48, &v50);
              v31 = v38;
              v30 = v37;
              if ( !v38 )
                goto LABEL_179;
            }
            v50 = -1;
          }
          else
          {
            write_string_1(v3, v5, v48, &v50);
          }
LABEL_179:
          if ( v50 >= 0 && (v8 & 4) != 0 )
            write_multi_char(0x20u, v43, v48, &v50);
          goto LABEL_182;
        default:
          goto LABEL_182;
      }
    }
LABEL_184:
    if ( !v45 || v45 == 7 )
      return v50;
  }
LABEL_187:
  _invalid_parameter();
  return -1;
}
