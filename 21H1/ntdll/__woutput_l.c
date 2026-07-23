/*
 * XREFs of __woutput_l @ 0x4B2FC3A0
 * Callers:
 *     __snwprintf @ 0x4B2F7110 (__snwprintf.c)
 *     _swprintf @ 0x4B2F7560 (_swprintf.c)
 *     __vswprintf_l @ 0x4B2F775A (__vswprintf_l.c)
 *     __vsnwprintf_l @ 0x4B2F78CD (__vsnwprintf_l.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __aulldvrm @ 0x4B2F6720 (__aulldvrm.c)
 *     write_char_0 @ 0x4B2FCD40 (write_char_0.c)
 *     write_multi_char_0 @ 0x4B2FCD80 (write_multi_char_0.c)
 *     write_string_0 @ 0x4B2FCDAE (write_string_0.c)
 *     __get_printf_count_output @ 0x4B2FED52 (__get_printf_count_output.c)
 *     _mbtowc @ 0x4B2FEE55 (_mbtowc.c)
 */

int __cdecl _woutput_l(FILE *a1, unsigned __int16 *a2, int a3, int *a4)
{
  int v4; // ecx
  int j; // edi
  signed __int64 v6; // rax
  const wchar_t *v7; // esi
  int v8; // ebx
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned __int16 *v12; // ecx
  int v13; // eax
  __int16 v14; // ax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  const char *v18; // ecx
  int v19; // eax
  int v20; // eax
  unsigned __int16 *v21; // ecx
  unsigned int v22; // eax
  int v23; // eax
  wchar_t v24; // ax
  _WORD *k; // edi
  int v26; // edi
  int *v27; // esi
  int v28; // ecx
  int v29; // ebx
  int i; // esi
  unsigned __int64 v31; // rcx
  int v32; // edi
  unsigned __int64 v34; // [esp-14h] [ebp-470h]
  size_t v35; // [esp-4h] [ebp-460h]
  __int16 v36; // [esp-4h] [ebp-460h]
  int v37; // [esp-4h] [ebp-460h]
  int v38; // [esp-4h] [ebp-460h]
  char *SrcCh; // [esp+10h] [ebp-44Ch]
  int SrcCha; // [esp+10h] [ebp-44Ch]
  wchar_t DstCh[2]; // [esp+14h] [ebp-448h] BYREF
  int v42; // [esp+18h] [ebp-444h]
  int v43; // [esp+1Ch] [ebp-440h]
  int v44; // [esp+20h] [ebp-43Ch]
  int v45; // [esp+24h] [ebp-438h] BYREF
  int v46; // [esp+28h] [ebp-434h]
  char v47[4]; // [esp+2Ch] [ebp-430h] BYREF
  int v48; // [esp+30h] [ebp-42Ch]
  FILE *Stream; // [esp+34h] [ebp-428h]
  int v50; // [esp+38h] [ebp-424h]
  int v51; // [esp+3Ch] [ebp-420h]
  int v52; // [esp+40h] [ebp-41Ch]
  int v53; // [esp+44h] [ebp-418h]
  int v54; // [esp+48h] [ebp-414h]
  int *v55; // [esp+4Ch] [ebp-410h]
  unsigned int v56; // [esp+50h] [ebp-40Ch]
  int v57; // [esp+54h] [ebp-408h] BYREF
  wchar_t v58[255]; // [esp+58h] [ebp-404h] BYREF
  _BYTE v59[513]; // [esp+257h] [ebp-205h] BYREF

  Stream = a1;
  v55 = a4;
  v42 = 0;
  v48 = 0;
  v53 = 0;
  v51 = 0;
  v54 = 0;
  v50 = 0;
  v56 = 0;
  if ( a1 && a2 )
  {
    v4 = 0;
    v46 = 0;
    j = 0;
    v57 = 0;
    WORD2(v6) = *a2;
    if ( *a2 )
    {
      v7 = (const wchar_t *)SrcCh;
      while ( 1 )
      {
        ++a2;
        if ( v4 < 0 )
          return v4;
        if ( (unsigned __int16)(WORD2(v6) - 32) > 0x5Au )
          LODWORD(v6) = 0;
        else
          LODWORD(v6) = byte_4B286728[WORD2(v6)] & 0xF;
        v8 = v56;
        v46 = __lookuptable[8 * (_DWORD)v6 + v46] >> 4;
        switch ( v46 )
        {
          case 0:
            goto LABEL_62;
          case 1:
            v53 = -1;
            v54 = 0;
            v48 = 0;
            v51 = 0;
            v56 = 0;
            v50 = 0;
            goto LABEL_189;
          case 2:
            switch ( WORD2(v6) )
            {
              case ' ':
                v9 = v56 | 2;
                goto LABEL_18;
              case '#':
                v9 = v56 | 0x80;
                goto LABEL_18;
              case '+':
                v9 = v56 | 1;
                goto LABEL_18;
              case '-':
                v9 = v56 | 4;
                goto LABEL_18;
            }
            v4 = v57;
            if ( WORD2(v6) == 48 )
              v56 |= 8u;
            goto LABEL_190;
          case 3:
            if ( WORD2(v6) != 42 )
            {
              v48 = WORD2(v6) + 10 * v48 - 48;
              goto LABEL_189;
            }
            v10 = *v55++;
            v4 = v57;
            v48 = v10;
            if ( v10 < 0 )
            {
              v56 |= 4u;
              v48 = -v10;
            }
            goto LABEL_190;
          case 4:
            v11 = 0;
            goto LABEL_27;
          case 5:
            if ( WORD2(v6) == 42 )
            {
              ++v55;
              v4 = v57;
              v53 = *(v55 - 1);
              if ( v53 < 0 )
                v53 = -1;
              goto LABEL_190;
            }
            v11 = WORD2(v6) + 10 * v53 - 48;
LABEL_27:
            v53 = v11;
            goto LABEL_189;
          case 6:
            switch ( WORD2(v6) )
            {
              case 'I':
                goto LABEL_39;
              case 'h':
                v15 = 32;
                goto LABEL_48;
              case 'j':
                goto LABEL_39;
              case 'l':
                v14 = *a2;
                if ( *a2 == 108 )
                  ++a2;
                v15 = v14 == 108 ? 4096 : 16;
LABEL_48:
                v9 = v15 | v56;
LABEL_18:
                v56 = v9;
                goto LABEL_189;
              case 't':
                goto LABEL_39;
              case 'w':
                v9 = v56 | 0x800;
                goto LABEL_18;
              case 'z':
LABEL_39:
                if ( WORD2(v6) == 73 )
                {
                  v12 = a2;
                  v13 = *a2;
                  if ( v13 == 54 && a2[1] == 52 )
                  {
                    a2 += 2;
LABEL_43:
                    v9 = v56 | 0x8000;
                    goto LABEL_18;
                  }
                  if ( v13 == 51 && a2[1] == 50 )
                  {
                    v9 = v56 & 0xFFFF7FFF;
                    a2 += 2;
                    goto LABEL_18;
                  }
                }
                else
                {
                  if ( WORD2(v6) == 106 )
                    goto LABEL_43;
                  v12 = a2;
                }
                v16 = *v12;
                if ( v16 != 100 && (_WORD)v16 != 105 && v16 != 111 && v16 != 117 && v16 != 120 && v16 != 88 )
                {
                  v46 = 0;
LABEL_62:
                  v50 = 1;
                  write_char_0(WORD2(v6), Stream, (int)&v57);
                }
                break;
            }
            goto LABEL_189;
          case 7:
            if ( WORD2(v6) <= 0x69u )
            {
              if ( WORD2(v6) != 105 )
              {
                switch ( WORD2(v6) )
                {
                  case 'C':
                    if ( (v56 & 0x830) == 0 )
                    {
                      LOWORD(v8) = v56 | 0x20;
                      v56 |= 0x20u;
                    }
                    break;
                  case 'S':
                    if ( (v56 & 0x830) == 0 )
                    {
                      LOWORD(v8) = v56 | 0x20;
                      v56 |= 0x20u;
                    }
                    goto LABEL_100;
                  case 'X':
                    goto LABEL_132;
                  case 'Z':
                    v21 = (unsigned __int16 *)*v55++;
                    if ( v21 && (v7 = (const wchar_t *)*((_DWORD *)v21 + 1)) != 0 )
                    {
                      v22 = *v21;
                      if ( v21[1] < (unsigned __int16)v22 )
                        goto LABEL_192;
                      j = *v21;
                      if ( (v56 & 0x800) != 0 )
                      {
                        if ( (v22 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                          goto LABEL_192;
                        j = v22 >> 1;
                        v50 = 1;
                      }
                      else
                      {
                        v50 = 0;
                      }
                    }
                    else
                    {
                      v7 = (const wchar_t *)"(null)";
                      j = 6;
                    }
                    goto LABEL_71;
                  case 'c':
                    break;
                  case 'd':
                    goto LABEL_116;
                  default:
                    goto LABEL_71;
                }
                v50 = 1;
                v24 = *((_WORD *)++v55 - 2);
                DstCh[0] = v24;
                if ( (v8 & 0x20) != 0 )
                {
                  LODWORD(v35) = __mb_cur_max;
                  v47[0] = v24;
                  v47[1] = 0;
                  if ( mbtowc(v58, v47, v35) < 0 )
                    v54 = 1;
                }
                else
                {
                  v58[0] = v24;
                }
                v7 = v58;
                j = 1;
                goto LABEL_71;
              }
LABEL_116:
              v8 = v56 | 0x40;
              v37 = 10;
              goto LABEL_138;
            }
            if ( WORD2(v6) != 110 )
            {
              if ( WORD2(v6) != 111 )
              {
                if ( WORD2(v6) != 112 )
                {
                  if ( WORD2(v6) != 115 )
                  {
                    if ( WORD2(v6) != 117 )
                    {
                      if ( WORD2(v6) == 120 )
                      {
                        v38 = 39;
                        goto LABEL_133;
                      }
LABEL_71:
                      v17 = v54;
                      goto LABEL_72;
                    }
                    v37 = 10;
LABEL_139:
                    v26 = v37;
                    v52 = v37;
LABEL_140:
                    if ( (v8 & 0x8000) != 0 )
                    {
                      v27 = v55 + 2;
                      v28 = *v55;
                      HIDWORD(v6) = v55[1];
                      goto LABEL_152;
                    }
                    if ( (v8 & 0x1000) != 0 )
                    {
                      v55 += 2;
                      v28 = *(v55 - 2);
                      HIDWORD(v6) = *(v55 - 1);
                    }
                    else
                    {
                      v27 = ++v55;
                      if ( (v8 & 0x20) != 0 )
                      {
                        if ( (v8 & 0x40) != 0 )
                          LODWORD(v6) = *((__int16 *)v27 - 2);
                        else
                          LODWORD(v6) = *((unsigned __int16 *)v27 - 2);
                        v6 = (int)v6;
                        v28 = v6;
                      }
                      else
                      {
                        if ( (v8 & 0x40) != 0 )
                        {
                          v6 = *(v27 - 1);
                          v28 = *(v27 - 1);
                        }
                        else
                        {
                          v28 = *(v27 - 1);
                          HIDWORD(v6) = 0;
                        }
LABEL_152:
                        v55 = v27;
                      }
                    }
                    if ( (v8 & 0x40) != 0 && v6 < 0 )
                    {
                      v28 = -v28;
                      HIDWORD(v6) = (unsigned __int64)-__SPAIR64__(HIDWORD(v6), v28) >> 32;
                      v8 |= 0x100u;
                      v56 = v8;
                    }
                    if ( (v8 & 0x9000) == 0 )
                      HIDWORD(v6) = 0;
                    if ( v53 >= 0 )
                    {
                      v56 = v8 & 0xFFFFFFF7;
                      v29 = v53;
                      if ( v53 > 512 )
                        v29 = 512;
                    }
                    else
                    {
                      v29 = 1;
                    }
                    if ( !__PAIR64__(v28, HIDWORD(v6)) )
                      v51 = HIDWORD(v6) | v28;
                    for ( i = (int)v59; ; --i )
                    {
                      v43 = i;
                      v53 = v29 - 1;
                      if ( v29 <= 0 && !__PAIR64__(v28, HIDWORD(v6)) )
                        break;
                      v34 = __PAIR64__(HIDWORD(v6), v28);
                      v31 = __PAIR64__(HIDWORD(v6), v28) % (unsigned int)v26;
                      v6 = v34 / (unsigned int)v26;
                      v32 = v31;
                      v28 = v6;
                      LOBYTE(v6) = v32 + 48;
                      if ( v32 + 48 > 57 )
                        LOBYTE(v6) = v32 + v42 + 48;
                      v26 = v52;
                      v29 = v53;
                      *(_BYTE *)i = v6;
                    }
                    LOWORD(v8) = v56;
                    j = (int)&v59[-i];
                    v7 = (const wchar_t *)(i + 1);
                    if ( (v56 & 0x200) != 0 && (!j || *(_BYTE *)v7 != 48) )
                    {
                      v7 = (const wchar_t *)v43;
                      ++j;
                      *(_BYTE *)v43 = 48;
                    }
                    goto LABEL_71;
                  }
LABEL_100:
                  v23 = v53;
                  if ( v53 == -1 )
                    v23 = 0x7FFFFFFF;
                  v7 = (const wchar_t *)*v55++;
                  if ( (v8 & 0x20) != 0 )
                  {
                    if ( !v7 )
                      v7 = (const wchar_t *)"(null)";
                    for ( j = 0; j < v23; ++j )
                    {
                      if ( !*((_BYTE *)v7 + j) )
                        break;
                    }
                  }
                  else
                  {
                    if ( !v7 )
                      v7 = L"(null)";
                    v50 = 1;
                    for ( k = v7; v23; ++k )
                    {
                      --v23;
                      if ( !*k )
                        break;
                    }
                    j = k - v7;
                  }
                  goto LABEL_71;
                }
                v53 = 8;
LABEL_132:
                v38 = 7;
LABEL_133:
                v42 = v38;
                if ( (v56 & 0x80u) != 0 )
                {
                  LOWORD(v45) = 48;
                  HIWORD(v45) = v38 + 81;
                  v51 = 2;
                }
                v37 = 16;
                goto LABEL_139;
              }
              v26 = 8;
              v52 = 8;
              if ( (v56 & 0x80u) == 0 )
                goto LABEL_140;
              v8 = v56 | 0x200;
              v37 = 8;
LABEL_138:
              v56 = v8;
              goto LABEL_139;
            }
            v52 = *v55++;
            if ( !_get_printf_count_output() )
              goto LABEL_192;
            if ( (v8 & 0x20) != 0 )
              *(_WORD *)v52 = v57;
            else
              *(_DWORD *)v52 = v57;
            v17 = 1;
            v54 = 1;
LABEL_72:
            if ( v17 )
              goto LABEL_189;
            if ( (v8 & 0x40) == 0 )
              goto LABEL_77;
            if ( (v8 & 0x100) != 0 )
            {
              v36 = 45;
LABEL_76:
              LOWORD(v45) = v36;
              v51 = 1;
              goto LABEL_77;
            }
            if ( (v8 & 1) != 0 )
            {
              v36 = 43;
              goto LABEL_76;
            }
            if ( (v8 & 2) != 0 )
            {
              LOWORD(v45) = 32;
              v51 = 1;
            }
LABEL_77:
            v43 = v48 - j - v51;
            v44 = v8 & 0xC;
            if ( (v8 & 0xC) == 0 )
              write_multi_char_0(0x20u, v48 - j - v51, Stream, (int)&v57);
            write_string_0((int)&v45, v51, Stream, (int)&v57);
            if ( v44 == 8 )
              write_multi_char_0(0x30u, v43, Stream, (int)&v57);
            if ( v50 || j <= 0 )
            {
              write_string_0((int)v7, j, Stream, (int)&v57);
LABEL_185:
              v4 = v57;
            }
            else
            {
              v18 = (const char *)v7;
              v44 = (int)v7;
              v19 = j;
              while ( 1 )
              {
                LODWORD(v35) = __mb_cur_max;
                v52 = v19 - 1;
                v20 = mbtowc(DstCh, v18, v35);
                SrcCha = v20;
                if ( v20 == 2 )
                  --v52;
                if ( v20 <= 0 )
                  break;
                write_char_0(DstCh[0], Stream, (int)&v57);
                v18 = (const char *)(SrcCha + v44);
                v19 = v52;
                v44 += SrcCha;
                if ( v52 <= 0 )
                  goto LABEL_185;
              }
              v4 = -1;
              v57 = -1;
            }
            if ( v4 >= 0 && (v8 & 4) != 0 )
            {
              write_multi_char_0(0x20u, v43, Stream, (int)&v57);
LABEL_189:
              v4 = v57;
            }
LABEL_190:
            WORD2(v6) = *a2;
            if ( !*a2 )
              return v4;
            break;
          default:
            goto LABEL_189;
        }
      }
    }
    return v4;
  }
  else
  {
LABEL_192:
    _invalid_parameter();
    return -1;
  }
}
